//***************************************************************************
// Copyright 2007-2019 Universidade do Porto - Faculdade de Engenharia      *
// Laboratório de Sistemas e Tecnologia Subaquática (LSTS)                  *
//***************************************************************************
// This file is part of DUNE: Unified Navigation Environment.               *
//                                                                          *
// Commercial Licence Usage                                                 *
// Licencees holding valid commercial DUNE licences may use this file in    *
// accordance with the commercial licence agreement provided with the       *
// Software or, alternatively, in accordance with the terms contained in a  *
// written agreement between you and Faculdade de Engenharia da             *
// Universidade do Porto. For licensing terms, conditions, and further      *
// information contact lsts@fe.up.pt.                                       *
//                                                                          *
// Modified European Union Public Licence - EUPL v.1.1 Usage                *
// Alternatively, this file may be used under the terms of the Modified     *
// EUPL, Version 1.1 only (the "Licence"), appearing in the file LICENCE.md *
// included in the packaging of this file. You may not use this work        *
// except in compliance with the Licence. Unless required by applicable     *
// law or agreed to in writing, software distributed under the Licence is   *
// distributed on an "AS IS" basis, WITHOUT WARRANTIES OR CONDITIONS OF     *
// ANY KIND, either express or implied. See the Licence for the specific    *
// language governing permissions and limitations at                        *
// https://github.com/LSTS/dune/blob/master/LICENCE.md and                  *
// http://ec.europa.eu/idabc/eupl.html.                                     *
//***************************************************************************
// Author: Nikolai Lauvås (based on GPS by Ricardo Martins)                 *
//***************************************************************************

// ISO C++ 98 headers.
#include <cstring>
#include <algorithm>
#include <cstddef>
#include <ctime>
#include <string>
#include <sstream>

// DUNE headers.
#include <DUNE/DUNE.hpp>

// Local headers.
#include "Reader.hpp"

namespace Sensors
{
  //! Device driver for TBR700RT
  namespace TBR700RT
  {
    using DUNE_NAMESPACES;

    //! Maximum number of initialization commands.
    static const unsigned c_max_init_cmds = 14;
    //! Timeout for waitReply() function.
    static const float c_wait_reply_tout = 4.0;
    //! Power on delay.
    static const double c_pwr_on_delay = 5.0;
    //! Number of fields in fish tag message
    static const unsigned c_tag_fields = 9;
    //! Number of fields in TBR-700RT sensor reading
    static const unsigned c_tbr_sensor_fields = 8;
    struct Arguments
    {
      //! Serial port device.
      std::string uart_dev;
      //! Serial port baud rate.
      unsigned uart_baud;
      //! Order of sentences.
      std::vector<std::string> stn_order;
      //! Input timeout in seconds.
      float inp_tout;
      //! Initialization commands.
      std::string init_cmds[c_max_init_cmds];
      //! Initialization replies.
      std::string init_rpls[c_max_init_cmds];
      //! Power channels.
      std::vector<std::string> pwr_channels;
    };

    struct Task: public Tasks::Task
    {
      //! Serial port handle.
      IO::Handle* m_handle;
      //! Task arguments.
      Arguments m_args;
      //! Last initialization line read.
      std::string m_init_line;
      //! TBRReader thread.
      TBRReader* m_TBRReader;

      Task(const std::string& name, Tasks::Context& ctx):
        Tasks::Task(name, ctx),
        m_handle(NULL),
        m_TBRReader(NULL)
      {
        // Define configuration parameters.
        param("Serial Port - Device", m_args.uart_dev)
        .defaultValue("")
        .description("Serial port device used to communicate with the sensor");

        param("Serial Port - Baud Rate", m_args.uart_baud)
        .defaultValue("4800")
        .description("Serial port baud rate");

        param("Input Timeout", m_args.inp_tout)
        .units(Units::Second)
        .defaultValue("4.0")
        .minimumValue("0.0")
        .description("Input timeout");

        param("Power Channel - Names", m_args.pwr_channels)
        .defaultValue("")
        .description("Device's power channels");

        param("Sentence Order", m_args.stn_order)
        .defaultValue("")
        .description("Sentence order");

        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          std::string cmd_label = String::str("Initialization String %u - Command", i);
          param(cmd_label, m_args.init_cmds[i])
          .defaultValue("");

          std::string rpl_label = String::str("Initialization String %u - Reply", i);
          param(rpl_label, m_args.init_rpls[i])
          .defaultValue("");
        }

