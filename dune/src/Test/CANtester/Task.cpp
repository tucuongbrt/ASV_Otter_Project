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
// Author: Nikolai Lauvås                                                  *
//***************************************************************************
#define ADDR_TQIF 0xAB
#define ADDR_SOURCE 0xFE
// DUNE headers.
#include <DUNE/DUNE.hpp>
#include <DUNE/Hardware/SocketCAN.hpp>

namespace Test
{
  //! Insert short task description here.
  //!
  //! Insert explanation on task behaviour here.
  //! @author Nikolai Lauvås
  namespace CANtester
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      Hardware::SocketCAN* m_can;
      
      char bfr[254];
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx), 
        m_can(NULL)
      {
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      	try {
      	  m_can = new Hardware::SocketCAN("can0", SocketCAN::CAN_BASIC_EFF);
      	}
      	catch(std::runtime_error& e) {
      		err(DTR("Could not open CAN: %s"), e.what());
      		setEntityState(IMC::EntityState::ESTA_ERROR, Status::CODE_IDLE);
      	}
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      //! Release resources.
      void
      onResourceRelease(void)
      {
        try {
         Memory::clear(m_can);
        }
      	catch(std::runtime_error& e) {
      		err(DTR("Could not clear CAN: %s"), e.what());
      	}
      }

      //! Main loop.
      void
      onMain(void)
      {
      	int send = 1;
        while (!stopping())
        {
          if(m_can) {
          	m_can->flush();
            // Reading with timeout
            if (Poll::poll(*m_can, 1.0)) {
              m_can->readHexString(bfr, sizeof(bfr)); // REMEMBER DELETE
              inf(DTR("MSG received: %s"), bfr);
            } else {
              inf(DTR("timeout"));
            }
            // Sending
            if(send) {
            	
              bfr[0] = 0xa5;
              bfr[1] = 0xa5;
              bfr[2] = 0xa5;
              bfr[3] = 0xa5;
              //int msg_id = 13;
              uint32_t id= 0x00C0feab;
              m_can->setTXID(id);
              m_can->write(bfr, 4);
              Delay::wait(1);

              send=0;
            }
          }
          waitForMessages(1.0);
        }
      }
    };
  }
}

DUNE_TASK