        bind<IMC::DevDataText>(this);
        bind<IMC::IoEvent>(this);
      }

      void
      onResourceAcquisition(void)
      {
        if (m_args.pwr_channels.size() > 0)
        {
          IMC::PowerChannelControl pcc;
          pcc.op = IMC::PowerChannelControl::PCC_OP_TURN_ON;
          for (size_t i = 0; i < m_args.pwr_channels.size(); ++i)
          {
            pcc.name = m_args.pwr_channels[i];
            dispatch(pcc);
          }
        }

        Counter<double> timer(c_pwr_on_delay);
        while (!stopping() && !timer.overflow())
          waitForMessages(timer.getRemaining());

        try
        {
          if (!openSocket())
            m_handle = new SerialPort(m_args.uart_dev, m_args.uart_baud);

          m_TBRReader = new TBRReader(this, m_handle);
          m_TBRReader->start();
        }
        catch (...)
        {
          throw RestartNeeded(DTR("1"), 5);
        }
      }

      bool
      openSocket(void)
      {
        char addr[128] = {0};
        unsigned port = 0;

        if (std::sscanf(m_args.uart_dev.c_str(), "tcp://%[^:]:%u", addr, &port) != 2)
          return false;

        TCPSocket* sock = new TCPSocket;
        sock->connect(addr, port);
        m_handle = sock;
        return true;
      }

      void
      onResourceRelease(void)
      {
        if (m_TBRReader != NULL)
        {
          m_TBRReader->stopAndJoin();
          delete m_TBRReader;
          m_TBRReader = NULL;
        }

        Memory::clear(m_handle);
      }

      void
      onResourceInitialization(void)
      {
        for (unsigned i = 0; i < c_max_init_cmds; ++i)
        {
          if (m_args.init_cmds[i].empty())
            continue;

          std::string cmd = String::unescape(m_args.init_cmds[i]);
          m_handle->writeString(cmd.c_str());

          if (!m_args.init_rpls[i].empty())
          {
            std::string rpl = String::unescape(m_args.init_rpls[i]);
            if (!waitInitReply(rpl))
            {
              err("%s: %s", DTR("no reply to command"), m_args.init_cmds[i].c_str());
              throw std::runtime_error(DTR("failed to setup device"));
            }
          }
        }

        sendTbrClockSync();

        setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
      }

      void
      consume(const IMC::DevDataText* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        spew("%s", sanitize(msg->value).c_str());

        if (getEntityState() == IMC::EntityState::ESTA_BOOT)
          m_init_line = msg->value;
        else
          processSentence(msg->value);
      }

      void
      consume(const IMC::IoEvent* msg)
      {
        if (msg->getDestination() != getSystemId())
          return;

        if (msg->getDestinationEntity() != getEntityId())
          return;

        if (msg->type == IMC::IoEvent::IOV_TYPE_INPUT_ERROR)
          throw RestartNeeded(msg->error, 5);
      }

      //! Wait reply to initialization command.
      //! @param[in] stn string to compare.
      //! @return true on successful match, false otherwise.
      bool
      waitInitReply(const std::string& stn)
      {
        Counter<float> counter(c_wait_reply_tout);
        while (!stopping() && !counter.overflow())
        {
          waitForMessages(counter.getRemaining());
          if (m_init_line == stn)
          {
            m_init_line.clear();
            return true;
          }
        }

        return false;
      }

      int calcLuhnVerifDigit(const char *number)
      {
          int i, sum, ch, num, twoup, len;

          len = std::strlen(number);
          sum = 0;
          twoup = 1;
          for (i = len - 1; i >= 0; --i) {
              ch = number[i];
              num = (ch >= '0' && ch <= '9') ? ch - '0' : 0;
              if (twoup) {
                  num += num;
                  if (num > 9) num = (num % 10) + 1;
              }
              sum += num;
              twoup = ++twoup & 1;
          }
          sum = 10 - (sum % 10);
          if (sum == 10) sum = 0;
          return sum;
      }

      void sendTbrClockSync() {
        // Get timestamp from system clock
        std::stringstream ss;
        ss << std::time(0);
        std::string UTCUnixTimestamp = ss.str();

        // Remove last digit
        UTCUnixTimestamp = UTCUnixTimestamp.substr(0,UTCUnixTimestamp.length()-1);

        // Add Luhn verification number
        UTCUnixTimestamp += std::to_string(calcLuhnVerifDigit(UTCUnixTimestamp.c_str()));

        // Add preamble
        std::string cmd = "(+)" + UTCUnixTimestamp;

        // Send sync signal slowly, because TBR700RT can't handle the speed(max 1 char per microsecond)
        char a[1] = {'0'};
        for(char& c : cmd) {
            a[0] = c;
            m_handle->write(a, 1);
            Delay::waitMsec(1);
        }

        spew(DTR("Send: %s"), cmd.c_str());
      }

      //! Read int from input string.
      //! @param[in] str input string.
      //! @param[out] dst number.
      //! @return true if successful, false otherwise.
      bool readIntFromString(const std::string& str, int& dst) {
        try {
          dst = std::stoi(str);
          return true;
        }
        catch (const std::invalid_argument& ia) {
          err(DTR("Invalid argument: %s"), ia.what());
          return false;
        }
        return true;
      }

      //! Process sentence.
      //! @param[in] line line.
      void
      processSentence(const std::string& line)
      {
        spew(DTR("Process"));
        if (line.find("ack01") != std::string::npos) {
          spew(DTR("Sensor clock diciplined"));
        } if(line.find("ack02") != std::string::npos) {
          spew(DTR("Sensor timestamp set"));
        } if (line.find("$") != std::string::npos) {

          // Discard leading noise.
          size_t sidx = 0;
          for (sidx = 0; sidx < line.size(); ++sidx)
          {
            if (line[sidx] == '$')
              break;
          }

          // Split sentence
          std::vector<std::string> parts;
          try {
            spew(DTR("try"));
            String::split(line.substr(sidx + 1, line.size()), ",", parts);
          } catch(const std::exception& ex) {
            err(DTR("Invalid argument: %s"), ex.what());
            return;
          }

          interpretSentence(parts);
        }
      }

      //! Interpret given sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSentence(std::vector<std::string>& parts)
      {
        spew(DTR("Interpret"));
        /*if (parts[0] == m_args.stn_order.front())
        {
          // Test if all sentences received, TODO, can probably be removed
        }*/
        
        if(parts.size() >= 3) {
          if(parts[2]  == "TBR Sensor") {
            interpretSensorReading(parts);
          } else {
            interpretTagDetection(parts);
          }
        }
      }
      //! Interpret SensorReading sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretSensorReading(const std::vector<std::string>& parts) {
        spew(DTR("Interpret SensorReading"));
        if (parts.size() < c_tbr_sensor_fields)
        {
          war(DTR("invalid SensorReading sentence"));
          return;
        }

        int serial_no = 0;
        int unix_timestamp = 0;
        int temperature = 0;
        int avg_noise_level = 0;
        int peak_noise_level = 0;
        int recv_listen_freq = 0;
        int recv_mem_addr = 0;
        float temp_C = 0.0;

        if (readIntFromString(parts[0], serial_no))
        {
          // Receiver serial number
          spew(DTR("Serial number: %u"), serial_no);
        }
        if (readIntFromString(parts[1], unix_timestamp))
        {
          //UTC UNIX timestamp
          spew(DTR("UTC UNIX timestamp: %u"), unix_timestamp);
        }
        if (readIntFromString(parts[3], temperature))
        {
          // Temperature
          temp_C = float(temperature-50)/10.0;
          spew(DTR("Temperature(C): %f"), temp_C);
          IMC::Temperature temp_msg;
          temp_msg.setSourceEntity(255);
          temp_msg.value = fp32_t(temp_C);
          dispatch(temp_msg);
        }
        if (readIntFromString(parts[4], avg_noise_level))
        {
          // Average Noise Level
          spew(DTR("Average Noise Level: %u"), avg_noise_level);
        }
        if (readIntFromString(parts[5], peak_noise_level))
        {
          // Peak noise level
          spew(DTR("Peak noise level: %u"), peak_noise_level);
        }
        if (readIntFromString(parts[6], recv_listen_freq))
        {
          // Noise logging frequency
          spew(DTR("Noise logging frequency: %u"), recv_listen_freq);
        }
        if (readIntFromString(parts[7], recv_mem_addr))
        {
          // Receiver memory address
          spew(DTR("Receiver memory address: %u"), recv_mem_addr);
        }
        IMC::TBRSensor sensor_msg;
        sensor_msg.serial_no = serial_no;
        sensor_msg.unix_timestamp = unix_timestamp;
        sensor_msg.temperature = fp32_t(temp_C);
        sensor_msg.avg_noise_level = avg_noise_level;
        sensor_msg.peak_noise_level = peak_noise_level;
        sensor_msg.recv_listen_freq = recv_listen_freq;
        sensor_msg.recv_mem_addr = recv_mem_addr;
        dispatch(sensor_msg);
      }
      //! Interpret fishtag sentence.
      //! @param[in] parts vector of strings from sentence.
      void
      interpretTagDetection(const std::vector<std::string>& parts)
      {
        spew(DTR("Interpret tag"));
        if (parts.size() < c_tag_fields)
        {
          war(DTR("invalid tag sentence"));
          return;
        }
        
        int serial_no = 0;
        int unix_timestamp = 0;
        int millis = 0;
        int trans_protocol = 0;
        int trans_id = 0;
        int trans_data = 0;
        int SNR = 0;
        int trans_freq = 0;
        int recv_mem_addr = 0;

        if (readIntFromString(parts[0], serial_no))
        {
          // Receiver serial number
          spew(DTR("Serial number: %u"), serial_no);
        }
        if (readIntFromString(parts[1], unix_timestamp))
        {
          //UTC UNIX timestamp
          spew(DTR("UTC UNIX timestamp: %u"), unix_timestamp);
        }
        if (readIntFromString(parts[2], millis))
        {
          //Millisecond timestamp
          spew(DTR("Millisecond timestamp: %u"), millis);
        }

        //Transmit protocol
        if(parts[3] == "R256")
          trans_protocol = IMC::TBRFishTag::TBR_R256;
        else if(parts[3] == "R04K")
          trans_protocol = IMC::TBRFishTag::TBR_R04K;
        else if(parts[3] == "R06K")
          trans_protocol = IMC::TBRFishTag::TBR_R06K;
        else if(parts[3] == "R64K")
          trans_protocol = IMC::TBRFishTag::TBR_R64K;
        else if(parts[3] == "R01M")
          trans_protocol = IMC::TBRFishTag::TBR_R01M;
        else if(parts[3] == "S256")
          trans_protocol = IMC::TBRFishTag::TBR_S256;
        else if(parts[3] == "HS256")
          trans_protocol = IMC::TBRFishTag::TBR_HS256;
        else if(parts[3] == "DS256")
          trans_protocol = IMC::TBRFishTag::TBR_DS256;
        spew(DTR("Transmit protocol: %s, enum: %i"), parts[3].c_str(), trans_protocol);


        if (readIntFromString(parts[4], trans_id))
        {
          // Tag ID number
          spew(DTR("Tag ID: %u"), trans_id);
        }
        if (readIntFromString(parts[5], trans_data))
        {
          // Tag raw data
          spew(DTR("Tag raw data: %u"), trans_data);
        }
        if (readIntFromString(parts[6], SNR))
        {
          // Signal to noise ratio
          spew(DTR("SNR: %u"), SNR);
        }
        if (readIntFromString(parts[7], trans_freq))
        {
          // Signal frequency
          spew(DTR("Signal frequency: %u"), trans_freq);
        }
        if (readIntFromString(parts[8], recv_mem_addr))
        {
          // Receiver memory address
          spew(DTR("Receiver memory address: %u"), recv_mem_addr);
        }
        IMC::TBRFishTag tag_msg;
        tag_msg.serial_no = serial_no;
        tag_msg.unix_timestamp = unix_timestamp;
        tag_msg.millis = millis;
        tag_msg.trans_protocol = trans_protocol;
        tag_msg.trans_id = trans_id;
        tag_msg.trans_data = trans_data;
        tag_msg.snr = SNR;
        tag_msg.trans_freq = trans_freq;
        tag_msg.recv_mem_addr = recv_mem_addr;
        dispatch(tag_msg);
      }
      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
          //sendTbrClockSync();
        }
      }
    };
  }
}

DUNE_TASK
