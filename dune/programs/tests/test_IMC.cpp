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
// Author: Ricardo Martins                                                  *
//***************************************************************************
// Automatically generated.                                                 *
//***************************************************************************
// IMC XML MD5: 3e9024be239f96addae90c415a6be345                            *
//***************************************************************************

// DUNE headers.
#include <DUNE/DUNE.hpp>

using DUNE_NAMESPACES;

#include "Test.hpp"

int
main(void)
{
  Test test("IMC Serialization/Deserialization");

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.680433163724);
    msg.setSource(2078U);
    msg.setSourceEntity(221U);
    msg.setDestination(41354U);
    msg.setDestinationEntity(205U);
    msg.state = 35U;
    msg.flags = 176U;
    msg.description.assign("LVWYENZQDFCMMCSEELDKMBTOJHXYFTMXGELLICAVQWUWKRSTDKNRKAZRLOIXDLVFSKCOPUUTEKDUHWWOWGDNACOHEFRPAVLGJIVOTVUYDREJBYEDLWHVMTIJMJSARYFXPBSOYSBUGZZXRJJBHATXGHBKCXTOFHNAVJEBFDAYIAZKBHQPHUYPPGXZTVTLZMQSRWCQIQGZIRCPALESMGUYUQVCKXNPNQIQMFUFJSPXONCPBSORJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.337968440221);
    msg.setSource(25396U);
    msg.setSourceEntity(178U);
    msg.setDestination(53313U);
    msg.setDestinationEntity(97U);
    msg.state = 206U;
    msg.flags = 251U;
    msg.description.assign("NLJLIRTYZVNMOORJFRBXNDSQKGVZLBUIAGUOIREMVUOPDPZY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityState msg;
    msg.setTimeStamp(0.165112214477);
    msg.setSource(4018U);
    msg.setSourceEntity(92U);
    msg.setDestination(42705U);
    msg.setDestinationEntity(187U);
    msg.state = 48U;
    msg.flags = 180U;
    msg.description.assign("TXJPVHSULSOUNSTCYNUZKKNYGXMUPVTGYSLHLOARXGNRHDGSDHBCUQFTHREDBMCDNJXJIAGHXRCZOVCBEFUQGDGDIPRFENXPLMPEOSQSWHPWNMD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.83467892905);
    msg.setSource(52125U);
    msg.setSourceEntity(136U);
    msg.setDestination(29262U);
    msg.setDestinationEntity(42U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.743819855571);
    msg.setSource(43919U);
    msg.setSourceEntity(117U);
    msg.setDestination(33550U);
    msg.setDestinationEntity(112U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityState msg;
    msg.setTimeStamp(0.82061107626);
    msg.setSource(19466U);
    msg.setSourceEntity(79U);
    msg.setDestination(64449U);
    msg.setDestinationEntity(100U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.524059354888);
    msg.setSource(22222U);
    msg.setSourceEntity(132U);
    msg.setDestination(19444U);
    msg.setDestinationEntity(140U);
    msg.id = 74U;
    msg.label.assign("OHUTDMPNZCOSVSVEWHQREVBGKMXXAYLWCYVMPDAJLWFZITXAFJRWZJKDTZTMRGPOXFNHRGAHSQJSADDQYTUHDHIOZVLBKCZRBRRRPTCXOZWEPLNDXVOESMGBYVMUURPYZPOYIAFXIPDBENSCBQSQLIQSXYWWJLNHAXAQAGFUZUCMFCPSBO");
    msg.component.assign("OVJVYCLHLXFRZMANZYSKIAOHUWPKPMNPKODPXTPKOBSXAHQKUNHZ");
    msg.act_time = 57599U;
    msg.deact_time = 364U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.440225972676);
    msg.setSource(25378U);
    msg.setSourceEntity(119U);
    msg.setDestination(43300U);
    msg.setDestinationEntity(3U);
    msg.id = 47U;
    msg.label.assign("XTFOCTQPIHTRKBNZCPPMSONMZAVZGBDKOZVHLQVAPOQPURBIDNEUBDYDDTFREEJS");
    msg.component.assign("XRGMRCOUSTNGCIMLLIUCPYCCZUDIDDIPEPZNMGFOUJBXUNMYYKZZYBSKERHNREWBSQJNQFBWEXMHPKZCJOIAGAWIXIGYTLOQZWRSQWVJOXTXVCXJVHVAOUXQWAESZXLUSPBNLVJEPYRJFMQHFFIADUEBTVAOYMSZUAWKLGGKEUBYLTKHFAYKKJN");
    msg.act_time = 34566U;
    msg.deact_time = 41559U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityInfo msg;
    msg.setTimeStamp(0.514025427361);
    msg.setSource(39631U);
    msg.setSourceEntity(134U);
    msg.setDestination(22089U);
    msg.setDestinationEntity(59U);
    msg.id = 36U;
    msg.label.assign("KDQVNHSQVBITPVEYSBDSGWNSMODOTKZDVPPTDRYURYGRILUFAQWALRGNNMMZHTWXIKOKGRMEUCDFBBNEZAZJRQVKVALMGJIXFUOPHCYYJSFHIYDXLMEWOGGCJQYMRIDPGPFHCXLXIPQPQVOLWANYVELMWCODQLNWUSDHZUHLRUHLXEKFEAIBPBQSBNOKVQBFBWAJNOTYKXCNXHCVRGYBPEJSXGITZACFUJUZAZKRZIFWKX");
    msg.component.assign("KWJFJOIYZVMITLTEJUQDRHPDRYGRWQQHQRKYRMGCZOTRAGSTCLRMBOZOMDTBECXQSXWDRXPTUKYFXJLVC");
    msg.act_time = 14225U;
    msg.deact_time = 60481U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.823650574599);
    msg.setSource(31573U);
    msg.setSourceEntity(107U);
    msg.setDestination(51160U);
    msg.setDestinationEntity(160U);
    msg.id = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.56741527294);
    msg.setSource(32990U);
    msg.setSourceEntity(22U);
    msg.setDestination(24278U);
    msg.setDestinationEntity(56U);
    msg.id = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityInfo msg;
    msg.setTimeStamp(0.277664741273);
    msg.setSource(11000U);
    msg.setSourceEntity(67U);
    msg.setDestination(10227U);
    msg.setDestinationEntity(152U);
    msg.id = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.122385496329);
    msg.setSource(34157U);
    msg.setSourceEntity(91U);
    msg.setDestination(55825U);
    msg.setDestinationEntity(107U);
    msg.op = 121U;
    msg.list.assign("GYZMCFGZNIQSJGFIQJHGQQQVHZVNULVEWPBRSFWSIXDEQAIWWGORDBHLADXRJUTYNZNSXNPNPSMKLDEDYYOSFYRTTVCLDKWPNBCGCUBZQKKPYZJCEXDQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.098676579902);
    msg.setSource(8817U);
    msg.setSourceEntity(57U);
    msg.setDestination(4592U);
    msg.setDestinationEntity(179U);
    msg.op = 64U;
    msg.list.assign("CJWAYXLRQKZMPDLOAFUEKGULZDXWIOAPXHULEUQBJIQALRNMVFQFUYJUBCOVVMUGJITJBEQRDKFKSISWOWGBEMECMPTTLKBGGXMEXIRHOTAYCLZGHHDZBWOCJPZDNHBICFETNDCOAJQZWAYMNNOVGIXCJIQIREACNESWNRRCROZMSZLRPNBSVWDQIXSZHKYMSMONAXLVQSTWGALKJPBDXHGPKRGUSTTDXFVJZEFPQYV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityList msg;
    msg.setTimeStamp(0.263103168753);
    msg.setSource(10322U);
    msg.setSourceEntity(218U);
    msg.setDestination(50192U);
    msg.setDestinationEntity(133U);
    msg.op = 151U;
    msg.list.assign("QFIZUHHVAVKOVGWSXTNBPBYPQUOYLRVFJBTWATVBRIAXAMIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.0588850120721);
    msg.setSource(22320U);
    msg.setSourceEntity(216U);
    msg.setDestination(47918U);
    msg.setDestinationEntity(65U);
    msg.value = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.474685222391);
    msg.setSource(11539U);
    msg.setSourceEntity(87U);
    msg.setDestination(65516U);
    msg.setDestinationEntity(103U);
    msg.value = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CpuUsage msg;
    msg.setTimeStamp(0.848417040576);
    msg.setSource(632U);
    msg.setSourceEntity(19U);
    msg.setDestination(24848U);
    msg.setDestinationEntity(181U);
    msg.value = 91U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CpuUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.08023607084);
    msg.setSource(19740U);
    msg.setSourceEntity(161U);
    msg.setDestination(56486U);
    msg.setDestinationEntity(95U);
    msg.consumer.assign("BJFIVUWBCSLKTPWWEEKUDXBMRJLCDBQSZSYILHISLAFYCEXGORUYETYJXBMIPAHFFZWPZNMRDNCJSGVAJ");
    msg.message_id = 23973U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.714151865421);
    msg.setSource(4254U);
    msg.setSourceEntity(21U);
    msg.setDestination(4309U);
    msg.setDestinationEntity(190U);
    msg.consumer.assign("CDAKIRNRFMIUKRI");
    msg.message_id = 64714U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransportBindings msg;
    msg.setTimeStamp(0.335895001048);
    msg.setSource(17103U);
    msg.setSourceEntity(121U);
    msg.setDestination(64175U);
    msg.setDestinationEntity(178U);
    msg.consumer.assign("WETNBANEZDZGQFCEXJRPBIQIK");
    msg.message_id = 44352U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransportBindings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0532145253838);
    msg.setSource(34520U);
    msg.setSourceEntity(230U);
    msg.setDestination(51865U);
    msg.setDestinationEntity(79U);
    msg.type = 84U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.0547443415014);
    msg.setSource(22124U);
    msg.setSourceEntity(69U);
    msg.setDestination(15947U);
    msg.setDestinationEntity(96U);
    msg.type = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RestartSystem msg;
    msg.setTimeStamp(0.363716736071);
    msg.setSource(60993U);
    msg.setSourceEntity(103U);
    msg.setDestination(56236U);
    msg.setDestinationEntity(51U);
    msg.type = 34U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RestartSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.552609819361);
    msg.setSource(57718U);
    msg.setSourceEntity(245U);
    msg.setDestination(436U);
    msg.setDestinationEntity(151U);
    msg.op = 210U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.804950702051);
    msg.setSource(50228U);
    msg.setSourceEntity(220U);
    msg.setDestination(57470U);
    msg.setDestinationEntity(199U);
    msg.op = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationControl msg;
    msg.setTimeStamp(0.454196133457);
    msg.setSource(25417U);
    msg.setSourceEntity(230U);
    msg.setDestination(64870U);
    msg.setDestinationEntity(48U);
    msg.op = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.395048361855);
    msg.setSource(51357U);
    msg.setSourceEntity(150U);
    msg.setDestination(2688U);
    msg.setDestinationEntity(165U);
    msg.total_steps = 47U;
    msg.step_number = 83U;
    msg.step.assign("SXOMAWWQOBWEIALHEKFHKYBCUVPGKNMBGJRTUEXGNXJTTEZSNDVNQHTFMFYCENOBSBWDZKJQXKHCKPQEJHLGRSRTKOUBXNEDQPNVICVUIRBCYZYCFAGSLAGMWUSSIWNVELAR");
    msg.flags = 57U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.238630186227);
    msg.setSource(21097U);
    msg.setSourceEntity(195U);
    msg.setDestination(50559U);
    msg.setDestinationEntity(1U);
    msg.total_steps = 232U;
    msg.step_number = 19U;
    msg.step.assign("WRGFCJSESNMCXLERBTGTFBDIDZNYOHNCCWHZZDHYTOALCQLAJFHEXWUABYB");
    msg.flags = 242U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevCalibrationState msg;
    msg.setTimeStamp(0.261236192879);
    msg.setSource(748U);
    msg.setSourceEntity(215U);
    msg.setDestination(14743U);
    msg.setDestinationEntity(35U);
    msg.total_steps = 113U;
    msg.step_number = 87U;
    msg.step.assign("HNFBNYXMBJCRBCPIZPEKPSZJYFDSBXOICAETBZTUHHETBWEDFCQVUXQVVLQKKETLJXRSAJPSXIUYEQNZGWABTIOOVLSLRMPFYOHAHKJURTDPXKKIRMXDTZFPCNXBHOTNNRCJGSQOMMGTDQSIC");
    msg.flags = 58U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevCalibrationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.872525373328);
    msg.setSource(1297U);
    msg.setSourceEntity(134U);
    msg.setDestination(3427U);
    msg.setDestinationEntity(226U);
    msg.state = 16U;
    msg.error.assign("IQCCMTBCRRQAZBGLVCSIDYQKXMPENFDVHGQLRVKQQEJEXTUFHVGCVYUMIPKEVINOIRLKCKWYBZWRUKDWOVQZJVTCDONIOKEMALPGEAZMBSYJGPJEPLTNMLFMZTABTWFXPNYQZKXZFGFMHSNLJQSOXOWBHSWFBNDDXGXXISBZYHJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.205848944534);
    msg.setSource(38692U);
    msg.setSourceEntity(139U);
    msg.setDestination(38654U);
    msg.setDestinationEntity(231U);
    msg.state = 98U;
    msg.error.assign("RQCJEWTNVVEOGNNVSOMPKSAUYKBBEQTDNTRPERDIMEPMVEHELKODZBXKIUCJLOFMZDTZINMZOBYKIWGZTABKBPIGKFXWFGXKZPVHYDMZUJOOXYMQUVLIUISWXVRUSTCBNFJHATMCBLRNYSLAQJAXACGLVOGHYQZWHZSUVFLXDONFEPHZKGYOJLHPXPCRYQDGUHUJKCMERSGRBYJPDTFWYCIF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityActivationState msg;
    msg.setTimeStamp(0.447320918378);
    msg.setSource(55313U);
    msg.setSourceEntity(70U);
    msg.setDestination(24057U);
    msg.setDestinationEntity(83U);
    msg.state = 52U;
    msg.error.assign("LOYRRRVAMKXQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.201385269116);
    msg.setSource(31577U);
    msg.setSourceEntity(157U);
    msg.setDestination(10837U);
    msg.setDestinationEntity(171U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.678669281451);
    msg.setSource(52779U);
    msg.setSourceEntity(119U);
    msg.setDestination(3029U);
    msg.setDestinationEntity(12U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityActivationState msg;
    msg.setTimeStamp(0.609080702871);
    msg.setSource(1226U);
    msg.setSourceEntity(241U);
    msg.setDestination(50442U);
    msg.setDestinationEntity(166U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityActivationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.353533449351);
    msg.setSource(57647U);
    msg.setSourceEntity(228U);
    msg.setDestination(61616U);
    msg.setDestinationEntity(188U);
    msg.op = 223U;
    msg.speed_min = 0.747642853233;
    msg.speed_max = 0.816110691562;
    msg.long_accel = 0.392267402352;
    msg.alt_max_msl = 0.303439171681;
    msg.dive_fraction_max = 0.784520693443;
    msg.climb_fraction_max = 0.360750743615;
    msg.bank_max = 0.0650676935663;
    msg.p_max = 0.280558143885;
    msg.pitch_min = 0.457664551469;
    msg.pitch_max = 0.494964618021;
    msg.q_max = 0.732800016564;
    msg.g_min = 0.03572802972;
    msg.g_max = 0.927919774764;
    msg.g_lat_max = 0.727579607035;
    msg.rpm_min = 0.376207733094;
    msg.rpm_max = 0.126265942364;
    msg.rpm_rate_max = 0.0293645278218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.120574343476);
    msg.setSource(40233U);
    msg.setSourceEntity(97U);
    msg.setDestination(23076U);
    msg.setDestinationEntity(203U);
    msg.op = 172U;
    msg.speed_min = 0.879781334801;
    msg.speed_max = 0.779479693966;
    msg.long_accel = 0.764741611855;
    msg.alt_max_msl = 0.0867851501892;
    msg.dive_fraction_max = 0.642112679911;
    msg.climb_fraction_max = 0.992657642691;
    msg.bank_max = 0.467174746192;
    msg.p_max = 0.781993388656;
    msg.pitch_min = 0.91729989726;
    msg.pitch_max = 0.87659113702;
    msg.q_max = 0.414425512784;
    msg.g_min = 0.855042773582;
    msg.g_max = 0.32686349642;
    msg.g_lat_max = 0.606241079432;
    msg.rpm_min = 0.675666695919;
    msg.rpm_max = 0.820060076411;
    msg.rpm_rate_max = 0.939245666435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleOperationalLimits msg;
    msg.setTimeStamp(0.740605440925);
    msg.setSource(4707U);
    msg.setSourceEntity(223U);
    msg.setDestination(56370U);
    msg.setDestinationEntity(80U);
    msg.op = 29U;
    msg.speed_min = 0.403522567209;
    msg.speed_max = 0.238952750058;
    msg.long_accel = 0.253540466385;
    msg.alt_max_msl = 0.0355658724895;
    msg.dive_fraction_max = 0.909597319006;
    msg.climb_fraction_max = 0.777090244503;
    msg.bank_max = 0.780910108845;
    msg.p_max = 0.600044254796;
    msg.pitch_min = 0.617248262373;
    msg.pitch_max = 0.657258949666;
    msg.q_max = 0.826503401664;
    msg.g_min = 0.871755413439;
    msg.g_max = 0.484372406951;
    msg.g_lat_max = 0.784616113846;
    msg.rpm_min = 0.137345923538;
    msg.rpm_max = 0.466507982971;
    msg.rpm_rate_max = 0.726554179695;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.16842402926);
    msg.setSource(43109U);
    msg.setSourceEntity(203U);
    msg.setDestination(40041U);
    msg.setDestinationEntity(177U);
    IMC::GroupStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.442999099535;
    tmp_msg_0.y = 0.0313439718075;
    tmp_msg_0.z = 0.52545158039;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.930966630577);
    msg.setSource(54340U);
    msg.setSourceEntity(101U);
    msg.setDestination(53257U);
    msg.setDestinationEntity(222U);
    IMC::UamRxRange tmp_msg_0;
    tmp_msg_0.seq = 48239U;
    tmp_msg_0.sys.assign("TRPWXXPYHADNRXTOPCDSALAO");
    tmp_msg_0.value = 0.242215282039;
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MsgList msg;
    msg.setTimeStamp(0.429153900637);
    msg.setSource(34512U);
    msg.setSourceEntity(80U);
    msg.setDestination(1597U);
    msg.setDestinationEntity(39U);
    IMC::Drop tmp_msg_0;
    tmp_msg_0.timeout = 65058U;
    tmp_msg_0.lat = 0.272898666145;
    tmp_msg_0.lon = 0.956174140528;
    tmp_msg_0.z = 0.497849263401;
    tmp_msg_0.z_units = 185U;
    tmp_msg_0.speed = 0.965013660064;
    tmp_msg_0.speed_units = 102U;
    tmp_msg_0.custom.assign("OFBWTWJQFAUMWJQNGAIPDHDXFEYVLYQPXCLGPOMDWAUAGEOKSWRBNYXSBRULUCNEQCWDBXHIXHFZRIMHIPCGPIMTNTJUYQZAELKUJXJEMOUOVIJLDPOFASMLGWFQNWYVXYKAMINJEFAPTRIYROQZBRGHZKVJSCEBKQCPINESKOFNKYCRRVCZIVUSRLKANHUZQOTYVXNKEUSBMHFHKGTBXEDZSBAWDVBGLGMSDLXTDPOJVZRTCFSW");
    msg.msgs.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MsgList #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.61282835464);
    msg.setSource(38424U);
    msg.setSourceEntity(189U);
    msg.setDestination(5484U);
    msg.setDestinationEntity(218U);
    msg.lat = 0.54134768375;
    msg.lon = 0.88548102246;
    msg.height = 0.0346764889015;
    msg.x = 0.348212068849;
    msg.y = 0.363327461528;
    msg.z = 0.155121200644;
    msg.phi = 0.474164117544;
    msg.theta = 0.580310102173;
    msg.psi = 0.734691434515;
    msg.u = 0.0511657784651;
    msg.v = 0.353566576311;
    msg.w = 0.749836812886;
    msg.p = 0.312747919689;
    msg.q = 0.520192184512;
    msg.r = 0.397138504674;
    msg.svx = 0.11224930137;
    msg.svy = 0.653245740127;
    msg.svz = 0.709373986431;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.154355517475);
    msg.setSource(11246U);
    msg.setSourceEntity(77U);
    msg.setDestination(60649U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.967060434203;
    msg.lon = 0.162921710648;
    msg.height = 0.696279542536;
    msg.x = 0.00586967000611;
    msg.y = 0.501945449306;
    msg.z = 0.874185344227;
    msg.phi = 0.983662338882;
    msg.theta = 0.145743733888;
    msg.psi = 0.61000233942;
    msg.u = 0.387238116816;
    msg.v = 0.546106846763;
    msg.w = 0.592738843341;
    msg.p = 0.267624704612;
    msg.q = 0.838624311124;
    msg.r = 0.367245198983;
    msg.svx = 0.330736337752;
    msg.svy = 0.262907063254;
    msg.svz = 0.0377973898435;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SimulatedState msg;
    msg.setTimeStamp(0.420286971769);
    msg.setSource(58777U);
    msg.setSourceEntity(84U);
    msg.setDestination(39710U);
    msg.setDestinationEntity(252U);
    msg.lat = 0.916397976958;
    msg.lon = 0.576167438299;
    msg.height = 0.354344052765;
    msg.x = 0.558491426893;
    msg.y = 0.32669733001;
    msg.z = 0.256225218437;
    msg.phi = 0.350806917738;
    msg.theta = 0.376110448512;
    msg.psi = 0.126923257041;
    msg.u = 0.325198614265;
    msg.v = 0.876693832586;
    msg.w = 0.53546315891;
    msg.p = 0.600997904199;
    msg.q = 0.719458689713;
    msg.r = 0.234428580346;
    msg.svx = 0.569514228881;
    msg.svy = 0.345802513701;
    msg.svz = 0.0268947203545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SimulatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.253580137255);
    msg.setSource(46543U);
    msg.setSourceEntity(10U);
    msg.setDestination(21878U);
    msg.setDestinationEntity(234U);
    msg.op = 79U;
    msg.entities.assign("RPLBYPNXVCMOGRDAPWUEVQJHGAARTYFGHKYIXGSWZPRUGMUWJNKFLDMXLAWSBBKPXSXUBCEOBHQVCFEHOCAOHRYSMZLAITFLRATHZFWUNQZMZKSEDDJHNUEEIDMHFYYJXBCZKTPJLXENOTFSPDIUXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.845829659388);
    msg.setSource(63871U);
    msg.setSourceEntity(125U);
    msg.setDestination(47627U);
    msg.setDestinationEntity(150U);
    msg.op = 158U;
    msg.entities.assign("NZPEIEXSHYIKVYGNFAJZCNFTPHMLLHHARUQLRVZETSZAZVNNPZWBLYNBUUMUHIXZKQDWQURMQQLTKMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeakSimulation msg;
    msg.setTimeStamp(0.527326111323);
    msg.setSource(21108U);
    msg.setSourceEntity(117U);
    msg.setDestination(8304U);
    msg.setDestinationEntity(114U);
    msg.op = 237U;
    msg.entities.assign("RKHLACKPSASTCDEYWICHXFTCNTSTFMXQQOHRGQDLMGSEBXJIFYESECVXBMZN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeakSimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.809205985954);
    msg.setSource(64124U);
    msg.setSourceEntity(99U);
    msg.setDestination(36640U);
    msg.setDestinationEntity(212U);
    msg.type = 10U;
    msg.speed = 6867U;
    const char tmp_msg_0[] = {-34, -40, -21, -41, 88, 82, 79, -28, -110, 117, -113, 34, -53, 15, 30, -60, 24, -118, 88, 0, 61, -115, 23, -20, 87, -24, 58, 48, -110, -104, 49, -121, -84, 121, -58, -101, -63, 120, -17, -19, 106, -23, -115, -110, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.145997132797);
    msg.setSource(49865U);
    msg.setSourceEntity(219U);
    msg.setDestination(11178U);
    msg.setDestinationEntity(82U);
    msg.type = 74U;
    msg.speed = 27973U;
    const char tmp_msg_0[] = {108, 107, -56, -80, 107, -124, 6, 82, -101, 2, -96, -101, -31, 31, -80, -102, 1, 28, 118, 57, -46, -119, 102, 47, 32, 124, -49, 81, 98, 104, -69, 28, -92, 94, 61, 16, -44, -27, -61, 64, 26, 86, 106, 33, 21, -7, 84, -115, 23, 78, 100, -118, -48, -115, 75, 10, 100, 10, 47, -36, 97, -85, 13, 90, 35, 111, -80, 105, -77, -44, 45, 103, -127, 38, -43, -8, -44, 94, -85, 116, 62, -112, 36};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UASimulation msg;
    msg.setTimeStamp(0.858628682236);
    msg.setSource(30449U);
    msg.setSourceEntity(71U);
    msg.setDestination(44522U);
    msg.setDestinationEntity(108U);
    msg.type = 6U;
    msg.speed = 2286U;
    const char tmp_msg_0[] = {85, -70, 70, 92, 2, 76, 61, -10, -57, 115, -109, -97, -42, 10, -89, 19, 0, -28, 70, -91, 64, 48, 19, 112, -92, 32, -111, 117, 117, 32, -114};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UASimulation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.755970551288);
    msg.setSource(63188U);
    msg.setSourceEntity(234U);
    msg.setDestination(49590U);
    msg.setDestinationEntity(110U);
    msg.op = 98U;
    msg.tas2acc_pgain = 0.348942054655;
    msg.bank2p_pgain = 0.47526531483;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0453337999464);
    msg.setSource(65144U);
    msg.setSourceEntity(245U);
    msg.setDestination(62780U);
    msg.setDestinationEntity(253U);
    msg.op = 132U;
    msg.tas2acc_pgain = 0.0594187444716;
    msg.bank2p_pgain = 0.0225389095441;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DynamicsSimParam msg;
    msg.setTimeStamp(0.0255484518767);
    msg.setSource(40019U);
    msg.setSourceEntity(110U);
    msg.setDestination(35384U);
    msg.setDestinationEntity(154U);
    msg.op = 225U;
    msg.tas2acc_pgain = 0.694786727985;
    msg.bank2p_pgain = 0.322232131323;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DynamicsSimParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.516220521639);
    msg.setSource(52123U);
    msg.setSourceEntity(205U);
    msg.setDestination(22075U);
    msg.setDestinationEntity(131U);
    msg.available = 2515441951U;
    msg.value = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.763869590736);
    msg.setSource(54469U);
    msg.setSourceEntity(0U);
    msg.setDestination(31284U);
    msg.setDestinationEntity(120U);
    msg.available = 707815244U;
    msg.value = 198U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StorageUsage msg;
    msg.setTimeStamp(0.00794321981094);
    msg.setSource(25780U);
    msg.setSourceEntity(123U);
    msg.setDestination(45536U);
    msg.setDestinationEntity(135U);
    msg.available = 106817476U;
    msg.value = 53U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StorageUsage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.926280584381);
    msg.setSource(51161U);
    msg.setSourceEntity(164U);
    msg.setDestination(21588U);
    msg.setDestinationEntity(51U);
    msg.op = 44U;
    msg.snapshot.assign("YAWYQFPTHKXNETBGIRHSDWIRJVQOIWHJDHHGUOWZRGQGZZRWVTCQOGNIIXLOQBLICMVDMAKOYYCEPLVMBNGIYDKBWRJFANCCRXCFFWINQATCLWZAPPSKDLGAHUAZFKJZHQJEYAOPSJMXSARCHTPYEON");
    IMC::VehicleOperationalLimits tmp_msg_0;
    tmp_msg_0.op = 89U;
    tmp_msg_0.speed_min = 0.55959595962;
    tmp_msg_0.speed_max = 0.973324425182;
    tmp_msg_0.long_accel = 0.0203537012256;
    tmp_msg_0.alt_max_msl = 0.062114597986;
    tmp_msg_0.dive_fraction_max = 0.0747598022344;
    tmp_msg_0.climb_fraction_max = 0.313386839294;
    tmp_msg_0.bank_max = 0.563830268862;
    tmp_msg_0.p_max = 0.418963005536;
    tmp_msg_0.pitch_min = 0.0335579565623;
    tmp_msg_0.pitch_max = 0.183310993432;
    tmp_msg_0.q_max = 0.190971775659;
    tmp_msg_0.g_min = 0.261209413139;
    tmp_msg_0.g_max = 0.346612593908;
    tmp_msg_0.g_lat_max = 0.2885591149;
    tmp_msg_0.rpm_min = 0.289493662861;
    tmp_msg_0.rpm_max = 0.938280841576;
    tmp_msg_0.rpm_rate_max = 0.475236121905;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.138296150463);
    msg.setSource(10509U);
    msg.setSourceEntity(57U);
    msg.setDestination(63558U);
    msg.setDestinationEntity(179U);
    msg.op = 175U;
    msg.snapshot.assign("MMFHJPVJNBPDOUCUBDXLAIJUPTXHEEFNTTZYARUEFLXBSKXCIOBNSAORXQPKOMDCIABZTTKZECYEDBZNBWBQALYRKFRYHJVGKLOFVUQRGMAQTZYQXGHTNHFREVVLWBMHQHPOYJYRJSQVXSMEGIYWEXIFHFASCJWWNIXLSFOIUZUUDANOPGGLKBWVLFGDJPCDXKZVHRTDSKW");
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 202U;
    tmp_msg_0.error_count = 112U;
    tmp_msg_0.error_ents.assign("UMIRVTDWNFCHMBJATFYXIQARNRSSDLMVXFQZTCULROWFPESACOELSPPZMVEBPTOZXBQMMLUXNXZOMBDCELPJAEBJAXXTYPWYVSUGLYQJOTWBCQGDZHPDGUWENFJHSJXRIPJZHUCYDQLBA");
    tmp_msg_0.maneuver_type = 5543U;
    tmp_msg_0.maneuver_stime = 0.0258125157147;
    tmp_msg_0.maneuver_eta = 56786U;
    tmp_msg_0.control_loops = 3131266028U;
    tmp_msg_0.flags = 39U;
    tmp_msg_0.last_error.assign("ITPIVBPVPWJRGSBVSBTKCUQUKNSNCHWUWAQVFEVEODOQHAXTLVYLLBCJMJOUXBPQFXBHTEXSWROWHDYBCZCVCSZVNXIMKYEGUXIOXEJWITMNFOEMOLRJYRHAFDISWRKYMYMKZLSPXSZNDLMDGHGFYPDBIFXQJENPMYZJHKEAUZQZYNVNLKWQDOGAIMPSAJZKMPFQGUKCGIZRTUCCAXTAQBSRAZKENHVLYIFAHOUEDCTRTOFJLGGJDNRQUWPGLB");
    tmp_msg_0.last_error_time = 0.809665776977;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CacheControl msg;
    msg.setTimeStamp(0.208361849053);
    msg.setSource(52421U);
    msg.setSourceEntity(31U);
    msg.setDestination(12930U);
    msg.setDestinationEntity(218U);
    msg.op = 209U;
    msg.snapshot.assign("TRXEIQSCHOGCKXMGXKKYWAZLAOWEAORSZUDJLXAWFUXBFDCRMGABYYMNPUCCBQGDFDFMBYRZTLCRYVHNOVHE");
    IMC::VerticalProfile tmp_msg_0;
    tmp_msg_0.parameter = 128U;
    tmp_msg_0.numsamples = 34U;
    IMC::ProfileSample tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.depth = 18355U;
    tmp_tmp_msg_0_0.avg = 0.621253425893;
    tmp_msg_0.samples.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.lat = 0.721061338109;
    tmp_msg_0.lon = 0.410609199532;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CacheControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.647099025012);
    msg.setSource(36033U);
    msg.setSourceEntity(59U);
    msg.setDestination(57509U);
    msg.setDestinationEntity(102U);
    msg.op = 129U;
    msg.name.assign("QADTYQHIPYNJCHCQLAZBJLPWYHKWOMLMVKBVRVZUAXQLPJWTSPPXINHHZWEIPOPHAXEEKZDKEDCSVMJTURJRJUZVELBGOGENSNCDYHFNVZJNUUGYNMOOBLGLAICXFGPXBZPQWRVGYJNUSXCXRUXKAQWDCVXFYSRPUMORBDSFMGZQTQU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.855374472704);
    msg.setSource(61033U);
    msg.setSourceEntity(32U);
    msg.setDestination(8703U);
    msg.setDestinationEntity(251U);
    msg.op = 157U;
    msg.name.assign("IDUQLQDQJBMNCFEWGNWHQZZMXFPGZRAISPXYJRCTMLCUUNROIGKNNJXDCWMPSIMXUGQORJEDJWSXHVBTBDOIRYGQLFKOUNPPVSCSVGTEXKXBEAAWYDUILYEEISZZCZTKBKBTAABJXKOTNVFQPVKCMLTHHZOSVMDERRINVLFVKEJQBOHXEPDZDTIYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LoggingControl msg;
    msg.setTimeStamp(0.799652213467);
    msg.setSource(30939U);
    msg.setSourceEntity(93U);
    msg.setDestination(24959U);
    msg.setDestinationEntity(159U);
    msg.op = 38U;
    msg.name.assign("QBTZSGOILLJEPTUFOQQQGMBEXIDFEVGQSUPSSCDJXMFXZNKNNZTYYZKBWAXJXVMUZBGDIAVKBSHWFXALSMTXLCOKOPYDAJLMNVLHTDWKVWIARPVCEHPSEHN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LoggingControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.497491002335);
    msg.setSource(11111U);
    msg.setSourceEntity(86U);
    msg.setDestination(36074U);
    msg.setDestinationEntity(40U);
    msg.type = 16U;
    msg.htime = 0.349535692533;
    msg.context.assign("ZZHXBAYFIRZPSVEUCAQSSFXNSNJPLTYOQEZRIKNQBMJCBHFTKZUUACDOGPAPEYFDZAAUIJRYAHIMXKLJQTRVS");
    msg.text.assign("ISUIGLSKOACUHQKGMATOMOECSNTYAIIRJFCS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.920376052254);
    msg.setSource(40766U);
    msg.setSourceEntity(252U);
    msg.setDestination(29100U);
    msg.setDestinationEntity(159U);
    msg.type = 63U;
    msg.htime = 0.99339342106;
    msg.context.assign("XGLIKSJYKVYYJFZDAQLXBCHGGBCMIBMDNWLCSNUWEQJVQIHXRYTUOLELYGMFSWFIWPZCJDRSTMBHDUWQUXVITJLYKROWTUNTZAVAHPWV");
    msg.text.assign("VLFDUVRFUXNAHESGOOYCAITZVGZWGEVJVIPM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookEntry msg;
    msg.setTimeStamp(0.201297809472);
    msg.setSource(50550U);
    msg.setSourceEntity(148U);
    msg.setDestination(30128U);
    msg.setDestinationEntity(103U);
    msg.type = 194U;
    msg.htime = 0.154061238614;
    msg.context.assign("UMYFHLZIPJQEMZLBZYKMRCIKZPWINOKSYRXGNQDEYVGYVJKEBUYOSVSJTBSRUQGCBSDCHTPKTTMGTLDRGLBPWQJNACKPBJEXUSMDWJXFXQIJUUDMLDVXFNQWRWERTQJGBDNGWXHSAXQWRNAVORZIXICFCMLENKHOOFBSQKGPDNIQAHZUGAHLRLCNPPAHAIKJCOXFEUCUYEZFXZHNWVFIVOVATAEYDSARTMODUBLO");
    msg.text.assign("HUQMPYKGVPDRMYISXTZJWNSSXLFMWNQEBQTMSIORGCDWBHNISUQNGFEAGAPLEEPULWHXANBXOCCACULDPJLLQGISHZIOESECUFCXNBKPUCFDXPGMKZIPYVRBEFJZBDNOLHRKXHJAYQNDAKWTIQYASFELZDAVGXFEXTJQRLRTFYWKXISDLOPZRCBJOKTODYTWMYJWQIVSHQUM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookEntry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.0408828129922);
    msg.setSource(25927U);
    msg.setSourceEntity(89U);
    msg.setDestination(462U);
    msg.setDestinationEntity(69U);
    msg.command = 180U;
    msg.htime = 0.305038583631;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.458068207502);
    msg.setSource(46656U);
    msg.setSourceEntity(82U);
    msg.setDestination(59322U);
    msg.setDestinationEntity(190U);
    msg.command = 44U;
    msg.htime = 0.690060699056;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 161U;
    tmp_msg_0.htime = 0.486806938207;
    tmp_msg_0.context.assign("VVAAWQVFCSGYRGOLGPCHACNXJRWTBRBKRDPXACJBBXDIAABSYFLYTOQUBCQXXCSXPUCHABAVMGQJEPJIKKYFMHMLDXBGQNWNMTZLTPODHOLLGBBNGUPFHIZUPUEYMYJVHPNZDUSAIYKEFOZKSRECLEIWHEXFWQNWRIEYOXSSFPVVDJ");
    tmp_msg_0.text.assign("CHFYLDWSLJJZGVTJUMSPNDSNFVIHDHYERARAAXAEYIEPWRQOHFCETDUBCUORCUBOGDXCBSSVYSXKZLJCXEISSOMWJXKBTSZDQAZFVHKQQQMQOPAGGOXBVLLKPUYIPQNJLMPYZPVOYBUWLZCNTDVSZNVFTUHGYKZNKPNMRICXHWVTMYBLGJPAUHWIUEQREKWRMYAAWDNHDMXBMHGCKRFCTWQADKFIBEKURXZFVGTMFNTIJQNEOFLIPBWTOOGEJI");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LogBookControl msg;
    msg.setTimeStamp(0.922880804557);
    msg.setSource(5258U);
    msg.setSourceEntity(212U);
    msg.setDestination(43881U);
    msg.setDestinationEntity(214U);
    msg.command = 44U;
    msg.htime = 0.865638063775;
    IMC::LogBookEntry tmp_msg_0;
    tmp_msg_0.type = 51U;
    tmp_msg_0.htime = 0.86422835457;
    tmp_msg_0.context.assign("KSYNCXHHIWLSOEIMLDKKTADXDFSKRQPZYNHAURQREYOOFQCHWUQNNFADRAQJMZPFBBNGGBMZHGEOFMPZQKTUNSBZHLGUSUUKCTNQJASAOMDELWENIJSKVZSZLRRTVWOOEBJRAGOOBTDWMAECILMWYCUEYLVJXPUCMNFPDLQFQAWLPISVEPTVGDXPWBLYVQGTGYRCFVDUFJIKBVYEIZVIYSMZXCMNJHVGTHCJHIXCPKXWBTOAJUXRB");
    tmp_msg_0.text.assign("IVFSHFDCPNVSBWOCGEIJLSPWZXZANJVGBKNLDZPAFDAGRVULICHUIBTHKANBUPZHDWFJPYDRFVRWBIXQPCJPPTX");
    msg.msg.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LogBookControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.711372695558);
    msg.setSource(27691U);
    msg.setSourceEntity(6U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(236U);
    msg.op = 234U;
    msg.file.assign("WKNCZNJMYSJKMGSQRVQMGYTCGAZFEJDUPRPOPS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.660104835295);
    msg.setSource(49454U);
    msg.setSourceEntity(207U);
    msg.setDestination(62665U);
    msg.setDestinationEntity(212U);
    msg.op = 198U;
    msg.file.assign("DEJMBUJILWSFGXSAJKHGTCKLGDDUCVOSBIEYGUAKISDSFOYECSACEQERKOSJFMCHGKYVZRMBJVEZRBSVYUOANQWEUXGKEUYXBTRQZAXMUVSQWYEHKMPTWKPCIXHTPFRJXJCFOHXLSMQPGFFGECIWKQWNAWOBPDQPRITOIVXWDNRIVLVUANBTYHOZGJPVZH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReplayControl msg;
    msg.setTimeStamp(0.28536301743);
    msg.setSource(31207U);
    msg.setSourceEntity(147U);
    msg.setDestination(32473U);
    msg.setDestinationEntity(27U);
    msg.op = 90U;
    msg.file.assign("QYSELKDAWATMVEHBZOYSDPOZGCJDYOFYZSFMWOMJKMIZXWJIRNINBVEVXZRGRWNXJXWPSEMDXYHHLRUBYTPEBLBAHGDOGCNPSOBIQPHNVIEFQKGZBJTTOCRTYUAYQXUCUHFIZUWKMYXIVFZCTORTCGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReplayControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.288576428498);
    msg.setSource(60895U);
    msg.setSourceEntity(195U);
    msg.setDestination(6167U);
    msg.setDestinationEntity(216U);
    msg.op = 247U;
    msg.clock = 0.516084985758;
    msg.tz = 58;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.47794867933);
    msg.setSource(21194U);
    msg.setSourceEntity(226U);
    msg.setDestination(53513U);
    msg.setDestinationEntity(2U);
    msg.op = 100U;
    msg.clock = 0.292998474935;
    msg.tz = -72;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ClockControl msg;
    msg.setTimeStamp(0.101131428424);
    msg.setSource(46342U);
    msg.setSourceEntity(95U);
    msg.setDestination(5455U);
    msg.setDestinationEntity(52U);
    msg.op = 211U;
    msg.clock = 0.750782396072;
    msg.tz = -119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ClockControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.400420373923);
    msg.setSource(38154U);
    msg.setSourceEntity(88U);
    msg.setDestination(10044U);
    msg.setDestinationEntity(134U);
    msg.conductivity = 0.0286233491805;
    msg.temperature = 0.487127590361;
    msg.depth = 0.382236254365;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.17955595101);
    msg.setSource(14646U);
    msg.setSourceEntity(39U);
    msg.setDestination(28939U);
    msg.setDestinationEntity(123U);
    msg.conductivity = 0.568236574175;
    msg.temperature = 0.339822424479;
    msg.depth = 0.857188839862;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricCTD msg;
    msg.setTimeStamp(0.075884679589);
    msg.setSource(26827U);
    msg.setSourceEntity(152U);
    msg.setDestination(15935U);
    msg.setDestinationEntity(246U);
    msg.conductivity = 0.530877242803;
    msg.temperature = 0.37415242626;
    msg.depth = 0.961723717328;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricCTD #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.330734552977);
    msg.setSource(18918U);
    msg.setSourceEntity(108U);
    msg.setDestination(39031U);
    msg.setDestinationEntity(48U);
    msg.altitude = 0.344937919817;
    msg.roll = 29160U;
    msg.pitch = 9111U;
    msg.yaw = 41489U;
    msg.speed = -241;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.538818351633);
    msg.setSource(48943U);
    msg.setSourceEntity(198U);
    msg.setDestination(21524U);
    msg.setDestinationEntity(82U);
    msg.altitude = 0.402090092765;
    msg.roll = 8151U;
    msg.pitch = 18952U;
    msg.yaw = 62808U;
    msg.speed = -13612;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricTelemetry msg;
    msg.setTimeStamp(0.751911062466);
    msg.setSource(18347U);
    msg.setSourceEntity(205U);
    msg.setDestination(31161U);
    msg.setDestinationEntity(58U);
    msg.altitude = 0.929791383416;
    msg.roll = 40515U;
    msg.pitch = 53894U;
    msg.yaw = 37478U;
    msg.speed = 19882;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricTelemetry #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.746439027624);
    msg.setSource(38294U);
    msg.setSourceEntity(225U);
    msg.setDestination(19327U);
    msg.setDestinationEntity(62U);
    msg.altitude = 0.331154978518;
    msg.width = 0.124806955258;
    msg.length = 0.190112668482;
    msg.bearing = 0.395979876514;
    msg.pxl = 5757;
    msg.encoding = 60U;
    const char tmp_msg_0[] = {-103, 120, -5, 119, 37, -12, 29, 23, -90, 99, -50, -113, -40, 31, -94, 20, 65, 69, 96, 45, 25, 97, -4, 38, -10, -96, -103, 123, 5, -12, -81, 34, -101, -67, 15, -78, 84, 81, 39, -76, -9, 93, -79, 68, 47, -50, -56, -102, 118, -55, -52, -120, 42, 63, -11, 60, -64, -45, -48, 44, -43, -117, -64, -84, 98, -37, 6, -44, -122, 18, -73, 44, 91, -46, -2, 4, 119, 84, -94, -63, -24, -70, 12, -7, 37, -109, -6, -18, 42, -60, 111, -36, -14, -77, 40, 101, -110, 3, 48, 70, 18};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.0397773174077);
    msg.setSource(65075U);
    msg.setSourceEntity(58U);
    msg.setDestination(56357U);
    msg.setDestinationEntity(24U);
    msg.altitude = 0.0356234886892;
    msg.width = 0.896254259113;
    msg.length = 0.844917378713;
    msg.bearing = 0.823000196558;
    msg.pxl = 16729;
    msg.encoding = 200U;
    const char tmp_msg_0[] = {-53, 93, -5, 70, -97, -115, -112, 114, 115, 89, -119, 39, -3, -113, 8, 106, -13, -61, -14, 115, -114, -82, -42, -99, -127, -85, 58, 32, 2, -44, -90, 43, 22, -115, 34, 34, 80, 49, -63, -39, 34, 25, 40, 57, 120, 48, -44, -53, -30, -62, 65, 61, -109, -80, 91, -19, 3, 109, -59, -79, -109, 76, -9, 7, -18, 92, 39, 3, -115, -83, 126, -74, 71, -12, 85};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSonarData msg;
    msg.setTimeStamp(0.199781412108);
    msg.setSource(49638U);
    msg.setSourceEntity(54U);
    msg.setDestination(24859U);
    msg.setDestinationEntity(13U);
    msg.altitude = 0.401355403679;
    msg.width = 0.9412177808;
    msg.length = 0.265266777244;
    msg.bearing = 0.805987117128;
    msg.pxl = -32513;
    msg.encoding = 10U;
    const char tmp_msg_0[] = {12, -107, -111, -122, 18, -52, 83, -29, 16, -64, -70, 64, -6, -59, 119, 74, -51, -100, 103, -69, 62, 111, -4, -4, 103, 78, 27, 88, -2, -72, -99, 124, 29, -125, 88, 119, -105, -31, -94, 40, -57, -14, -119, 76, -98, -81, 20, 99, -117, 86, -69, -68, -41, 42, 108, -53, -63, 87, 67, -125, 65, -65, 98, -108, 93, 21, 103, 10, -23, -11, 0, 117, -26, -94, -50, -23, 1, 19, 89, 66, 15, 54, 43, -63, 26, 122, 83, -57, -14, 96, -103, 15, -13, -46, -92, 5, 20, 61, -42, -42, -46, -35, 57, -21, 115, -24, 88, 77, 63, 18, 20, -45, -112, -88, 102, 113, -83, -14, 109, 5, 108, -2, -63, -52, 66, -99, -6, 44, -2, -119, -110, 6, 10, -115, -90, 73, 19, 118, -70, 24, 91, 57, 20, 46, -109, -118, -7, 49, -79, -94, -68, 72, -73, 30, -102, 83, -30, -50, -44, 115, 109, -64, -71, 75, -95, 13, -57, -94, 1, 1};
    msg.sonar_data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.454757641715);
    msg.setSource(29237U);
    msg.setSourceEntity(213U);
    msg.setDestination(26211U);
    msg.setDestinationEntity(141U);
    msg.text.assign("YYUOYRSOGLKVZJWATRFCHRHTHRIGVSQTABGQXOPHALQBXWBJMYXXBPUWXUHVHQFYDJYKDTOBDTIYCLFEGKSDXANALPOGQMKKPAVTBLGAJGIQGKFONJQGFQY");
    msg.type = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.641019126557);
    msg.setSource(4443U);
    msg.setSourceEntity(101U);
    msg.setDestination(62130U);
    msg.setDestinationEntity(209U);
    msg.text.assign("PVFAKDYXNVAJOUMENGPQCFYSYMUUBUILPXCFTDOVHDQPRKWSNTWDWHSEMCIRZYHXTQOMEJUOKYSQNGQZRJVDNMWBOMJLCZCIOWGNHBLMCLEKZJOMEMAXPKEYUGNHZNEFXKBPCGAIPDNKZPUVHKBZVURROBGWWRHPGQFVALNSJAKEBC");
    msg.type = 27U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricEvent msg;
    msg.setTimeStamp(0.171061887423);
    msg.setSource(32074U);
    msg.setSourceEntity(14U);
    msg.setDestination(22389U);
    msg.setDestinationEntity(82U);
    msg.text.assign("IWVRTNVXPUOUKRLTEMMDNZSPKO");
    msg.type = 69U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.857231723359);
    msg.setSource(36450U);
    msg.setSourceEntity(46U);
    msg.setDestination(7782U);
    msg.setDestinationEntity(93U);
    msg.parameter = 135U;
    msg.numsamples = 159U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 29847U;
    tmp_msg_0.avg = 0.959424102486;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.697813244946;
    msg.lon = 0.997435141756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.447581881737);
    msg.setSource(7587U);
    msg.setSourceEntity(116U);
    msg.setDestination(47453U);
    msg.setDestinationEntity(222U);
    msg.parameter = 22U;
    msg.numsamples = 164U;
    msg.lat = 0.341557448634;
    msg.lon = 0.900999490634;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VerticalProfile msg;
    msg.setTimeStamp(0.510853046752);
    msg.setSource(50331U);
    msg.setSourceEntity(93U);
    msg.setDestination(60873U);
    msg.setDestinationEntity(149U);
    msg.parameter = 205U;
    msg.numsamples = 203U;
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 3676U;
    tmp_msg_0.avg = 0.736532568507;
    msg.samples.push_back(tmp_msg_0);
    msg.lat = 0.390424920642;
    msg.lon = 0.225624211316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VerticalProfile #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.370289666368);
    msg.setSource(1172U);
    msg.setSourceEntity(39U);
    msg.setDestination(33478U);
    msg.setDestinationEntity(86U);
    msg.depth = 37173U;
    msg.avg = 0.0489808763708;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.414870363283);
    msg.setSource(29593U);
    msg.setSourceEntity(38U);
    msg.setDestination(48685U);
    msg.setDestinationEntity(42U);
    msg.depth = 12034U;
    msg.avg = 0.0254238117297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ProfileSample msg;
    msg.setTimeStamp(0.905481069092);
    msg.setSource(39325U);
    msg.setSourceEntity(142U);
    msg.setDestination(6817U);
    msg.setDestinationEntity(26U);
    msg.depth = 48990U;
    msg.avg = 0.368610525874;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ProfileSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.864524333703);
    msg.setSource(36996U);
    msg.setSourceEntity(34U);
    msg.setDestination(50700U);
    msg.setDestinationEntity(157U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.403584923951);
    msg.setSource(36450U);
    msg.setSourceEntity(233U);
    msg.setDestination(51137U);
    msg.setDestinationEntity(112U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Heartbeat msg;
    msg.setTimeStamp(0.770902572064);
    msg.setSource(65032U);
    msg.setSourceEntity(242U);
    msg.setDestination(50811U);
    msg.setDestinationEntity(199U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Heartbeat #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.276417155585);
    msg.setSource(13594U);
    msg.setSourceEntity(194U);
    msg.setDestination(15766U);
    msg.setDestinationEntity(79U);
    msg.sys_name.assign("VZHFOTPBLSENRXPDCASKYLYEJBOGGXXMDGIXDOGDAPQZLHYVSNZXGJDTIRZMENIUFQUACRJMBRLLNNCEPKTHWBYRBHUTUSWFERTVWRYLPWTZGLJECGSKWWABXOXHEJAHUADZNUACKFRVWQHCCPWFUBDJOVQWAZYHYKKMTOXPM");
    msg.sys_type = 138U;
    msg.owner = 15074U;
    msg.lat = 0.676217759515;
    msg.lon = 0.529118535328;
    msg.height = 0.82780746515;
    msg.services.assign("CZCXULASOPFBVLYWHCBZMNTVTCGMEAUGYIDLATQVDNGETQCCWHKYEDGEFQEKXXXSKVHPSXNUOGJLZVMNDOMBEXNQPLFPPOIZVYUBTNNOXGNSRTFLFIBHLYAKJFMRRCMOVLYYSCOVUUIJKOIWQDKAHLKGEMXUSSLGQEWRIIORVMWXEQKNHI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.526645756909);
    msg.setSource(7755U);
    msg.setSourceEntity(209U);
    msg.setDestination(11282U);
    msg.setDestinationEntity(228U);
    msg.sys_name.assign("OYSNFYAXSIXOTWDCANZHHKFDPCJOIIYWUISVCPRLWDPDUWIUAWGQUZIQM");
    msg.sys_type = 128U;
    msg.owner = 12877U;
    msg.lat = 0.360807045001;
    msg.lon = 0.793937701531;
    msg.height = 0.993248786948;
    msg.services.assign("BUGLZDEFSLUJMKEJJOQNSLVDHAJUBKAMSYLIAIMHCMEQGKXLLDYIAYRRUVKNAWDJBWFWEDZGTRQTIYNNEPOVIB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Announce msg;
    msg.setTimeStamp(0.0482221072528);
    msg.setSource(30669U);
    msg.setSourceEntity(161U);
    msg.setDestination(53451U);
    msg.setDestinationEntity(197U);
    msg.sys_name.assign("KIOQTZDXVYGDFGHXDQYQRUSIUAJPDJOMNWQWKMEWRINEFIZGZPHNXGXJXTPSHFALQZNPFXEYCMEECWRKUPHCTSERXRVHKWQDAFWEDYARBDLQYCSENFFVVAANOUKWSYILOBLWHOLC");
    msg.sys_type = 72U;
    msg.owner = 41850U;
    msg.lat = 0.519913663461;
    msg.lon = 0.75598229363;
    msg.height = 0.484420048819;
    msg.services.assign("SZWEMRUFNUSE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Announce #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.199395183074);
    msg.setSource(27446U);
    msg.setSourceEntity(35U);
    msg.setDestination(37023U);
    msg.setDestinationEntity(70U);
    msg.service.assign("RDIGLVEDUGIQSRBKHRSECDLMHORPQWNYGKBFKIVICRITABJSNCCWKYADNFSMMLGLYVLXMRFVDZAWIXJESNIQQUZRQJURBLQVXLBMSUYDEJJCESJCTOOGZPZWYVWHXGXFYFFFFCUNDZGCUNHIYOWYWMHOPBXAGRTPMPKZHNZNYOTTMOCROVVWAUJDQ");
    msg.service_type = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.244602819009);
    msg.setSource(47005U);
    msg.setSourceEntity(194U);
    msg.setDestination(31058U);
    msg.setDestinationEntity(164U);
    msg.service.assign("BROYDEEPLUMCMVDBVPSSJZHVYGJONCRUZZFVOXJUQSHTRVMBNNGCQPTXCEQPRRO");
    msg.service_type = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AnnounceService msg;
    msg.setTimeStamp(0.477731310106);
    msg.setSource(64858U);
    msg.setSourceEntity(59U);
    msg.setDestination(16721U);
    msg.setDestinationEntity(185U);
    msg.service.assign("WCWDRMNLBFGDBFUCCTGKLFDKMZ");
    msg.service_type = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AnnounceService #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.242983230711);
    msg.setSource(28143U);
    msg.setSourceEntity(237U);
    msg.setDestination(30635U);
    msg.setDestinationEntity(198U);
    msg.value = 0.348528624787;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.612328255868);
    msg.setSource(57632U);
    msg.setSourceEntity(17U);
    msg.setDestination(15931U);
    msg.setDestinationEntity(136U);
    msg.value = 0.428698025573;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RSSI msg;
    msg.setTimeStamp(0.573454121777);
    msg.setSource(14541U);
    msg.setSourceEntity(243U);
    msg.setDestination(47265U);
    msg.setDestinationEntity(8U);
    msg.value = 0.786864281099;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.106652524791);
    msg.setSource(39638U);
    msg.setSourceEntity(69U);
    msg.setDestination(25476U);
    msg.setDestinationEntity(204U);
    msg.value = 0.0222409605355;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.991567852899);
    msg.setSource(34807U);
    msg.setSourceEntity(207U);
    msg.setDestination(28641U);
    msg.setDestinationEntity(253U);
    msg.value = 0.186089869805;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VSWR msg;
    msg.setTimeStamp(0.288032976031);
    msg.setSource(10921U);
    msg.setSourceEntity(254U);
    msg.setDestination(53381U);
    msg.setDestinationEntity(34U);
    msg.value = 0.837261115558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VSWR #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.527228596612);
    msg.setSource(36906U);
    msg.setSourceEntity(143U);
    msg.setDestination(39631U);
    msg.setDestinationEntity(17U);
    msg.value = 0.560705296312;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.407411376848);
    msg.setSource(3686U);
    msg.setSourceEntity(120U);
    msg.setDestination(27569U);
    msg.setDestinationEntity(179U);
    msg.value = 0.436376007628;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLevel msg;
    msg.setTimeStamp(0.965482865982);
    msg.setSource(56172U);
    msg.setSourceEntity(79U);
    msg.setDestination(60282U);
    msg.setDestinationEntity(186U);
    msg.value = 0.152035624972;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.486311207593);
    msg.setSource(12167U);
    msg.setSourceEntity(250U);
    msg.setDestination(35900U);
    msg.setDestinationEntity(7U);
    msg.number.assign("LGWZAPLZRUADCGJPUDMGKWFNLYPSBCNHTINJIAIDGRBOSAXBCGNVYKKPZMUJPWEAFDXWCIMVLYIRNDHNVHHVIVJNAMMGXRQJXHRSKQXSQQTOTWSBDLQMVEUOCWGHULCZVYZQOPZMUMEXLIXTJTBREUYUSDFDFRFVKTUAPKQAWYRGYUOIZXW");
    msg.timeout = 23444U;
    msg.contents.assign("UDILDKPIQVZAKWNOTQHYOBCGJOUEPFCTBJASKSSJRXREACZOXGODUKREGAGYZVGIDHWCFWJZXEAWDVMLTZMHMESTDOYBFRTJTSKGVKFQOGUMIHFFBCVQUMHZHRZKUNXYPHELFBRYJYMQPRXYLHEDCIMKJNVLNNQXQPMDBBOPLTIAUPCVRHAJLPVVVQB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.505739198528);
    msg.setSource(59089U);
    msg.setSourceEntity(76U);
    msg.setDestination(8914U);
    msg.setDestinationEntity(196U);
    msg.number.assign("RDOEPTOFOGWLCETKJULCLLSDEIBKQRZHQLCUSPYKAWELGHLYCFUBYVCSITQPYJMGJAUKZHKFJHGYSYQCTXOJDNTAYGLAURIOVNDJIMOBUBWDZGPRFGZDRINEKAPVDVRNMNVDRXXLMSFMZIHYXOQWDJRXOTPFXTYVZHKCABWVEIMIUNMNHQTMSGAFSYSHOEFJZANXQAWKQXUMECPMNXLNVZPTSBSHVUARTQXGWZC");
    msg.timeout = 2953U;
    msg.contents.assign("UMGNZMTWYBZWYMDIEXNXNVSANCOLZKLJACGKJJATGHQCYUKBPYMMIOLJQAYCGCTCWXAQNOOZDFGRSSHWLEZYUJRWYXOVVMNPJQIVVDHGFKRDLDD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sms msg;
    msg.setTimeStamp(0.365695995352);
    msg.setSource(25264U);
    msg.setSourceEntity(53U);
    msg.setDestination(34086U);
    msg.setDestinationEntity(26U);
    msg.number.assign("WIMXTYJOPNVNSLUBMMC");
    msg.timeout = 40750U;
    msg.contents.assign("SFSZVKQNAKCGXMRXZZJDHJPHZLXLVEHNWWSFOTPEPUZYSEAENGGAHFGBITBPZGXVABYWFKWVZXTZLOSPKUWYMCOOFIQQACURCVDGIDQXVVFMFHVJZDLYGCAYEIHFMJDLTNKJDBCCWUGGSUNKRMJRQYWEXOOBUSRTOINXERBECALJITDLRMUFPYBCYKPWTKLOQLITNAJBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sms #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.472220666118);
    msg.setSource(6428U);
    msg.setSourceEntity(225U);
    msg.setDestination(25312U);
    msg.setDestinationEntity(208U);
    msg.seq = 4097674181U;
    msg.destination.assign("ANLSINABZWCHSJSVZMEXJLFNGWXNTFEDGCBWRJZBIYZTZQCKLQWDEAQBPADYUNETYPFOSRLONXNVDRYEMPLGUSHIKPQZRS");
    msg.timeout = 26561U;
    const char tmp_msg_0[] = {12, -80, -121, -122, 79, 81, 81, 114, 80, -52, -10, -34, -76, 50, -30, -42, -121, -13, 65, -59, -122, 125, 8, 40, -110, 35, 59, 82, 7, -103, 67, -49, -99, 40, -69, 69, -61, -29, -73, 62, -78, -29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.539501179821);
    msg.setSource(12695U);
    msg.setSourceEntity(4U);
    msg.setDestination(41800U);
    msg.setDestinationEntity(31U);
    msg.seq = 1521228636U;
    msg.destination.assign("DVQDLLDVUQEQHXQLYFCCOCRREHRXRMTGJUAQKYBCWRHHJYNMBRALKFXTCDEBCSHFAINNTZUFYKSSMXMPEIVWYGARIKFSHVEIWJTDGCQFSDNAOLEJUMSUUZZTOSOVMZPANJQUJFUWFKZSNLURCWZRXAEFUGVLPYMWKONKPJQYGLAFEZQXHBLKBWTGCLIWYEIJDSBBGJAIKNOTVGGGPRTBWPJMHINDXPHYZTXYBMPZDXHOTVIPEKZVMWOOXVC");
    msg.timeout = 53641U;
    const char tmp_msg_0[] = {-116, 17, 71, 47, -65, 117, -53, -14, 120, -56, -117, -47, 93, 36, 49, -52, -62, -94, -87, -63, -79, 53, -106, 26, -73, -10, -78, 33, 125, 10, 24, -38, 116, 119, 8, -97, 83, 72, 86, 124, -106, -55, 102, 103, -30, -3, -94, -82, 20, 73, -40, -23, 0, 79, -59, 84, 73, 8, -86, 80, -32, 116, 47, -125, 72, 60, -82, -11, -88, -8, 98, -60, 6, -70, -75, 93, -53, 60, 85, 52, 124, -56, -11, -2, 15, 31, 118, -61, -109, 58, -123, 32, 101, -7, -84, -36, -116, -61, -122, 120, 71, 63, -66, -27, 6};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsTx msg;
    msg.setTimeStamp(0.878674200387);
    msg.setSource(34674U);
    msg.setSourceEntity(67U);
    msg.setDestination(5703U);
    msg.setDestinationEntity(103U);
    msg.seq = 114258219U;
    msg.destination.assign("VDAZRCCUBQBSPRPEWAXREVPCONSKQBILHZUVYJXPBIFXNYQFOZONAMADCESOH");
    msg.timeout = 7569U;
    const char tmp_msg_0[] = {1, -44, -20, -126, 36, 94, 43, 9, -85, -74, -39, -93, 46, -25, 91, -40, -15, -118, 103, -4, -102, -84, 52, -92, 93, 109, 31, -99, -107, -19, -103, 71, -102, -64, 31, 67, -64, -63, -86, 16, -75, -97, -88, -108, 3, 60, -125, -100, -112, 97, -96, -99, 60, -41, 89, 20, 89, 17, -89, -11, 28, -10, -67, 70, -17, 68, 114, 97, 24, -125, -45, -106, 86, 44, 71, 68, -106, 15, -106, 66, -93, -75, 36, -117, 10, 26, -99, -22, 40, -86, 59, 37, -41, 36, -98, 105, 3, 55, -60, -10, 123, 40, 101, -51, -126, -8, 34, -96, 113, -105, 50, -3, -62, -26, 84, -107, 126, 124, 27, -60, -40, -101, -54, 115, -79, -26, 0, 16, 2, -35, 43, -92, 1, -94, 102, 115, 11, -109, -11, 0, 87, 118, -10, 115, 29, -6, -114, -103, -15, -116, 84, -108, 88, -103, -93, 47, -21, 26, 11, 91, 37, -9, 2, 56, 62, 88, 53, -121, 30, -73, -107, -25, 109, -42, 94, -121, -26, 65, -108, 21, -5, 52, -117, -121, 63, 31, 89, 56, -96, 11};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.240992379732);
    msg.setSource(48251U);
    msg.setSourceEntity(6U);
    msg.setDestination(13484U);
    msg.setDestinationEntity(176U);
    msg.source.assign("RTZENBAYCHSORPXOYIZCQQVKLUREPKMFONMLARDWWZNMRTMZLZKFVDHILDWDDITPUQVRYKGRGFLQJUPGTETSDPMDSBYKCBHDFJT");
    const char tmp_msg_0[] = {-123, 98, -122, -43, 39, -84, 94, 96, 30, 115, 35, 85, 122, -57, 55, -67, 72, -100, 94, 103, 112, -17, -2, -47, 63, 74, -76, 14, 84, -75, 50, -73, -110, -108, 10, -92, 19, -121, -108, -91, 25, -97, 56, 96, -117, 83, -1, 73, 111, 91, -112, 28, 46, -56, 117, -26, -52, 12, 24, 96, 54, 86, 100, -75, 34, 7, -110, -106, 34, -10, 115, -44, 126, 48, -128, 73, -69, 106, 71, 64, 1, 8, -89, -79, 53, 37, -69, -78, -40, -69, 102, 74, -115, 10, 68, 2, 88, 50, -118, -24, 65, 121, 114, -15, -57, 65, -105, 125, 116, -58, 125, -91, -95, 56, 125, 120, 84, -39, 84, 70, 50, 12, 94, 111, -98, -56, 105, 91, -98, 104, -75, 56, 79, -86, 124, 54, 102, -74, -115, -15, -10, 76, 61, 1, -33, 46, 51, -18, 31, 50, 4, 46, 71, -79, -71, 86, -77, -128, -111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.37533993856);
    msg.setSource(28920U);
    msg.setSourceEntity(140U);
    msg.setDestination(51082U);
    msg.setDestinationEntity(42U);
    msg.source.assign("LDCIRTKKPWVDWWATKIPDIAHY");
    const char tmp_msg_0[] = {-56, 87, 117, 51, -121, 107, -118, 112, -71, -47, -69, 53, 39, 117, -101, 31, 80, -87};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRx msg;
    msg.setTimeStamp(0.610124598399);
    msg.setSource(63289U);
    msg.setSourceEntity(38U);
    msg.setDestination(42011U);
    msg.setDestinationEntity(58U);
    msg.source.assign("HCQJIFOLCTZLIDSBFEZEXEEXKILGCORDHFAPPURKHRVTTKEAOPLHVWVBNFJVJMOVDOAJTXXFBAZWSMZIKLJNSVEMEWTGYCWZJLYOJQQIHIKFWGAYDCWPSFUVVPOGMDTPALZNRQUMCMRWFUZXPIXQOGXUCNILTAUTDJYSONMZDBERPAHQNHSSKSGQWBGDJZXINNVFUQHKNFMKYKKRCGVSWJYOYIAQRXUSLBE");
    const char tmp_msg_0[] = {-78, -109, -77, 12, 120, 27, -87, 74, 44, -23, 81, 77, 124, 11, 71, -103, 83, 113, -20, -64, 45, 69, -90, 63, 111, 55, -78, -51, -120, 56, 31, 107, -92, -106, -96, 84, 110, -92, 107, 81, -95, -51, 102, -81, -111, -125, -26, -8, 124, 22, 19, -19, 49, 108, 64, 117, 40, -18, -54, -107, 59, -28, -41, -53, -108, -94, 36, 55, 115, -56, 85, 55, -102, -124, 61, -113, -66, -35, -16, 73, -36, 41, -53, -117, 76, 12, -80, -73, -99, -118, 40, 117, 121, -91, 124, -107, -120, 35, 91, -15, 114, -10, -75, 49, -37, -7, -65, -78, -81, -57, -99, -104, -81, 64, 89, -101, -108, 17, -68, -77, -92, -25, 92, -106, -15, 108, -80, 77, -32, -25, -31, 75, -79, 43, 73, -75, -64, 52, 29, -42, -94, 26, 66, 59, -103, -32, -12, -45, 83, -106, -2, 82, -98, 1, -19, -13, -111, 34, 113, -84, -115, -3, 21, 26, 39, -121, 5, 98, -121, 48, -66, 15, 118, -68, 35, -116, -53, -113, 102, -92, 89, 61, 53, -48, -128, -65, -56, 122, 74, -41, -62, 80, -67, -101, -60, -18, -115, -19, -80, 106, 104, 71, 13, -66, -99, 29, -126, -33, 101, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.334859991793);
    msg.setSource(39172U);
    msg.setSourceEntity(224U);
    msg.setDestination(30481U);
    msg.setDestinationEntity(39U);
    msg.seq = 3516330329U;
    msg.state = 71U;
    msg.error.assign("DQRZQZMWADHNAQNLLCPGGKEJTDJFRQDPMGPXYSCHSOWXQQVXNSHZHNOVYPVXBYNWLXGLDCFYYUZEKRGXLIRHILLFHBTJYSWUWOUKIPKVUFLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.702683411451);
    msg.setSource(12535U);
    msg.setSourceEntity(55U);
    msg.setDestination(23833U);
    msg.setDestinationEntity(231U);
    msg.seq = 832577735U;
    msg.state = 46U;
    msg.error.assign("LNZUMJZZTNAHQEBNFPRDKWMHXGXAKMGRBBSGZDXDSGPWQEDUIXAWPNPREKMOBGKRYUKTOQLTOVNLXWACTHIHXYGJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsState msg;
    msg.setTimeStamp(0.961302935629);
    msg.setSource(46594U);
    msg.setSourceEntity(214U);
    msg.setDestination(25492U);
    msg.setDestinationEntity(164U);
    msg.seq = 1322625248U;
    msg.state = 84U;
    msg.error.assign("PBNODJXVIJGDGXGSLUDUIEQNREVTBTAYBIJZEFCYMORYJSAQMDWVTPYWWIBLUKONAUACHCFLPMDXTGTCCJXJSPYLI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.122794514195);
    msg.setSource(15038U);
    msg.setSourceEntity(240U);
    msg.setDestination(38396U);
    msg.setDestinationEntity(243U);
    msg.origin.assign("ZPESARINMWVJHKGQROMGRYIRAHVLNNEXEWXUFCEEYDRPHKQWLYBBNQCG");
    msg.text.assign("IHVRIVXSYOWKZIFQPRKUCELGJWYUZDFTKJZSODDDAPEJGXBSGINPLVTEXTOINQFKEUBPETMAJPCGOZCEMJASXHIQDXMSEZLVRCASBXAINOBXFQTRHLGRQKBYKMCALKHHKGTPYWFHUNVICQHHEHPVTQGNMOLOBFMWOYLIUWYSPAWVACCGGNOAMJOMDJFQQUKZIBBLZTNJLDNFWZYNUPMUBJPYESDVHZURRGVLCUYEAXKYWWJTCDFDV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.887120470352);
    msg.setSource(22519U);
    msg.setSourceEntity(180U);
    msg.setDestination(57767U);
    msg.setDestinationEntity(141U);
    msg.origin.assign("RMCWBEUTAMWVMYLFNSHKKKIFUMCQVEUEVJFABZGWTXIEOJHRZQTKJMZMHAFBGMEKKIQRDEFAPTUMNFDHNRCGNYRUDPKGMWVNCKZLROOHSZNSTFDLZUTDRHAXZSLDBIZXONGWUJRS");
    msg.text.assign("SWASCXZAQEFJBXZFASVBMIVXYFLQRYBVIMFYVZUMUVFKSUHHBEJSQESVOBITCON");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TextMessage msg;
    msg.setTimeStamp(0.336110019395);
    msg.setSource(55011U);
    msg.setSourceEntity(223U);
    msg.setDestination(43622U);
    msg.setDestinationEntity(208U);
    msg.origin.assign("GPACOIPKRBVUEJYWXLCIVLWUGKWSDXVPRNZNQXMHAQVFAQBYTMEDHLLSMAKRWMAYBGIELOUXUMTRSHMPNWFPJXBIGOWPXNYUKILZZOCHKFQIRZVHWTCDQFEBJTPFIBFJQNIFXZHRJSQGTONHAJXSVBLRTOIQSOWMJWDDSENVUDSBVAKJFXCUBKMZDOEDWPSLUDSZL");
    msg.text.assign("CFWCPQTQURBUMMONZUPYXBDOYENRSAKTPIMBELPWPMHFUHXCOCPJLYYGIGNVXPOF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TextMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.873644064425);
    msg.setSource(26392U);
    msg.setSourceEntity(18U);
    msg.setDestination(56085U);
    msg.setDestinationEntity(219U);
    msg.origin.assign("QBLPHBZVNUYFBPVREOTDWDVBXRDAYQENWOJCZMRWAJFKUZSWUNHUQCPABBJPIKSUWRMGNSXIVHILMSLFZWOBHPVRBNZTYTZDSXKQAZMFCCJWPQISF");
    msg.htime = 0.813250557389;
    msg.lat = 0.827299369266;
    msg.lon = 0.12151830039;
    const char tmp_msg_0[] = {-38, 41, -10, 104, 43, 12, -5, -15, 88, 97, -49, -29, -41, 105, 61, 71, 9, -106, 120, -105, 32, 84, -98, 82, -1, -27, -44, -42, 20, 42, 59, 21, 75, 2, 101, 83, 3, -5, -74, -97, 78, -105, 88, 122, 98, -115, 45, 48, -9, 52, -15, -89, 3, -16, 80, 30, -18, -1, 11, 126, -9, -113, -6, 46, -115, 0, 48, 86, -20, -79, 27, 36, 21, 95, -84, 62, 82, 94, -84, 104, -41, 103, 60, -115, -117, 111, -27, 102, 110, -115, -36, -69, 13, 9, 20, -98, 63, 42, -61, 47, 103, 95, -120, 2, 57, -111, 36, -120, -33, 59, -1, 37, 113, 50, -118, 9, -46, -60, -15, 102, 120, 56, 40, 64, 81, -77, -9, -46, -108, -65, -16, -41, -106, 73, 50, 63, -81, 83, 67, 14, -33, -86, -2, -128, 25, -84, -59, -7, -44, -22, 109, 13, -69, -20, -4, -32, -59, -51, 19, -29, 58, -81, 82, 111, 122, -85, -49};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.749918793663);
    msg.setSource(45669U);
    msg.setSourceEntity(4U);
    msg.setDestination(53676U);
    msg.setDestinationEntity(231U);
    msg.origin.assign("LRHVIKUDEXLSDHTIRGIXKOCOGKBPOXZUVIHBMKTGBAGJCDQZNQJSEWWAPJUYNLFIBJJPYPTLCKIPMLKWZTUIKTZBKVLXFEGRECFOUGDNSRAJNMEWNLRSKRBUVYNYSDZLAHCJVDQMOTQESXXYCCRYWWNNHDFWKEQHBTVAWVHAQNYYPHR");
    msg.htime = 0.234511799008;
    msg.lat = 0.438332733269;
    msg.lon = 0.228719106674;
    const char tmp_msg_0[] = {100, 95, -97, -73, -47, -26, -57, -128, -79, 74, -55, -99, -119, -81, -124, -123, 35, -10, -74, -102, 105, 26, -49, -41, -95, -50, -5, -122, 64, -80, 107, -53, -76, 124, -106, 27, -24, -98, 22, -119, -75, 34, 97, 1, 3, -51, 92, -45, 104, -119, 61, -77, -127, 96, -87, -121, 114, 92, -23, 121, -17, -71, -69, 70, -81, -44, -72, -68, 16, 104, 46, -12, -35, -49, 77, 71, -116, 2, 45, -45, 112, -69, -60, -27, -87, -43, 47, 36, -56, 28, 62, -51, 6, 24, -107, -41, -32, -123, 50, 119, 39, -100, -9, 95, 5, 42, -11, -9, 41, -75, -89, -5, -121, -73, -119, 43, 58, -115, 94, -75, -29, 85, 3, -83, 101, -43, -73, -120, -28, -16, -78, 98, -70, 86, -76, -79, 95, -42, 113, 2, 30, 46, 77, 102, 61, 5, 114, -128, -107, -100, 41, 31, -18, 110, 6, 4, -10, 83, -125, -60, -45, -91, -61, -59, 96, -64, -13, 102, 42, 29, 9, -106, -14, 32, -23, 115, 119, -23, 31, -16, -37, 63, -76, 103, 2, 41, -27, 62, 68, -49, 12, 92, 118, 26, -48, -50, 4, 74, 123, -72, -93, -122, 45};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgRx msg;
    msg.setTimeStamp(0.613892844546);
    msg.setSource(44424U);
    msg.setSourceEntity(254U);
    msg.setDestination(50851U);
    msg.setDestinationEntity(69U);
    msg.origin.assign("DYPIFEVMFNTFQOVBAKYDNWTRPEGECGTQDGPOCUIRIIBHUGZCYDQVZIILKJTMHCNVNAZZKLQTHYKCSFRMYFZHJAJSBEVQKIDGGMXYSKOINRDUNXWPUFTLWHVDJMZJKOMTWBJJRRXJXRFPQCIXBWKXEOLQLYTAANBSWZOWIMPHENBJXBSSZWGFBAEAXNNUHOURSLDEUPCLFCVGUQQZLMTAWVSKYGRYJDLSOEQSPHBLOHMPVZKODHREXCVUFAW");
    msg.htime = 0.5609281244;
    msg.lat = 0.838799056275;
    msg.lon = 0.198238436565;
    const char tmp_msg_0[] = {-38, -30, -62, -44, 70, -41, -111, -54, 23, -10, -93, -58, 85, 42, 82, -42, 38, 12, -29, 88, -98, 66, 65, -65, 41, -72, -9, -9, 122, 62, 70, 27, 42, -62, 101, 7, -44, 106, 5, -17, -83, 64, 45, 59, -66, -20, 80, 122, -72, -101, -28, 48, 0, -42, 34, -113, -86, -81, 104, 23, -106, 121, 28, 76, -22, -52, 25, -13, 60, 7, 69, 19, 5, 43, 82, -10, -78, 68, 90, 63, 29, -74, -65, 22, -93, 57, -122, 87, 48, 21, -16, 27, 121, 9, -85, -78, -16, 77, 52, 33, 49, -86, 100, -124, 4, -116, -99, -125, -67, 92, -25, 44, 79, 12, 124, -70, -52, -91, 10, 124, 19, -107, -66, -113, 47, 116, -124, 8, 55, 59, -64, -71, -125, 116, 80, 15, 15, -123, 76, -24, 15, 9, 64, -59, -73, 94, -6, -58, -42, 82, -60, -98, -122, -8, 109, -125, -83, 66, -65, -4, -33, 21, -22, -122, 118, 107, -104, -124, -89, 39, -25, 32, 87, 79, 21, 123, -56, 83, 100, 94, -51, 126, -117, -65, -120, 73, -113, 1, 86, -99, -51, 107, 27, -41, 55, 110, 88, -14, -87, 14, -8, 63, 53, -93, -89, -80, 104, -109, -96, -41, 6, -92, 89, -83, -52, -47, 61, -6, -46, -117};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgRx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.848095737418);
    msg.setSource(49845U);
    msg.setSourceEntity(125U);
    msg.setDestination(39044U);
    msg.setDestinationEntity(26U);
    msg.req_id = 2519U;
    msg.ttl = 42686U;
    msg.destination.assign("AEEUATBTKUKLABGKJDTNZEQHHJKYQZLLWQSMMDHRAULJABFLEIMRNWARPMGHFQINMZOOTTPDAKSXVRYYTOUCWCZFPINGTXUWXLAIMPWEKWSVRQWZBDKXHCDPVOHRVJWSJPOYHVZSUQGJXBLVBECVJNDZSTPUFGYBTWCYDFHGBIPOXEFJFUSCSRPMQOIFLXXRRDEZBCZDQIMWVVAAGLNISYNYEGOHYIFQUTFMOMDKLGRJEINZOYVCQCHKUCNNBG");
    const char tmp_msg_0[] = {-79, 107, -25, 112, 95, 95, -104, 6, -35, 31, 102, -42, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.26133561691);
    msg.setSource(23019U);
    msg.setSourceEntity(97U);
    msg.setDestination(64648U);
    msg.setDestinationEntity(34U);
    msg.req_id = 6466U;
    msg.ttl = 53338U;
    msg.destination.assign("QJEXMASPDHJTTXTGKQLTP");
    const char tmp_msg_0[] = {-116, 33, -5, -56, -77, -112, -48, -79, 75, -13, -55, 60, -60, 42, 123, 94, -113, 36, -115, -67, 126, -78, 14, -19, -33, -117, -88, 21, -65, 30, 61, 54, 13, -93, 43, -111, 89, -8, 51, 105, -103, -26, 57, 24, -116, 16, 78, 15, -26, -22, -120, -2, -81, -38, 71, -79, 4, 27, -121, 1, 100, -117, 80, 21, 61, 97, 109, -21, 112, 76, -61, 16, 119, -97, 115, 99, 60, 98, -10, -96, 40, -80, -10, -23, -31, 122, -65, -68, 102, 54, -86, -126, -86, -104, -75, 70, -124, 113, 86, 29, -52, -18, 98, -33, -39, -128, -61, 74, -41, -116, -39, 123, -88, -90, 118, -38, 39, 59, -18, -62, 29, 26, 57, 123, 68, -127, -123, -37, -62, 10, 0, 55, -38, -36, 26, 3, 48, 39, -114, 47, 13, 14, -69, 20, -100, -116, 19, 18, -42, 60, 1, -117, 12, -128, -65, -27, -79, 24, -31, -4, -124, 120, 36, -6, 101, -100, -110, -64, -31, 31, 118, -86, 12, 104, 102, -57, 94, -1, 58, -5, 51, -39, -105, 39, 82, -109, 32, 51, -2, 108, -108, -105, 79, -47, -34, -124, -75, -36, -24, 92, -119, 33, 112, -33, -48, 79, 52, 65, -89, 24, -93, 124, 26, -88, 92, 24, -9, -108, 87, 42, -68, -25, 39, -125, -1, 62, 58, -97, 22, -60, -12, -51, 40, -110, 55, 11, 79, 78, 27, -106, 30, -73, 34, -58, -115, 96, -11, 8};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumMsgTx msg;
    msg.setTimeStamp(0.787628445682);
    msg.setSource(44484U);
    msg.setSourceEntity(212U);
    msg.setDestination(17718U);
    msg.setDestinationEntity(20U);
    msg.req_id = 49467U;
    msg.ttl = 17561U;
    msg.destination.assign("JKHZBFAMTGTVWLYTCSQXNPJJAMXQPHDMSZDKJVMKEOBODSERYLXWCCVOFMGHUNPHAAN");
    const char tmp_msg_0[] = {115, -56, 117, -80, -9, 56, 105, 64, -25, 38, 102, 83, 83, 8, -37, 36, -112, 26, -94, -31, -53, -115, 88, 85, 53, -45, -91, -56, 67, -122, -25, 2, -58, -36, 114, 60, -13, -44, -1, -126, 115, -97, 45, -106, -84, -107, -16, -128, 50, -15, -17, 39, -42, -57, -100, 91, -70, 62, 78, 35, -65, 114, -121, -50, 82, -93, 108, -48, -73, 63, 81, -7, -60, 62, -29, 1, 107, 111, 37, -98, 76, 24, 74, -124, 114, -47, 56, -52, 75, 42, -92, -73, -59, -10, -112, -92, -86, -98, 114, -47, -124, 24, 73, -113, 45, -30, -115, -32, -32, 9, -90, 20, -27, 20, 92, 6, -11, 105, 113, 97, -122, 5, -20, -111, -77, -8, -96, -16, -43, 26, 87, -13, -92, 19, -71, -23, -29, 2, 59, 110, -108, 102, -4, 0, 91, 83, -50, -61};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumMsgTx #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.0848625704206);
    msg.setSource(37347U);
    msg.setSourceEntity(171U);
    msg.setDestination(46655U);
    msg.setDestinationEntity(145U);
    msg.req_id = 47850U;
    msg.status = 47U;
    msg.text.assign("AKUYRFKZJANQGDCNSHQOMXHCZYSZZUFZQLXSAYVROAGOMXDWSDTQMEMVCPZELQMOXDKAEUERXCVGIMGYPPOHEABRIKZKQWIIRUFVCTSNRYFXCHLIEMFVUWFUAUUTDJJIESDPJOYWGGMBYHJNJIZXVKKZKWHNUYLLCOBICHTXVFJWVGPJETAXOMWPBPTARQASKQTMGBFE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.653845225803);
    msg.setSource(37588U);
    msg.setSourceEntity(12U);
    msg.setDestination(55131U);
    msg.setDestinationEntity(155U);
    msg.req_id = 19485U;
    msg.status = 188U;
    msg.text.assign("ZFIQYCBJAXYFDJGXQVSBSWKDOHAXGWHODFHRSVVJHBAQSNHDYCYQGRMVHHVCZZOEJRMDOKNGPCJVNKFPMWJBEUJJGQEURCFUTQLWLWHRPDUGIUWPXIYJBEKJNBPXEFXZUGUSSMHSODMRMOKIWTNIW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IridiumTxStatus msg;
    msg.setTimeStamp(0.164242731308);
    msg.setSource(40548U);
    msg.setSourceEntity(223U);
    msg.setDestination(6198U);
    msg.setDestinationEntity(122U);
    msg.req_id = 27523U;
    msg.status = 124U;
    msg.text.assign("WHZUARXLWFEJVSCZVEQSLJGMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IridiumTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.550896393262);
    msg.setSource(41930U);
    msg.setSourceEntity(223U);
    msg.setDestination(46441U);
    msg.setDestinationEntity(48U);
    msg.group_name.assign("WTOZRKSPVRDMGNBCDVXRHHQCAXQCGZFNQEYNTEC");
    msg.links = 2858738461U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.439906804572);
    msg.setSource(23319U);
    msg.setSourceEntity(17U);
    msg.setDestination(26334U);
    msg.setDestinationEntity(159U);
    msg.group_name.assign("ADTGHNXIYQVXDSALNQVTYWZVCVJDBMVYDFVHRSXEXSJOZBRDDTEFVEWBQFNNLSWZPBEEELFODHGHTILCSPUPOTRGZUIBYYZAJTGHEYLQHCXZBIPNAGPQXZBHFMGWWCYKJJLXWHUONBPSBLAUIDQPMFKSMFKXWZUDYRRWKOYOPUHQLSODIMUAG");
    msg.links = 1507096082U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupMembershipState msg;
    msg.setTimeStamp(0.613576117268);
    msg.setSource(34973U);
    msg.setSourceEntity(191U);
    msg.setDestination(30621U);
    msg.setDestinationEntity(56U);
    msg.group_name.assign("MUJFMWPBXFMUNUZHBKGDPTLGWXDAJOWHHCQJLYAUWHGSYTPWKFROJDTZEGOLVRDTTQFKRKSPJZCSMBESPYPXQJQNRRWUGTIXUZDVUBDINCNLYEAABCYXXSZEYWSYIETRADIEQTMQVALOFKROJIVUHISGLZCTANCPCSYAXNFGKLNEBHRXEMZXPDVLXBFSOAMWLHUQZK");
    msg.links = 1011234804U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupMembershipState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.35558061928);
    msg.setSource(3628U);
    msg.setSourceEntity(192U);
    msg.setDestination(2426U);
    msg.setDestinationEntity(7U);
    msg.groupname.assign("FCLBQCRXMMRFKCMUYDNBLZHVQMPKRJWDQVNHMUAURALMHCWVTMRCCYISIXGIUJXLODQFZAVNOSTAZTYIOYBCPQJAIXZIUUFYRTHYPDSKDRXORDDTOEHVZPFQEVMECWEELEBXUETLLLZCN");
    msg.action = 206U;
    msg.grouplist.assign("TMJXYZRGTBTHSYFOPUGWBENEQUILOALSQRNILFOPVWGTNGWDLSOVQDUSHCTRNCGXSLMBHDSBBPORQDFWVUGTDPDNRHFTJBEVXJKGXAFAAMIPFKLOXAJOUU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.615003889392);
    msg.setSource(681U);
    msg.setSourceEntity(166U);
    msg.setDestination(18022U);
    msg.setDestinationEntity(219U);
    msg.groupname.assign("OEQRLNSZJETZAJLFFPAUIQDRKEEZAVCILRTPXHWLDHUBVDNGASFOWBNQOQIPFPYKXTSR");
    msg.action = 127U;
    msg.grouplist.assign("FSUHBNQCOBQDENQTVLWRBUEHGMNCSNFABHFXMMLJSFVAGZRZVFOPHOEKLADPHYTJWXMZVKKJXNBGCL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SystemGroup msg;
    msg.setTimeStamp(0.58465367467);
    msg.setSource(24026U);
    msg.setSourceEntity(114U);
    msg.setDestination(16625U);
    msg.setDestinationEntity(175U);
    msg.groupname.assign("LXXHIMSDCOITLNCZIWMBYRVFVQNBFZTCHRXDCCGILXRRWVFCFWNQILGEKFJBQDGJQKYHBATLMLFPJXUWYJGNXPKEMSTSGMODGJPCPRAZYBSYNHBMNOQUIBNODEUNVAUGEHLVFPHKEWBQSESSZ");
    msg.action = 215U;
    msg.grouplist.assign("CJAJXNWJAPGUYTNDIHEVCOEPSFAZFUAPSGUYYKZYYAXK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SystemGroup #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.793051031618);
    msg.setSource(18361U);
    msg.setSourceEntity(185U);
    msg.setDestination(61475U);
    msg.setDestinationEntity(93U);
    msg.value = 0.125432372192;
    msg.sys_src = 10851U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.223347591701);
    msg.setSource(52124U);
    msg.setSourceEntity(20U);
    msg.setDestination(56546U);
    msg.setDestinationEntity(213U);
    msg.value = 0.794313961975;
    msg.sys_src = 61784U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LinkLatency msg;
    msg.setTimeStamp(0.719780631357);
    msg.setSource(23903U);
    msg.setSourceEntity(30U);
    msg.setDestination(62483U);
    msg.setDestinationEntity(78U);
    msg.value = 0.274775198665;
    msg.sys_src = 22214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LinkLatency #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.142121650807);
    msg.setSource(62711U);
    msg.setSourceEntity(133U);
    msg.setDestination(47651U);
    msg.setDestinationEntity(211U);
    msg.value = 0.8194156836;
    msg.units = 132U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.392252607319);
    msg.setSource(52541U);
    msg.setSourceEntity(70U);
    msg.setDestination(61965U);
    msg.setDestinationEntity(154U);
    msg.value = 0.558394146568;
    msg.units = 106U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExtendedRSSI msg;
    msg.setTimeStamp(0.393038667774);
    msg.setSource(56394U);
    msg.setSourceEntity(80U);
    msg.setDestination(40006U);
    msg.setDestinationEntity(56U);
    msg.value = 0.0683606484458;
    msg.units = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExtendedRSSI #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.953659590738);
    msg.setSource(62933U);
    msg.setSourceEntity(160U);
    msg.setDestination(10458U);
    msg.setDestinationEntity(102U);
    msg.base_lat = 0.636062805522;
    msg.base_lon = 0.534881970417;
    msg.base_time = 0.390940022253;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 35016U;
    tmp_msg_0.destination = 47171U;
    tmp_msg_0.timeout = 0.55254936354;
    IMC::AcousticStatus tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.req_id = 54742U;
    tmp_tmp_msg_0_0.type = 206U;
    tmp_tmp_msg_0_0.status = 39U;
    tmp_tmp_msg_0_0.info.assign("RMXDUZAXSCSACBLNBOCFCWDTDQFOMYSCVZTCPHTWAMAVHMVNTUPZVSPQNONEPIXBIYOSGKPX");
    tmp_tmp_msg_0_0.range = 0.515247715293;
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.0622463000656);
    msg.setSource(28402U);
    msg.setSourceEntity(91U);
    msg.setDestination(3583U);
    msg.setDestinationEntity(238U);
    msg.base_lat = 0.131159284531;
    msg.base_lon = 0.526135623037;
    msg.base_time = 0.00627546795966;
    IMC::RemoteCommand tmp_msg_0;
    tmp_msg_0.original_source = 39178U;
    tmp_msg_0.destination = 61138U;
    tmp_msg_0.timeout = 0.15902496472;
    IMC::Launch tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.timeout = 26301U;
    tmp_tmp_msg_0_0.lat = 0.434603077015;
    tmp_tmp_msg_0_0.lon = 0.365569869223;
    tmp_tmp_msg_0_0.z = 0.600391528689;
    tmp_tmp_msg_0_0.z_units = 153U;
    tmp_tmp_msg_0_0.speed = 0.13510711361;
    tmp_tmp_msg_0_0.speed_units = 147U;
    tmp_tmp_msg_0_0.custom.assign("PYREYSPWWXDDKQXMKUFCKNBDFYCRQNOSBSNQJTDAGNDUNISBRXPTVEGLCVEFKBVUWUYLJDTLAUDEQUWNGOXHNIE");
    tmp_msg_0.cmd.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricData msg;
    msg.setTimeStamp(0.510779366325);
    msg.setSource(57349U);
    msg.setSourceEntity(67U);
    msg.setDestination(32724U);
    msg.setDestinationEntity(179U);
    msg.base_lat = 0.164991734694;
    msg.base_lon = 0.906102865327;
    msg.base_time = 0.081060094751;
    IMC::HistoricSample tmp_msg_0;
    tmp_msg_0.sys_id = 52833U;
    tmp_msg_0.priority = 8;
    tmp_msg_0.x = -10887;
    tmp_msg_0.y = 7778;
    tmp_msg_0.z = -12386;
    tmp_msg_0.t = -10719;
    IMC::AcousticLink tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.peer.assign("CQJELDAHVFKGTVAISZMIKQRAGRUHDXDJVFJULUMIHBFRWOOFRPCKACSHBEKMCYAECJTGMWTNNWEOEZHBNGCDZNTLEZSDXYDOABFLIRDQJPLWJINUNSPYNNIIEBWPXIYGOMSQWYSYXTZDNUKHPGULCAPRGSOZCQNYVKFCUYVOWRIMMUMBGILJXTYFTEJWSUODVKZRVHPZXQKBAWZJPFGVXHLQETHB");
    tmp_tmp_msg_0_0.rssi = 0.0936554715843;
    tmp_tmp_msg_0_0.integrity = 28574U;
    tmp_msg_0.sample.set(tmp_tmp_msg_0_0);
    msg.data.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.270737418747);
    msg.setSource(40577U);
    msg.setSourceEntity(10U);
    msg.setDestination(7790U);
    msg.setDestinationEntity(148U);
    msg.base_lat = 0.126603401436;
    msg.base_lon = 0.701503621367;
    msg.base_time = 0.859765922961;
    const char tmp_msg_0[] = {39, 56, -9, -68, 121, 70, -28, 9, 9, 5, -107, 111, 17, 64, -28, 46, -49, 97, 30, -70, -105, -11, -12, -100, -59, -32, -65, 64, -12, -61, 90, 102, 48, -14, -58, 54, -41, 96, -111, -13, -81, -85, -13, 5, -120, -67, -21, 38, 59, -112, 1, 106, 15, -113, 13, 121, -114, 28, -21, -78, -111, 78, 79, -1, -19, 122, 65, 5, -88, -25, -31, -25, -112, -76, 4, -92, -22, -87, 93, 103, -13, -14, 93, 115, 109, 108, -24, -16, -33, 89, 123, -10, 92, -60, 107, 28, -50, -112, 53, -116, -96, 43, -5, 12, 27, 106, -124, 2, -71, 77, 41, 111, -39, -105, -64, 8, 92, 120, 73, 120, 2, -29, 19, -5, 83, 61, -49, 69, -51, 16, -51, -69, -17, -69, -42, -92, 73, 31, 104, -101, 80, -7, -109, 81, 124, 18, 94, 15, -87, 69, -18, 123, 125, 14, 119, -8, 35, -50, -120, -82, -67, 25, 19, 81, -67, 37, 123, -35, 103, -118, 34, -72, 111, -32, 108, -124, 22, 69, -113, -126, -64, 125, -113, -93, -117, -109, -98, -114, 64, -13, -119, -30, -14, -118, 47, -10, -113, -120, -82, -102, -125, -89, -1, -58, 29, -100, 54, -33, 28, 56, -114, 95, 77, -47, -83, 75, 83, -17, -50, 76, 8, 89, -24, -24, 114, 82, 82, 67, -29, 3, -11, -89, 76, 27, 107, -49, 83, -16, -17, 66, 0, 103, -88};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.521384306415);
    msg.setSource(64094U);
    msg.setSourceEntity(146U);
    msg.setDestination(35249U);
    msg.setDestinationEntity(164U);
    msg.base_lat = 0.490682570676;
    msg.base_lon = 0.913561075831;
    msg.base_time = 0.825216937065;
    const char tmp_msg_0[] = {41, 15, 59, -37, -38, -51, -15, -71, 115, -91, -77, -9, -19, 46, -31, 19, 7, -84, -50, -35, -1, -31, 64, 70, -50, 79, -5, 105, 87, -26, -53, 3, 59, 50, -34, -117, -114, -37, -90, -27, -120, 49, 49, -18, 3, -93, 81, -17, 23, -57, 72, 85, 121, 123, 35, 44, 16, -87, 79, -100, -22, 83, -106, -95, 34, -80, -120, 100, -124, 56, 126, -58, -118, -36, 60, 63, -82, -117, 47, -3, 103, -38, -72, 120, 122, -119, -27, -30, 10, -13, 79, -73, -19, 44, -6, -66, 1, -38, 72, 70, -52, -39, -49, -59, -29, 47, 40, -105, -66, -22, -7, -104, -51, -73, 125, 42, 85, 102, 113, 19, 100, 83, -8, 43, -54, 121, -73, -20, -66, 92, 91, -44, 57, -102, 72, -92, -57, 98, 70, 126, -63, 7, -39, 113, 20, 9, -66, 42, -71, 72, 51, -50, 42, -97, -21, 24, -42, -95, 113, 83, -3, -122, 2, 34, 48, 108, -69, -121, -81, 27, -38, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedHistory msg;
    msg.setTimeStamp(0.361690016824);
    msg.setSource(44854U);
    msg.setSourceEntity(94U);
    msg.setDestination(12554U);
    msg.setDestinationEntity(19U);
    msg.base_lat = 0.533674731194;
    msg.base_lon = 0.180470840428;
    msg.base_time = 0.79512322845;
    const char tmp_msg_0[] = {-42, -90, -58, -106, 115, -123, 95, -69, -15, -97, -42, -28, -87, -124, 98, 74, 37, 103, -77, 14, 37, -105, -8, 102, -63, 39, -118, -115, 59, 9, -14, -41, 26, 67, 29};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedHistory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.401834873754);
    msg.setSource(59765U);
    msg.setSourceEntity(149U);
    msg.setDestination(16621U);
    msg.setDestinationEntity(162U);
    msg.sys_id = 1634U;
    msg.priority = -102;
    msg.x = 32593;
    msg.y = -31262;
    msg.z = -13794;
    msg.t = -30502;
    IMC::CustomManeuver tmp_msg_0;
    tmp_msg_0.timeout = 23338U;
    tmp_msg_0.name.assign("HROCQHCNPJYBMFEZKWDBMOUPUQZAZJIDEVMGQRQUWNMLPNWB");
    tmp_msg_0.custom.assign("QRCJXRRPFIKPFYDNKNEHBEJIFOBJWQJIGCVGTDLRVXUIVWXSVENKMGRZAZZHHVCNDRKFMBQZMOAAGZLBHDYNEIFW");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.840832925018);
    msg.setSource(63732U);
    msg.setSourceEntity(230U);
    msg.setDestination(33378U);
    msg.setDestinationEntity(50U);
    msg.sys_id = 41698U;
    msg.priority = -23;
    msg.x = -18683;
    msg.y = 30137;
    msg.z = -25898;
    msg.t = -19188;
    IMC::RemoteActions tmp_msg_0;
    tmp_msg_0.actions.assign("QMWYRQDARJVYUDOSJJRCFNBRGUOTBESHCTOFJZXEVGAAMMNDKZSGGFRXSQKQUHXKDOWXVPPVTTPHRRUKOFLAPSXMJNCYZTGIZGUOEJSCZKHIBWWFFYSHXNZQHLUJIIMBWQNNCEAWIFNNDIXUJOLMEIHTSITTKGCRHDZMXWAQQCSXVBNDBOATVB");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricSample msg;
    msg.setTimeStamp(0.708796875202);
    msg.setSource(14921U);
    msg.setSourceEntity(43U);
    msg.setDestination(26119U);
    msg.setDestinationEntity(11U);
    msg.sys_id = 31581U;
    msg.priority = -17;
    msg.x = 20446;
    msg.y = 15607;
    msg.z = -523;
    msg.t = 19411;
    IMC::Teleoperation tmp_msg_0;
    tmp_msg_0.custom.assign("MUPOQLKJPJVFNUCEZSUQMWINPJTZSPFCMQDAAVLQSCAMAEHNNFDKDZYRQAKCZBXWDLDNNPSBCUFMUFEVIVZGJBWXYGRIFCWJFKQRZVMCHDGRTLK");
    msg.sample.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricSample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.865064075394);
    msg.setSource(21935U);
    msg.setSourceEntity(225U);
    msg.setDestination(18867U);
    msg.setDestinationEntity(188U);
    msg.req_id = 1220U;
    msg.type = 150U;
    msg.max_size = 19997U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.949814609642;
    tmp_msg_0.base_lon = 0.836937042391;
    tmp_msg_0.base_time = 0.962707795429;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 5486U;
    tmp_tmp_msg_0_0.destination = 1898U;
    tmp_tmp_msg_0_0.timeout = 0.795242743332;
    IMC::EulerAngles tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.time = 0.433935110945;
    tmp_tmp_tmp_msg_0_0_0.phi = 0.11379927914;
    tmp_tmp_tmp_msg_0_0_0.theta = 0.618546640651;
    tmp_tmp_tmp_msg_0_0_0.psi = 0.430866613487;
    tmp_tmp_tmp_msg_0_0_0.psi_magnetic = 0.554439604016;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.556806036306);
    msg.setSource(16786U);
    msg.setSourceEntity(86U);
    msg.setDestination(43483U);
    msg.setDestinationEntity(157U);
    msg.req_id = 23767U;
    msg.type = 22U;
    msg.max_size = 7763U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.467421877032;
    tmp_msg_0.base_lon = 0.563368488578;
    tmp_msg_0.base_time = 0.513054014015;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 30800U;
    tmp_tmp_msg_0_0.destination = 49556U;
    tmp_tmp_msg_0_0.timeout = 0.143473352803;
    IMC::EntityInfo tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.id = 9U;
    tmp_tmp_tmp_msg_0_0_0.label.assign("ZEEMLTVOQUNDSESVFDMXBWNWZADJQYSIKDBJXDZPIGTJUWOTVEFISRQIIAMALWYSFZLAKMSGRNBPZBFHPWOJLMWVTBCTJURQEUVXKPTNLGBCUQGHFOMRULEYMGAIPGSPFUZEDQQAPBRNVGFCQCHJRRLLUKIYXVMPOWKYWOHQEGFWEFNTLPANZRRWHKSHCHNVBTHTIMJLHSOXMEYZDKIUDCQVXJVJTXCNOYOYDXCKAZJB");
    tmp_tmp_tmp_msg_0_0_0.component.assign("QYCEZTGMSPDJREOITZRHQFSJUVBDRREKNQJZFEAAQMXARIPPBFDZNHZAGFNFGMMBAVELQBRKGYYVKRBBGNFTVOLSWIHHGTMHKBMUDQVOJBSNJXQMJTOIVISZWLHILTFUFXLMZ");
    tmp_tmp_tmp_msg_0_0_0.act_time = 33674U;
    tmp_tmp_tmp_msg_0_0_0.deact_time = 59010U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HistoricDataQuery msg;
    msg.setTimeStamp(0.316096138979);
    msg.setSource(47450U);
    msg.setSourceEntity(135U);
    msg.setDestination(46924U);
    msg.setDestinationEntity(168U);
    msg.req_id = 57050U;
    msg.type = 201U;
    msg.max_size = 4124U;
    IMC::HistoricData tmp_msg_0;
    tmp_msg_0.base_lat = 0.934857761166;
    tmp_msg_0.base_lon = 0.0718856460444;
    tmp_msg_0.base_time = 0.357175216709;
    IMC::RemoteCommand tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.original_source = 62233U;
    tmp_tmp_msg_0_0.destination = 31011U;
    tmp_tmp_msg_0_0.timeout = 0.126562401649;
    IMC::RegisterManeuver tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.mid = 60885U;
    tmp_tmp_msg_0_0.cmd.set(tmp_tmp_tmp_msg_0_0_0);
    tmp_msg_0.data.push_back(tmp_tmp_msg_0_0);
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HistoricDataQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.297382208591);
    msg.setSource(50558U);
    msg.setSourceEntity(209U);
    msg.setDestination(34478U);
    msg.setDestinationEntity(113U);
    msg.original_source = 39209U;
    msg.destination = 38248U;
    msg.timeout = 0.610778199197;
    IMC::ButtonEvent tmp_msg_0;
    tmp_msg_0.button = 125U;
    tmp_msg_0.value = 199U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.811790822834);
    msg.setSource(38314U);
    msg.setSourceEntity(17U);
    msg.setDestination(37765U);
    msg.setDestinationEntity(208U);
    msg.original_source = 53389U;
    msg.destination = 53548U;
    msg.timeout = 0.396593655517;
    IMC::PlanDB tmp_msg_0;
    tmp_msg_0.type = 230U;
    tmp_msg_0.op = 10U;
    tmp_msg_0.request_id = 26158U;
    tmp_msg_0.plan_id.assign("EQGQRAVKVKOSRRTNHDCKLLMNIYBJCFUVPSPDQRPLWNCXMMUGJMWLTZXPUBNUAYMFYSQTIYEWITFJLFBJDBPWGH");
    IMC::Map tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.id.assign("QWBGAONMKXAGUKSLWEFRLYPFSRCXZXCIDXKMCGNJZEALHOCOFMPRBATHQDSGBUSFKNJHFZYHTYTVDMKNIAWUVCLSIHKATDSBGMOZBJYGLDCOSEWVZVUVXOCDXKIJUAHLKOJOKNEVUNVZBJGFRNJEIQRUOGUIUBQSPTPFCTRWEQAPMZPCFJHDRGQQVVMEAEFZTUDNRLLPIYQYSDLTTQYRJMFXNXWBXVPAHTMBI");
    tmp_msg_0.arg.set(tmp_tmp_msg_0_0);
    tmp_msg_0.info.assign("SYFOQVYOXIVLDMNBVBCJSIBXTDLUWPDSCOHILGJXUEKAVMXFPRLXVLBOUDKIQJCZPUNBGNPCHLMPEOHCNHIMQGQWA");
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteCommand msg;
    msg.setTimeStamp(0.46162375522);
    msg.setSource(51133U);
    msg.setSourceEntity(64U);
    msg.setDestination(49637U);
    msg.setDestinationEntity(68U);
    msg.original_source = 14632U;
    msg.destination = 33076U;
    msg.timeout = 0.152968876851;
    IMC::DesiredVelocity tmp_msg_0;
    tmp_msg_0.u = 0.547275941277;
    tmp_msg_0.v = 0.574494167087;
    tmp_msg_0.w = 0.338910358267;
    tmp_msg_0.p = 0.358582501771;
    tmp_msg_0.q = 0.680538647643;
    tmp_msg_0.r = 0.233734402709;
    tmp_msg_0.flags = 114U;
    msg.cmd.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.518772461865);
    msg.setSource(22221U);
    msg.setSourceEntity(53U);
    msg.setDestination(54656U);
    msg.setDestinationEntity(89U);
    msg.type = 105U;
    msg.comm_interface = 48622U;
    msg.model = 21769U;
    msg.list.assign("TJXUXRIOZRKLTEOUQSCLAWRCJMJABMARHQZZNXWNZXDNZUDWPILUBVQFTIIVOXQDJGKCQDUHHEOOFCJUHKIUUWZYFIMVWCBEERSQGXYEOLQTRJCUYLZBAPPGSDGLALMEAXPPOPCDGVYVQVPUKPGJNNCZMJHIKOBOFRSBZIBJKSNHJVHMFTSTXZXWMGDEYSGWTFRYLHNWELBLVYKAWSEGDNMGKPSYRHAMVFIKOQTWTVDFQBICAEFMKR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.42638968092);
    msg.setSource(29203U);
    msg.setSourceEntity(39U);
    msg.setDestination(59020U);
    msg.setDestinationEntity(161U);
    msg.type = 27U;
    msg.comm_interface = 56247U;
    msg.model = 48389U;
    msg.list.assign("KAPBSCGTYQGSYVTTJRIRHYHAIMCZVDUWNTKIFKVHAEEFXRBGFGHVQPCEZWHFBKXNZUCPOWCFOYDQDUSMODCQWQMYLDORRXICG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommSystemsQuery msg;
    msg.setTimeStamp(0.59063491164);
    msg.setSource(26368U);
    msg.setSourceEntity(43U);
    msg.setDestination(8150U);
    msg.setDestinationEntity(79U);
    msg.type = 70U;
    msg.comm_interface = 51184U;
    msg.model = 27916U;
    msg.list.assign("ODQUNSULPOYDJPFPNPWAJMHYECZREHZCZDMYORAWBBTDEZTLUXWVUJEKYHXRLTKQFXTLDFXIJHMQKNYAHOFJIUQKOMKHXWLINEZTTQAJPLEXBPGZRSACKFMHPVDRGIRSFWQURNICGSVKYVSWXRDAEQOBXJMZLFGCGDERWHNNMLVSFCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.451015267204);
    msg.setSource(40081U);
    msg.setSourceEntity(226U);
    msg.setDestination(59241U);
    msg.setDestinationEntity(193U);
    msg.type = 223U;
    msg.req_id = 3569178173U;
    msg.ttl = 55696U;
    msg.code = 213U;
    msg.destination.assign("NEBSJUSGDNXZFNCGRZTEEKTBCDACSHXAVYJVNTRNKVZRXCQHPMCYJVZOFTIIURRHOTIMRGBCGALXSDQITQQFBVWVMKXHDJMKGPQWROPIULYEZASONKAXLNJRZSAMIYBUVQ");
    msg.source.assign("YGLMUPWFOKGPYTPLLPEWDDTRUYJJRKMXQZAWTIXQRPGMPBMCIOMUQKCPBHUAJOCNVHWKLIGAXZSDFLAHEQTLADCGZNDNHOZYDKVDVRSMOPSIUBTWLANPOFQYHZSUVAYHLEHXUSKCIVUVVDCTQETDTBNEENUGCSWOHRRNIMCQJNGOKICYZTJJJKBWWGAZHYFJQSSTRBIVKXFEFRNGJQEMVBKBDUWAEFFJNZXRMROIYGQFI");
    msg.acknowledge = 215U;
    msg.status = 100U;
    const char tmp_msg_0[] = {-55, -57, 20, 119, 87, 14, 63, -10, -112, 25, -33, -79, -19, -61, 101, 44, -37, 69, 35, -15, 74, -76, 125, 5, -99, 40, 60, -91, 24, 80, 79, 10, 16, 68, -34, 57, 82, -37, -92, -45, -61, -18, -78, 78, 34, -116, -86, -116, 56, -69, -101, -13, -85, -78, -126, -15, 78, 45, 20, 116, -106, 126, 78, -7, 24, -85, 22, -15, -100, -4, -100, 83, 61, -53, -57, 20, 78, -113, 88, -125, -19, 101, -49, 40, 49, 102, 4, 105, 99, -35, -54, 114, 13, -39, -15, -126, 38, 104, -42, 16, 126, 108, 67, 102, 18, -26, -60, -21, -18, 98, 49, -67, -41, 35, -65, 1, 29, 14, -13, 125, -8, 12, 121, -24, -110, 41, 124, 80, -46, -55, 37, 15, 54, -69, -9, 42, -87, -62, -124, -32, 64, -82, 109, -109, -43, 112, 111, -66, 55, 106, 22, -121, -74, 14, -31, 54, -105, -30, 112, -26, -18, 74, 69, 100, 22, 40, -7, 88, 105, -20, -127, -61, 48, 69, -17, 15, -27, 78, -115, -11, -70, -26, 14, -123, 74, 6, -7, 33, 67, 110, 27, -42, 74, -21, 58, 38, 63, 67, 101, 30, 96, -7, -53, -78, 118, 85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.17783386888);
    msg.setSource(26068U);
    msg.setSourceEntity(86U);
    msg.setDestination(23754U);
    msg.setDestinationEntity(165U);
    msg.type = 14U;
    msg.req_id = 1391835990U;
    msg.ttl = 27509U;
    msg.code = 97U;
    msg.destination.assign("HWBBMMPEHULFXISNARJWQQLLAZUHQGMYEYRBTTZSZOIEFTGUARPCXNKPUKOXYVOPTMAXJORLXVPCQLNJBFOQIWYRVBJQAWNSHOBBXAGRRGEVNAPNDTTFEFVQZJLHPHPWFLTSWZFOUHKZQDSUBBHYKSXIISMHEDXMLZUWCQFKTMOX");
    msg.source.assign("BLFIZBNMUPCALEGVRGTDQIRYVEVUDMYVPZQQNMHYUDPHCKLSDCTGKXWGEUPPDPVYRKWDVG");
    msg.acknowledge = 160U;
    msg.status = 227U;
    const char tmp_msg_0[] = {-47, -70, -18, 87, 59, 2, 32, -88, -97, 13, -42, 21, 62, 49, -126, 39, 71, -50, -35, -119, 9, -45, 7, -88, 86, 39, -119, -53, 36, -91, -94, -97, 52, 11, 46, -16, 115, 89, 4, -82, 5, 89, -29, -28, -43, -40, -80, 62, -58, 36, 77, 75, 124, 79, -22, 74, 3, -76, -45, -37, -124, -110, 15, -24, 81, -39, 92, 23, -96, -65, 125, -39, -40, -124, 104, 2, 103, 111, -47, -111, 79, -102, -107, 36, -67, -55, -102, -18, -27, -75, 124, -30, 77, 35, -113, 52, 121, -93, 1};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TelemetryMsg msg;
    msg.setTimeStamp(0.259438121329);
    msg.setSource(16103U);
    msg.setSourceEntity(77U);
    msg.setDestination(60665U);
    msg.setDestinationEntity(26U);
    msg.type = 83U;
    msg.req_id = 814746635U;
    msg.ttl = 22728U;
    msg.code = 45U;
    msg.destination.assign("UVYTQZOIRGEIAD");
    msg.source.assign("SAFONACKNWXEKIFATBHDQEZMPHMIBVRMAXSUJKEMSHMHZXQGLSKWFCUIWLJOZEOMGWEQRVTCUGSQQTLYOMQAVOJFOZVRYCVDKHQWYLGJECKITVLSIOEYNHECBEORSNQTYIUGATWPIGUYNXDGLORKDBXPEFBXUIPANDUAYUFIUXVGVFXVJJRSZMXHQZKKFJNJC");
    msg.acknowledge = 220U;
    msg.status = 239U;
    const char tmp_msg_0[] = {-123, -3, -117, -36, -69, 20, -9, 3, 109, 118, 103, 16, 111};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TelemetryMsg #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.204800893082);
    msg.setSource(39553U);
    msg.setSourceEntity(69U);
    msg.setDestination(21465U);
    msg.setDestinationEntity(132U);
    msg.id = 139U;
    msg.range = 0.276627242936;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.118766969378);
    msg.setSource(63092U);
    msg.setSourceEntity(67U);
    msg.setDestination(59686U);
    msg.setDestinationEntity(182U);
    msg.id = 16U;
    msg.range = 0.988420049666;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRange msg;
    msg.setTimeStamp(0.841691362114);
    msg.setSource(26166U);
    msg.setSourceEntity(249U);
    msg.setDestination(53449U);
    msg.setDestinationEntity(159U);
    msg.id = 249U;
    msg.range = 0.926669362772;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.838238839296);
    msg.setSource(10737U);
    msg.setSourceEntity(142U);
    msg.setDestination(22004U);
    msg.setDestinationEntity(117U);
    msg.beacon.assign("XHZEBISVDFNEBWGLPCNBRDINURLKKYJIEOIMMFYCXQWBGMFXCJCDZKXAMDCCPVJGCIRTDUZBZGJUSTQNHGWUXAJZFJJYQXQGJHKHMKQLZHNMLLSUPHTPPWTJETKLRRPXRIYCTTZNAFJAWOZVIOIASAFAMSWYURHQPKVHFSSFOWIXVGSKVVGPRAWQHNUMORWQVRWTOUBBKDDLUEFBOPODGCEDYANSYQPBXLBTEVYMMCNTZFEZLHKOELYNUGESX");
    msg.lat = 0.419983633139;
    msg.lon = 0.668783727196;
    msg.depth = 0.790056988773;
    msg.query_channel = 132U;
    msg.reply_channel = 12U;
    msg.transponder_delay = 4U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.855093189964);
    msg.setSource(57689U);
    msg.setSourceEntity(243U);
    msg.setDestination(47806U);
    msg.setDestinationEntity(79U);
    msg.beacon.assign("TKOEZXTCDOMVKZMGECEKMTBPZKGRBUTFUCDLSTJYNXYWFSIWXLPRNJTOIZGSFJXXDVLYMYBGVWBXHYXOXNFDQTQPBWUQYLADQFMSTUSNYZGPSIVKPOQYOPNWFXGZBOHKGCNEULGJXHIJKNULKRHUOJAMMZILHRFRZOUJAEGSQQMRDGENAOHSHNKPPH");
    msg.lat = 0.880859631739;
    msg.lon = 0.366819608401;
    msg.depth = 0.0815596421454;
    msg.query_channel = 4U;
    msg.reply_channel = 212U;
    msg.transponder_delay = 25U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblBeacon msg;
    msg.setTimeStamp(0.257705524916);
    msg.setSource(9681U);
    msg.setSourceEntity(40U);
    msg.setDestination(45362U);
    msg.setDestinationEntity(100U);
    msg.beacon.assign("BORTRMHYZMNHWBGKILKVKWOYRVDLRWMARZAMMTXVNYKVCWMZAPKDNBHYPAQV");
    msg.lat = 0.374803714834;
    msg.lon = 0.278322076518;
    msg.depth = 0.92272002476;
    msg.query_channel = 170U;
    msg.reply_channel = 168U;
    msg.transponder_delay = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblBeacon #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.987569795703);
    msg.setSource(4757U);
    msg.setSourceEntity(120U);
    msg.setDestination(46434U);
    msg.setDestinationEntity(57U);
    msg.op = 197U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.687397000289);
    msg.setSource(4057U);
    msg.setSourceEntity(250U);
    msg.setDestination(37939U);
    msg.setDestinationEntity(177U);
    msg.op = 226U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblConfig msg;
    msg.setTimeStamp(0.512410073411);
    msg.setSource(5901U);
    msg.setSourceEntity(170U);
    msg.setDestination(26841U);
    msg.setDestinationEntity(20U);
    msg.op = 224U;
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QCBICBGSRPHGYDPQPAOPKZSEEVEDBZUDCARVQNBQDAICYESKROTTXTWAADKKKVRQ");
    tmp_msg_0.lat = 0.69314183062;
    tmp_msg_0.lon = 0.810531810771;
    tmp_msg_0.depth = 0.470444311338;
    tmp_msg_0.query_channel = 160U;
    tmp_msg_0.reply_channel = 226U;
    tmp_msg_0.transponder_delay = 104U;
    msg.beacons.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0590927422615);
    msg.setSource(1698U);
    msg.setSourceEntity(113U);
    msg.setDestination(41752U);
    msg.setDestinationEntity(88U);
    IMC::StorageUsage tmp_msg_0;
    tmp_msg_0.available = 1177498560U;
    tmp_msg_0.value = 168U;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.0862729857985);
    msg.setSource(33375U);
    msg.setSourceEntity(220U);
    msg.setDestination(62280U);
    msg.setDestinationEntity(28U);
    IMC::CoverArea tmp_msg_0;
    tmp_msg_0.lat = 0.00477315882821;
    tmp_msg_0.lon = 0.67998439883;
    tmp_msg_0.z = 0.909503714105;
    tmp_msg_0.z_units = 102U;
    tmp_msg_0.speed = 0.663489153845;
    tmp_msg_0.speed_units = 67U;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.914048886249;
    tmp_tmp_msg_0_0.lon = 0.272186905035;
    tmp_msg_0.polygon.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.custom.assign("BDOGSBBKTAXMRPQDXDXQEJETWMLWXNOGWPWSHMEPRJLIZUBMUUZYAXWZGKXJZRCNENGRVRGFIEAOOHZDCBFRYROKEAYVTNOQUENTTUYSIFPCILDPXIOQVIYGQYMA");
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticMessage msg;
    msg.setTimeStamp(0.22623355171);
    msg.setSource(10772U);
    msg.setSourceEntity(127U);
    msg.setDestination(26034U);
    msg.setDestinationEntity(235U);
    IMC::GetOperationalLimits tmp_msg_0;
    msg.message.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticMessage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.834667312836);
    msg.setSource(9905U);
    msg.setSourceEntity(96U);
    msg.setDestination(19861U);
    msg.setDestinationEntity(84U);
    msg.op = 77U;
    msg.system.assign("ABDIUFVLQWJBQEGMCVDEWPMPBFDYWUBFRDYQNUNGQYACSWHIDKOPHJXPWASLKAYEPLYWHKIJXYCRUQJWSKZRICQUPKXATHPRTFFHCVIZNGMFJQUZJLKYSMATEOROILVSBSSIFKRCGYTBHZZKTINXJMDZDABBGOWQMSXIPTD");
    msg.range = 0.852003372199;
    IMC::VSWR tmp_msg_0;
    tmp_msg_0.value = 0.272910107903;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.665185539861);
    msg.setSource(20002U);
    msg.setSourceEntity(158U);
    msg.setDestination(29559U);
    msg.setDestinationEntity(67U);
    msg.op = 84U;
    msg.system.assign("EUJGVDXLMOOCQGNQBLYDNVEYPJOLDPDTHPGKJNQEUQGCWJRURAIWBMWXHFMBXJPZVREMKLNJUJZEVONTACNOIQGTDCJSRKZAGCNTXYRFQEREUFABBAAKMHDUPGIX");
    msg.range = 0.818394174829;
    IMC::VehicleState tmp_msg_0;
    tmp_msg_0.op_mode = 46U;
    tmp_msg_0.error_count = 22U;
    tmp_msg_0.error_ents.assign("LLWIRGUQTHZAYSACZIZOEWMSCTAIXAYMNPHKPCDTKPVLGZPWYRFRHFCQBUPANLUJUKUXMCYOXZIDRXMUMPH");
    tmp_msg_0.maneuver_type = 38531U;
    tmp_msg_0.maneuver_stime = 0.0892127200353;
    tmp_msg_0.maneuver_eta = 47224U;
    tmp_msg_0.control_loops = 3236771494U;
    tmp_msg_0.flags = 114U;
    tmp_msg_0.last_error.assign("PWLCUSAOTEPYQQFWRHCGGTEVVYKKDVXIHVCXHOZOPGELVCABQEUJKQMODUBDJNUBHGEFYFCJTRRGAJIKW");
    tmp_msg_0.last_error_time = 0.00955370291861;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticOperation msg;
    msg.setTimeStamp(0.478980262917);
    msg.setSource(9274U);
    msg.setSourceEntity(114U);
    msg.setDestination(63966U);
    msg.setDestinationEntity(45U);
    msg.op = 48U;
    msg.system.assign("UNCUOPPYDYLBBQRZJZASOLYHBSQVCBSKPEHHXJTGKTYZQUUTODGCXUDFYAMVTVOLDAPFMSQCSKSOAANXZMCJNKINVEJDDKPMCBHWWPTQEFQUKJRFODOZHRKAXIWMJSGXVUDICWIGUBLBVEQNNGJGUPZRIBPNMSWZXWQLAB");
    msg.range = 0.31117892081;
    IMC::AcousticOperation tmp_msg_0;
    tmp_msg_0.op = 133U;
    tmp_msg_0.system.assign("DKEFITFLUIVHMJORDYRUGLYSQIOOIRTXIANEDKBFDJREIQLNNDFIYANWOJEPERVTOMRSFZWLW");
    tmp_msg_0.range = 0.64751433737;
    IMC::PopEntityParameters tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("SXDNYBDHVWYHZOIMVWHOCWGFLOEWCJQYFHUOFUFSBYPQZSDLLPZKYXXIWTKMABINSCULGHPJWLSMBHSUVQOSAVZTNIUNZGUDTUJMTPKPVRXLZNQPWJFPRQSYAKPCLYKUCMJRQVOCYXOVRVTEDBZEXXTDRMDVWAPRKUH");
    tmp_msg_0.msg.set(tmp_tmp_msg_0_0);
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.00990780117197);
    msg.setSource(23223U);
    msg.setSourceEntity(197U);
    msg.setDestination(43953U);
    msg.setDestinationEntity(198U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.740211748644);
    msg.setSource(6419U);
    msg.setSourceEntity(211U);
    msg.setDestination(36679U);
    msg.setDestinationEntity(146U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystemsQuery msg;
    msg.setTimeStamp(0.139025643805);
    msg.setSource(49957U);
    msg.setSourceEntity(12U);
    msg.setDestination(10599U);
    msg.setDestinationEntity(143U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystemsQuery #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.946472206447);
    msg.setSource(45007U);
    msg.setSourceEntity(124U);
    msg.setDestination(54420U);
    msg.setDestinationEntity(184U);
    msg.list.assign("KGNPUTOFZXURSERFCZLMUBZOFHIYYLZYWFVMONPYEGMWXWEIQZJYGXOYQFAVXMPYTHSOCNPRBOJOPHANCVXTVBESWLDHSASCYAWELMBKQRHDLQPWVDNHTZMARQUJKCSPWYRRIAFXVBCKJGSZSEUKCIKVDGLBBJJVQYDRCBTOFJUHLTMEWFFMGZNLOAMPUXTNQPNQSUGGIADL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.824902544399);
    msg.setSource(53554U);
    msg.setSourceEntity(156U);
    msg.setDestination(15843U);
    msg.setDestinationEntity(104U);
    msg.list.assign("OYKCJXDVQIYKAVOGALMLRGMJLTJVUNVPHXWSDZJVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticSystems msg;
    msg.setTimeStamp(0.480847439525);
    msg.setSource(33533U);
    msg.setSourceEntity(166U);
    msg.setDestination(55973U);
    msg.setDestinationEntity(107U);
    msg.list.assign("WKMDVQMFAVQGHDCVISYVHMUTWCHIBCTNTMKOSILRQEAPFBYOBUOEAHGZCDEXWGPZMXSELRGZZBHUEVLGMIDBDKAQGFINAFNHLKJGFNKPJBEOINXYZPYRXSWDPLGJPKHKPOTCYJLSITXAUCBQVJAVWCBNFTVZARPWPXGBNJLQYTHSDUWEIXRLPDXDZQCURNQOYRVNDVFLJMXRUYTYUFYUMKSIOJFJQEB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticSystems #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.889426114775);
    msg.setSource(39855U);
    msg.setSourceEntity(80U);
    msg.setDestination(26358U);
    msg.setDestinationEntity(27U);
    msg.peer.assign("ASPRHANWHQTLVOGKHBFLYMJMBYYRSZ");
    msg.rssi = 0.729544586388;
    msg.integrity = 42979U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.200793332455);
    msg.setSource(8821U);
    msg.setSourceEntity(216U);
    msg.setDestination(37343U);
    msg.setDestinationEntity(211U);
    msg.peer.assign("LUVKQVPOVEPLIEYYCKOMEEYRCAJDZHCYALTLADHXRIVPDBIVKNFOJOECIOQUNFJNTMOPMGNUNMWQQMWIWRJLDXRBQTNZVWFC");
    msg.rssi = 0.906414660903;
    msg.integrity = 18171U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticLink msg;
    msg.setTimeStamp(0.971063759753);
    msg.setSource(26031U);
    msg.setSourceEntity(63U);
    msg.setDestination(43598U);
    msg.setDestinationEntity(57U);
    msg.peer.assign("MUKHZZESNBJNMSJFJFTDLCJQUAOQTEKRXWVECXBZKCBIAYHLAZQPUJOBAYGYGTBUKQACCEDWVWGIBTCUZAOZNLMPRPNRKQNRAOWLOOAZWHJYRTVYBSIIFNGFLMIDMDVYJALGHFTDITXHKEENHRYPEOUFYWLVXYSWCFDFHIFLTNUIHRXMDQKRXPHGWPCGOPOVZRXDODSXSQFJLVUQIEEKAM");
    msg.rssi = 0.832166187506;
    msg.integrity = 5052U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticLink #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.848345542931);
    msg.setSource(56444U);
    msg.setSourceEntity(120U);
    msg.setDestination(38944U);
    msg.setDestinationEntity(65U);
    msg.req_id = 57251U;
    msg.destination.assign("MHTRTPOIDAGPWBOOLYVJMLHWNHLMIMSAQNIRFHBXBSWYAECTJNCTESTTXQKNSZOSCMUELRHFYKFNVBWNRRGQOBFTAGTJGVPWDHXIKUXLHSSDEQBUFZUFQZRIQPDXPJCQWBZPKYHJMZKNKWASAQJOBFEGLXPPMDZRNIGSIXYMHQVAYJGMLXKPIAYOWRFXLOBUGO");
    msg.timeout = 0.591108854523;
    msg.range = 0.0485860323979;
    msg.type = 53U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredRoll tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.923816757193;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 26683U;
    tmp_msg_0.custom.assign("SKONGCVXPVBXEQEKAVYJUSOPMLODCMTQZRYLLCFPNEIFRWDIWDDYNJYBMOPHOGTJZPFJAVSKJXZYUJQGABLTTXTWLNIIDVHAKOMLBYCHMEJMWXSUVFVHTRXGMMAUAFJFCFGSUHXGRPQZQZQTTKDWBKWATRUFUOBUYRUZNODACOMEHXMSRDIKKNSARCXDFAIHNBSESBNQBPOIIFNEGSXEEQ");
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.215612862654);
    msg.setSource(22059U);
    msg.setSourceEntity(60U);
    msg.setDestination(1232U);
    msg.setDestinationEntity(7U);
    msg.req_id = 58589U;
    msg.destination.assign("RSONJFKRFMHHXUBKKQIITGCARYNCTYKANQXNPGJHFQMJEHHBTMHYSLWCROEDOVIUABZGPKXXRGJKVZMHHNAIHYXFPDTAWOEZTRWGEVJQOYIBZXVPDWQEGTRWLXPLECVPFIPKVJYUNLZCGZSMDNDEZCCYMXOBLEDCFNVOOPLQZGNTJMSYMWOZGKCPWUMFMTSGLXXYUJUKAQQJBZQFEUSLCWB");
    msg.timeout = 0.766249296142;
    msg.range = 0.537093421152;
    msg.type = 249U;
    IMC::ControlLoops tmp_msg_0;
    tmp_msg_0.enable = 228U;
    tmp_msg_0.mask = 3630614106U;
    tmp_msg_0.scope_ref = 1204317365U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticRequest msg;
    msg.setTimeStamp(0.597574060109);
    msg.setSource(11038U);
    msg.setSourceEntity(209U);
    msg.setDestination(33708U);
    msg.setDestinationEntity(2U);
    msg.req_id = 6515U;
    msg.destination.assign("USKRUZIVOTWSSHGGXFFPLYIMDHAEQDTXAIRAPUMPCHLTICXCHDCWRNZUCEWXPXJNWJOVXWPAKHPWMSZVBMXCFFNLTKRQMJQWNQUWSEUOISGBHKLSFLKMZZJJKBRDZOLQHADAZYVQIXBEQCQJHRFBSSPCPCNOVQELPXOABRG");
    msg.timeout = 0.20895396903;
    msg.range = 0.0873990265751;
    msg.type = 169U;
    IMC::StateReport tmp_msg_0;
    tmp_msg_0.stime = 1815575125U;
    tmp_msg_0.latitude = 0.23963271715;
    tmp_msg_0.longitude = 0.948974647555;
    tmp_msg_0.altitude = 46928U;
    tmp_msg_0.depth = 59635U;
    tmp_msg_0.heading = 52855U;
    tmp_msg_0.speed = -30626;
    tmp_msg_0.fuel = -71;
    tmp_msg_0.exec_state = -75;
    tmp_msg_0.plan_checksum = 24187U;
    msg.msg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.884759212474);
    msg.setSource(2032U);
    msg.setSourceEntity(60U);
    msg.setDestination(34309U);
    msg.setDestinationEntity(176U);
    msg.req_id = 51854U;
    msg.type = 201U;
    msg.status = 231U;
    msg.info.assign("IZWSVNOLDHTWFHORQSXPYQPNTYIFRMMBSJXXNFUQVMNYDEUBVUFOYOEEYUOVACGBRQBCJKDSMADHHYTCKSVBDGLLKSJOZDZNZXBXGNXLCZXPFSKYVRCLBUDJFGJFIKODGWUUJAHYWKCEAC");
    msg.range = 0.456476539257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.632953123053);
    msg.setSource(943U);
    msg.setSourceEntity(174U);
    msg.setDestination(56857U);
    msg.setDestinationEntity(23U);
    msg.req_id = 28678U;
    msg.type = 159U;
    msg.status = 235U;
    msg.info.assign("KBAJKVBQCCXVOGMEYHKWBBCZIWDDQMZHKSYPTGQMFKTLAMWRBJITTCPETGEGIYDGPUCDXUJESEMKIOIIZUXUJESAUSLPYIHWGRAOOQSQELBQIHKOIA");
    msg.range = 0.0161023261622;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AcousticStatus msg;
    msg.setTimeStamp(0.546535903283);
    msg.setSource(4226U);
    msg.setSourceEntity(94U);
    msg.setDestination(37462U);
    msg.setDestinationEntity(129U);
    msg.req_id = 29720U;
    msg.type = 243U;
    msg.status = 167U;
    msg.info.assign("GRQULSVAVMSTATYCJNUXDXACLLVOZEUKMALHXGENPZSKRIWJSDMMOKFFVPSNLYSRLPGQHRNVKFPYDXSYNHZNLVONZBYWUEHVIMHTHZYZETKINPJQGQIFUDJGDRSDMSOCPFWXQBVQFCPZWCOKXXHTMJBHEBWOEBKTHTPBURFDBGJWUEKGNLZFYUKCPZKUBCNUEDXPRWAIOYACCAQSFXT");
    msg.range = 0.393212912434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AcousticStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.120267947906);
    msg.setSource(6811U);
    msg.setSourceEntity(247U);
    msg.setDestination(62799U);
    msg.setDestinationEntity(118U);
    msg.value = -15939;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.70740647996);
    msg.setSource(38901U);
    msg.setSourceEntity(116U);
    msg.setDestination(1000U);
    msg.setDestinationEntity(79U);
    msg.value = -21313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rpm msg;
    msg.setTimeStamp(0.462560352103);
    msg.setSource(11437U);
    msg.setSourceEntity(154U);
    msg.setDestination(19621U);
    msg.setDestinationEntity(134U);
    msg.value = -27576;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rpm #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.905981230976);
    msg.setSource(550U);
    msg.setSourceEntity(117U);
    msg.setDestination(26467U);
    msg.setDestinationEntity(89U);
    msg.value = 0.60092842582;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.551372738551);
    msg.setSource(54967U);
    msg.setSourceEntity(30U);
    msg.setDestination(39134U);
    msg.setDestinationEntity(24U);
    msg.value = 0.44338821655;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Voltage msg;
    msg.setTimeStamp(0.661127500713);
    msg.setSource(13298U);
    msg.setSourceEntity(24U);
    msg.setDestination(30275U);
    msg.setDestinationEntity(172U);
    msg.value = 0.107271769304;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Voltage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.415173290161);
    msg.setSource(59289U);
    msg.setSourceEntity(162U);
    msg.setDestination(322U);
    msg.setDestinationEntity(108U);
    msg.value = 0.261862776183;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.896934612495);
    msg.setSource(8193U);
    msg.setSourceEntity(82U);
    msg.setDestination(29410U);
    msg.setDestinationEntity(232U);
    msg.value = 0.0657228387123;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Current msg;
    msg.setTimeStamp(0.908317816043);
    msg.setSource(25400U);
    msg.setSourceEntity(177U);
    msg.setDestination(25387U);
    msg.setDestinationEntity(57U);
    msg.value = 0.70789724038;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Current #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.406444571268);
    msg.setSource(18637U);
    msg.setSourceEntity(194U);
    msg.setDestination(24744U);
    msg.setDestinationEntity(21U);
    msg.validity = 42336U;
    msg.type = 24U;
    msg.utc_year = 9687U;
    msg.utc_month = 148U;
    msg.utc_day = 211U;
    msg.utc_time = 0.644625371441;
    msg.lat = 0.97250906691;
    msg.lon = 0.0701506172423;
    msg.height = 0.8608001336;
    msg.satellites = 124U;
    msg.cog = 0.0396286157796;
    msg.sog = 0.000266816913379;
    msg.hdop = 0.737805900718;
    msg.vdop = 0.979993115843;
    msg.hacc = 0.794760441381;
    msg.vacc = 0.84693969259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.599616246318);
    msg.setSource(46378U);
    msg.setSourceEntity(128U);
    msg.setDestination(62844U);
    msg.setDestinationEntity(79U);
    msg.validity = 39779U;
    msg.type = 209U;
    msg.utc_year = 56580U;
    msg.utc_month = 53U;
    msg.utc_day = 19U;
    msg.utc_time = 0.840088953818;
    msg.lat = 0.70068148338;
    msg.lon = 0.366867648651;
    msg.height = 0.532640402029;
    msg.satellites = 1U;
    msg.cog = 0.798780701206;
    msg.sog = 0.923862309556;
    msg.hdop = 0.999432123753;
    msg.vdop = 0.828254107101;
    msg.hacc = 0.449496408505;
    msg.vacc = 0.138536024764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFix msg;
    msg.setTimeStamp(0.79364858652);
    msg.setSource(56497U);
    msg.setSourceEntity(166U);
    msg.setDestination(7059U);
    msg.setDestinationEntity(252U);
    msg.validity = 24563U;
    msg.type = 170U;
    msg.utc_year = 34951U;
    msg.utc_month = 30U;
    msg.utc_day = 147U;
    msg.utc_time = 0.454541710249;
    msg.lat = 0.631915620848;
    msg.lon = 0.405412656254;
    msg.height = 0.199729298846;
    msg.satellites = 128U;
    msg.cog = 0.211530440217;
    msg.sog = 0.184824782456;
    msg.hdop = 0.663366579434;
    msg.vdop = 0.755397191373;
    msg.hacc = 0.3135745311;
    msg.vacc = 0.888572104335;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.341820262896);
    msg.setSource(11506U);
    msg.setSourceEntity(169U);
    msg.setDestination(5209U);
    msg.setDestinationEntity(248U);
    msg.time = 0.547359111193;
    msg.phi = 0.828055843769;
    msg.theta = 0.848342265568;
    msg.psi = 0.0672845523475;
    msg.psi_magnetic = 0.0137082017864;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.35414032081);
    msg.setSource(45814U);
    msg.setSourceEntity(244U);
    msg.setDestination(54027U);
    msg.setDestinationEntity(81U);
    msg.time = 0.0198507036789;
    msg.phi = 0.897261178692;
    msg.theta = 0.530639347648;
    msg.psi = 0.0298013756394;
    msg.psi_magnetic = 0.4959009181;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAngles msg;
    msg.setTimeStamp(0.270244874516);
    msg.setSource(61804U);
    msg.setSourceEntity(52U);
    msg.setDestination(50716U);
    msg.setDestinationEntity(50U);
    msg.time = 0.137836002473;
    msg.phi = 0.243626334826;
    msg.theta = 0.0715257989186;
    msg.psi = 0.938245832176;
    msg.psi_magnetic = 0.562164944171;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.493777165109);
    msg.setSource(46552U);
    msg.setSourceEntity(229U);
    msg.setDestination(31252U);
    msg.setDestinationEntity(127U);
    msg.time = 0.614841450124;
    msg.x = 0.123375319708;
    msg.y = 0.682255585281;
    msg.z = 0.623725041007;
    msg.timestep = 0.0397734994737;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.995033576231);
    msg.setSource(28903U);
    msg.setSourceEntity(19U);
    msg.setDestination(2835U);
    msg.setDestinationEntity(119U);
    msg.time = 0.680581430102;
    msg.x = 0.0527116943669;
    msg.y = 0.686394853608;
    msg.z = 0.496798112895;
    msg.timestep = 0.798863368193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EulerAnglesDelta msg;
    msg.setTimeStamp(0.101800393095);
    msg.setSource(28067U);
    msg.setSourceEntity(217U);
    msg.setDestination(46929U);
    msg.setDestinationEntity(208U);
    msg.time = 0.050227179416;
    msg.x = 0.104881570175;
    msg.y = 0.768001368146;
    msg.z = 0.441853975866;
    msg.timestep = 0.205827284644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EulerAnglesDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.089075565013);
    msg.setSource(12660U);
    msg.setSourceEntity(235U);
    msg.setDestination(1363U);
    msg.setDestinationEntity(163U);
    msg.time = 0.704647903999;
    msg.x = 0.671963915383;
    msg.y = 0.676652166583;
    msg.z = 0.324045557313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.677975148486);
    msg.setSource(30154U);
    msg.setSourceEntity(37U);
    msg.setDestination(42825U);
    msg.setDestinationEntity(237U);
    msg.time = 0.33928209235;
    msg.x = 0.641152057087;
    msg.y = 0.793544819735;
    msg.z = 0.616099514172;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AngularVelocity msg;
    msg.setTimeStamp(0.545973725345);
    msg.setSource(16509U);
    msg.setSourceEntity(216U);
    msg.setDestination(58934U);
    msg.setDestinationEntity(96U);
    msg.time = 0.345718647695;
    msg.x = 0.945515955363;
    msg.y = 0.421749401898;
    msg.z = 0.408000151185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AngularVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.0280297044913);
    msg.setSource(51939U);
    msg.setSourceEntity(23U);
    msg.setDestination(10825U);
    msg.setDestinationEntity(149U);
    msg.time = 0.440139593921;
    msg.x = 0.915956583806;
    msg.y = 0.925658911844;
    msg.z = 0.0614934626926;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.145565098747);
    msg.setSource(26348U);
    msg.setSourceEntity(172U);
    msg.setDestination(25160U);
    msg.setDestinationEntity(202U);
    msg.time = 0.316770314974;
    msg.x = 0.252077271424;
    msg.y = 0.775360896847;
    msg.z = 0.267937082833;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Acceleration msg;
    msg.setTimeStamp(0.202914604203);
    msg.setSource(48096U);
    msg.setSourceEntity(76U);
    msg.setDestination(15248U);
    msg.setDestinationEntity(216U);
    msg.time = 0.392191005082;
    msg.x = 0.539665557707;
    msg.y = 0.926878254743;
    msg.z = 0.311327701001;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Acceleration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.664049552507);
    msg.setSource(5494U);
    msg.setSourceEntity(99U);
    msg.setDestination(27650U);
    msg.setDestinationEntity(253U);
    msg.time = 0.560426197724;
    msg.x = 0.972068482537;
    msg.y = 0.488434435741;
    msg.z = 0.1801908887;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.19959323496);
    msg.setSource(59336U);
    msg.setSourceEntity(246U);
    msg.setDestination(32098U);
    msg.setDestinationEntity(150U);
    msg.time = 0.833729188258;
    msg.x = 0.016844966967;
    msg.y = 0.50099961689;
    msg.z = 0.377823258702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MagneticField msg;
    msg.setTimeStamp(0.826391772769);
    msg.setSource(40169U);
    msg.setSourceEntity(28U);
    msg.setDestination(33081U);
    msg.setDestinationEntity(141U);
    msg.time = 0.319575908033;
    msg.x = 0.301124355686;
    msg.y = 0.0705794181923;
    msg.z = 0.0255831528369;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MagneticField #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.515939129663);
    msg.setSource(39280U);
    msg.setSourceEntity(61U);
    msg.setDestination(19731U);
    msg.setDestinationEntity(107U);
    msg.validity = 234U;
    msg.x = 0.881161521958;
    msg.y = 0.34613244674;
    msg.z = 0.554695273018;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.491275346683);
    msg.setSource(13514U);
    msg.setSourceEntity(190U);
    msg.setDestination(13546U);
    msg.setDestinationEntity(7U);
    msg.validity = 143U;
    msg.x = 0.0912040725792;
    msg.y = 0.999827050414;
    msg.z = 0.834081840871;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroundVelocity msg;
    msg.setTimeStamp(0.0500285881827);
    msg.setSource(49712U);
    msg.setSourceEntity(209U);
    msg.setDestination(41464U);
    msg.setDestinationEntity(153U);
    msg.validity = 153U;
    msg.x = 0.692273487465;
    msg.y = 0.0672339066182;
    msg.z = 0.368421962003;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroundVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.102560951109);
    msg.setSource(22853U);
    msg.setSourceEntity(5U);
    msg.setDestination(2804U);
    msg.setDestinationEntity(152U);
    msg.validity = 205U;
    msg.x = 0.079507987461;
    msg.y = 0.262492410783;
    msg.z = 0.4240686186;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.063154505438);
    msg.setSource(50195U);
    msg.setSourceEntity(24U);
    msg.setDestination(19861U);
    msg.setDestinationEntity(20U);
    msg.validity = 231U;
    msg.x = 0.643421868728;
    msg.y = 0.352686340347;
    msg.z = 0.536807847387;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterVelocity msg;
    msg.setTimeStamp(0.455370210521);
    msg.setSource(53647U);
    msg.setSourceEntity(175U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(60U);
    msg.validity = 226U;
    msg.x = 0.350059844289;
    msg.y = 0.709696314846;
    msg.z = 0.964893670806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.224030029663);
    msg.setSource(16210U);
    msg.setSourceEntity(231U);
    msg.setDestination(12561U);
    msg.setDestinationEntity(101U);
    msg.time = 0.263615298379;
    msg.x = 0.218149086911;
    msg.y = 0.263320983702;
    msg.z = 0.00825764694218;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.443894801358);
    msg.setSource(49501U);
    msg.setSourceEntity(149U);
    msg.setDestination(44542U);
    msg.setDestinationEntity(36U);
    msg.time = 0.740086761498;
    msg.x = 0.610308900914;
    msg.y = 0.263581037936;
    msg.z = 0.259597318507;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VelocityDelta msg;
    msg.setTimeStamp(0.792398311735);
    msg.setSource(50323U);
    msg.setSourceEntity(102U);
    msg.setDestination(48762U);
    msg.setDestinationEntity(239U);
    msg.time = 0.145675897838;
    msg.x = 0.836222284715;
    msg.y = 0.0744986996639;
    msg.z = 0.508571151287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VelocityDelta #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.989769789881);
    msg.setSource(65410U);
    msg.setSourceEntity(96U);
    msg.setDestination(31637U);
    msg.setDestinationEntity(171U);
    msg.validity = 156U;
    msg.value = 0.265996234856;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.986890795714);
    msg.setSource(18154U);
    msg.setSourceEntity(174U);
    msg.setDestination(23732U);
    msg.setDestinationEntity(107U);
    msg.validity = 251U;
    IMC::DeviceState tmp_msg_0;
    tmp_msg_0.x = 0.925416551556;
    tmp_msg_0.y = 0.627789601369;
    tmp_msg_0.z = 0.362414457357;
    tmp_msg_0.phi = 0.568128334546;
    tmp_msg_0.theta = 0.662982228792;
    tmp_msg_0.psi = 0.229791239474;
    msg.location.push_back(tmp_msg_0);
    IMC::BeamConfig tmp_msg_1;
    tmp_msg_1.beam_width = 0.739351468767;
    tmp_msg_1.beam_height = 0.748575848763;
    msg.beam_config.push_back(tmp_msg_1);
    msg.value = 0.874311992334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Distance msg;
    msg.setTimeStamp(0.290207119648);
    msg.setSource(23131U);
    msg.setSourceEntity(249U);
    msg.setDestination(6555U);
    msg.setDestinationEntity(106U);
    msg.validity = 236U;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.137838754552;
    tmp_msg_0.beam_height = 0.603921124025;
    msg.beam_config.push_back(tmp_msg_0);
    msg.value = 0.627157162397;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Distance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.935309050512);
    msg.setSource(15913U);
    msg.setSourceEntity(76U);
    msg.setDestination(15237U);
    msg.setDestinationEntity(247U);
    msg.value = 0.127341415996;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.151541389625);
    msg.setSource(20838U);
    msg.setSourceEntity(130U);
    msg.setDestination(39649U);
    msg.setDestinationEntity(200U);
    msg.value = 0.451942236093;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Temperature msg;
    msg.setTimeStamp(0.835053792631);
    msg.setSource(51316U);
    msg.setSourceEntity(36U);
    msg.setDestination(56091U);
    msg.setDestinationEntity(138U);
    msg.value = 0.992560703045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Temperature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.800105249635);
    msg.setSource(53674U);
    msg.setSourceEntity(246U);
    msg.setDestination(23425U);
    msg.setDestinationEntity(12U);
    msg.value = 0.609120236517;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.296103737715);
    msg.setSource(47282U);
    msg.setSourceEntity(186U);
    msg.setDestination(9621U);
    msg.setDestinationEntity(195U);
    msg.value = 0.283100623193;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pressure msg;
    msg.setTimeStamp(0.626440644326);
    msg.setSource(25213U);
    msg.setSourceEntity(153U);
    msg.setDestination(13039U);
    msg.setDestinationEntity(5U);
    msg.value = 0.464968929465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pressure #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.831998336768);
    msg.setSource(31974U);
    msg.setSourceEntity(250U);
    msg.setDestination(3983U);
    msg.setDestinationEntity(169U);
    msg.value = 0.345588155759;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.91870196153);
    msg.setSource(53180U);
    msg.setSourceEntity(51U);
    msg.setDestination(15387U);
    msg.setDestinationEntity(130U);
    msg.value = 0.119158954012;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Depth msg;
    msg.setTimeStamp(0.957181213526);
    msg.setSource(43533U);
    msg.setSourceEntity(58U);
    msg.setDestination(50199U);
    msg.setDestinationEntity(38U);
    msg.value = 0.124353561513;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Depth #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.889537030007);
    msg.setSource(36407U);
    msg.setSourceEntity(174U);
    msg.setDestination(65295U);
    msg.setDestinationEntity(226U);
    msg.value = 0.411858027261;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.966540412793);
    msg.setSource(56182U);
    msg.setSourceEntity(36U);
    msg.setDestination(21434U);
    msg.setDestinationEntity(77U);
    msg.value = 0.412171152481;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DepthOffset msg;
    msg.setTimeStamp(0.766487022708);
    msg.setSource(49606U);
    msg.setSourceEntity(95U);
    msg.setDestination(29520U);
    msg.setDestinationEntity(142U);
    msg.value = 0.388113143922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DepthOffset #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.236344726115);
    msg.setSource(14995U);
    msg.setSourceEntity(171U);
    msg.setDestination(35862U);
    msg.setDestinationEntity(64U);
    msg.value = 0.919251299593;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.835640059133);
    msg.setSource(20734U);
    msg.setSourceEntity(86U);
    msg.setDestination(10669U);
    msg.setDestinationEntity(252U);
    msg.value = 0.882203047408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoundSpeed msg;
    msg.setTimeStamp(0.0480543292722);
    msg.setSource(54593U);
    msg.setSourceEntity(102U);
    msg.setDestination(23982U);
    msg.setDestinationEntity(16U);
    msg.value = 0.909127020903;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoundSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.676653717963);
    msg.setSource(14419U);
    msg.setSourceEntity(186U);
    msg.setDestination(5424U);
    msg.setDestinationEntity(144U);
    msg.value = 0.396920791371;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.215756906965);
    msg.setSource(22033U);
    msg.setSourceEntity(147U);
    msg.setDestination(65216U);
    msg.setDestinationEntity(130U);
    msg.value = 0.29990081671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WaterDensity msg;
    msg.setTimeStamp(0.945505825669);
    msg.setSource(6832U);
    msg.setSourceEntity(4U);
    msg.setDestination(2360U);
    msg.setDestinationEntity(236U);
    msg.value = 0.660032798687;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WaterDensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.567479538821);
    msg.setSource(40070U);
    msg.setSourceEntity(37U);
    msg.setDestination(12284U);
    msg.setDestinationEntity(105U);
    msg.value = 0.408792723657;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.796831123107);
    msg.setSource(59149U);
    msg.setSourceEntity(172U);
    msg.setDestination(11592U);
    msg.setDestinationEntity(89U);
    msg.value = 0.683339099158;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Conductivity msg;
    msg.setTimeStamp(0.247568133167);
    msg.setSource(59026U);
    msg.setSourceEntity(68U);
    msg.setDestination(60159U);
    msg.setDestinationEntity(106U);
    msg.value = 0.64866136696;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Conductivity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.347824102178);
    msg.setSource(57581U);
    msg.setSourceEntity(203U);
    msg.setDestination(35539U);
    msg.setDestinationEntity(68U);
    msg.value = 0.736237860264;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.233108081306);
    msg.setSource(32357U);
    msg.setSourceEntity(70U);
    msg.setDestination(36258U);
    msg.setDestinationEntity(130U);
    msg.value = 0.0659835024869;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Salinity msg;
    msg.setTimeStamp(0.966468558149);
    msg.setSource(54104U);
    msg.setSourceEntity(123U);
    msg.setDestination(58300U);
    msg.setDestinationEntity(37U);
    msg.value = 0.72959736941;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Salinity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.443137628932);
    msg.setSource(25327U);
    msg.setSourceEntity(227U);
    msg.setDestination(40727U);
    msg.setDestinationEntity(18U);
    msg.direction = 0.744841439248;
    msg.speed = 0.926806639549;
    msg.turbulence = 0.50651323819;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.594903641499);
    msg.setSource(50271U);
    msg.setSourceEntity(64U);
    msg.setDestination(32876U);
    msg.setDestinationEntity(221U);
    msg.direction = 0.141702350172;
    msg.speed = 0.787673096281;
    msg.turbulence = 0.331725447702;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::WindSpeed msg;
    msg.setTimeStamp(0.748369465086);
    msg.setSource(400U);
    msg.setSourceEntity(75U);
    msg.setDestination(4380U);
    msg.setDestinationEntity(99U);
    msg.direction = 0.345343760983;
    msg.speed = 0.151123910415;
    msg.turbulence = 0.021383589703;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("WindSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.420878155112);
    msg.setSource(53464U);
    msg.setSourceEntity(224U);
    msg.setDestination(52670U);
    msg.setDestinationEntity(151U);
    msg.value = 0.802382970618;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.799295449993);
    msg.setSource(28772U);
    msg.setSourceEntity(95U);
    msg.setDestination(22450U);
    msg.setDestinationEntity(144U);
    msg.value = 0.601780704943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeHumidity msg;
    msg.setTimeStamp(0.226995106846);
    msg.setSource(51547U);
    msg.setSourceEntity(209U);
    msg.setDestination(32161U);
    msg.setDestinationEntity(109U);
    msg.value = 0.727091683343;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeHumidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.431831037672);
    msg.setSource(25783U);
    msg.setSourceEntity(90U);
    msg.setDestination(1505U);
    msg.setDestinationEntity(192U);
    msg.value.assign("XMGZSINHGPRIWDIASLNSSYOHCBRMCHNITZMVZJYABGXCNKQEELKVGMENIWZGNOLSITVJVDPAHZFCNFTURMOTXVBVNWDUJHFULQKQKKDYKEQWMRJMXWNXZDZUHPOUEBYGTHBFFTHCEHJFJAMISOFPVPXLQHYBRKTJCIBYDWRCUWKGTLSLQAFWYPOZXEQSVRIGPRRAUYGVKALOEZUXJYODGDANCJSEPSMUZTOAIQQUWPJKLMXLVBCXRWTYDFAO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.676399296958);
    msg.setSource(40565U);
    msg.setSourceEntity(118U);
    msg.setDestination(3441U);
    msg.setDestinationEntity(201U);
    msg.value.assign("OYRBKVCXILCNTTUIWQUFXBNZWSJQVNVFUPACHSXFEOYQBOGSBVHSWVDJBWZTPBTNXRGLJYRJMKJOPUMWKPLLQBCQXZYDVZEDPNWMGDFUYEBVDBYFZIHRPWFJNQKFPYFRSJIOTHDKIMKIDPVZVTKRIQEHFPGKTMOXISXWCANJXURROGSYMCCECAI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataText msg;
    msg.setTimeStamp(0.353966117107);
    msg.setSource(36326U);
    msg.setSourceEntity(46U);
    msg.setDestination(51418U);
    msg.setDestinationEntity(9U);
    msg.value.assign("YNCIUEHDNLPNVCGWZCFHHZLVTEQJBBFPYWAELICLVROKYUTVKZALJZRCCRDNIEZTOTWIVOYWARUFRTWZZIGPXCBVEOAXPLFYBVOQSRCXDPQWJNGJJEENOJXYXOHRALKUDMKTSPMYKFVAMUBQIGMVDULXSYTWSBWINIHNAUMDGHEBJDGXZQGSKOSKDLWF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataText #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.69017634181);
    msg.setSource(38535U);
    msg.setSourceEntity(162U);
    msg.setDestination(47672U);
    msg.setDestinationEntity(193U);
    const char tmp_msg_0[] = {-77, -52, -89, 27, -70, 121, 54, -33, 81, 114, 13, -106, 122, -24, -115, 27, 12, 54, 77, 89, 15, 90, -48, -120, 63, 60, 123, 27, -108, 47, -91, -58, 41, 82, 78, -49, 68, 46, -36, -12, 115, -47, 116, -8, -90, 89, 17, -119, 24, 23, 45, -105, 40, -88, -104, 68, 48, -123, 52, -73, -5, -41, 107, -18, 60, -50, -83, -48, -28, -84, 111, -79, 19, 105, -104, -10, -43, 43, -18, -113, 112, 62, -75, 122, -80, 87, 118, -122, 59, 43, -22, -58, -75, 45, 74, 66, -104, 109, 83, -73, 88, -128, -115, 74, 38, -28, 49, 35, 82, -121, -35, 46, -74, -65, -38, -48, 113, -73, -126, 21, -89, 109, 113, 115, -68, -67, -24, 71, -41, 38, -101, -110, -123, -117, 77, 50, -13, -86, -31, -34, 24, -122, 22, -72, 102};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.621291344036);
    msg.setSource(60981U);
    msg.setSourceEntity(6U);
    msg.setDestination(8624U);
    msg.setDestinationEntity(122U);
    const char tmp_msg_0[] = {83, -20, 51, -51, -122, 95, 48, 82, -75, -10, -56, 76, 120, 117, 9, -111, 41, -50, 123, 94, -14, -33, 30, -71, 13, 90, 1, -9, 73, -121, 9, -124, 88, -98, -111, -106, 106, 58, 25, -58, 3, 68, 33, 99, 116, 28, 79, 86, 88, -27, 26, 54, 107, -116, 85, -105, -21, 83, 20, -9, -64, 114, -38, 121, 61, 24, 110, -11, -92, 97, -69, 3, -22, -28, 9, -60, 30, 43, -119, 122, -32, 122, 45, -92, -120, 66, -1};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DevDataBinary msg;
    msg.setTimeStamp(0.617288813807);
    msg.setSource(33830U);
    msg.setSourceEntity(169U);
    msg.setDestination(43475U);
    msg.setDestinationEntity(97U);
    const char tmp_msg_0[] = {-122, 13, 102, 27, 34, 111, -2, -64, 27, 34, 114, -58, 78, -79, 90, 67, -35, 61, 64, -28, 50, 35, 126, -64, -44, 125, 119, 11, 102, 44, 85, -76, -11, 30, 111, 41, -14, 99, 22, 62, 44, -37, -116, -70, 45, 113, 62, 98, 68, -35, 103, 54, 124, 81, -31, -88, 87, -122, 32, 60, 65, 105, -29, 37, -95, -15, -125, 75, 26, 115, -69, -77, 36, -100, -46, -57, 56, -36, 51, 38, 60, -85, 33, -43, 5, -97, 52, 6, 55, -77, -80, -36, -89, 35, -42, 120, 111, -77, 72, -38, 94, -25, -94, -57, -64, 69, -72, 15, -64, 102, -104, 57, -37, 45, 33, 125, 56, 28, 37, -97, 1, -76, -11, -94, -94, 114, 92, 6, -109, 93, 30, -1, -34, 14, 18, 3, -95, 100, -49, -77, -65, 71, 113, -102, -82, -56, 123, -81, 96, 43, 59, 95, -105, -52, 81, 79, -73, -5, 31, -81, -125, 35, -93, -44, 124, 41, -1, 111, -36, -22, 11, 64, -120, 85, 75, 6, -11, 102, 41, 26, -114, 30, -85, -61, 12, -43, 107, -72, -27, 69, 104, 125, -47, 4, -3, -33, 60, 43, 122, -100, -59, 87, 100, 31, 107, 36};
    msg.value.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DevDataBinary #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.929237888881);
    msg.setSource(35041U);
    msg.setSourceEntity(108U);
    msg.setDestination(6820U);
    msg.setDestinationEntity(80U);
    msg.value = 0.0549010425597;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.463972893556);
    msg.setSource(14065U);
    msg.setSourceEntity(239U);
    msg.setDestination(13533U);
    msg.setDestinationEntity(4U);
    msg.value = 0.96147577372;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Force msg;
    msg.setTimeStamp(0.0975276814295);
    msg.setSource(27098U);
    msg.setSourceEntity(68U);
    msg.setDestination(3763U);
    msg.setDestinationEntity(85U);
    msg.value = 0.245351913659;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Force #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.110763679253);
    msg.setSource(21571U);
    msg.setSourceEntity(169U);
    msg.setDestination(40882U);
    msg.setDestinationEntity(71U);
    msg.type = 145U;
    msg.frequency = 753898160U;
    msg.min_range = 30526U;
    msg.max_range = 50389U;
    msg.bits_per_point = 174U;
    msg.scale_factor = 0.0948974134429;
    const char tmp_msg_0[] = {-126, -75, -25, 51, -83, 71, 117, -33, 119, -104, 8, 47, 100, 75, 41, 87, 110, 41, -53, -73, 104, -48, -42, 12, 122, 69, 7, -14, 85, 83, -112, -80, -52, -80, -105, 116, 65, 74, -115, -40, -85, 18, -85, 119, 58, 70, 80, 83, 10, 56, -49, -123, -109, -106, -111, 123, -69, -98, -90, 47, 119, 5, 62, 55, -52, 92, -55, -100, 84, -123, -89, -27, -22, 79, -18, -53, -16, -10, -111, 49, -60, -87, -60, 21, -50, -101, -92, 54, -12, -98, -103, 80, -16, -11, -57, 67, -38, 125, -50, 90, 33, 69, 68, -80, 52, 83, 32, -79, 92, -72, -48, -17, 21, -83, 59, 28, -81, 90, 52};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.784425791119);
    msg.setSource(59826U);
    msg.setSourceEntity(209U);
    msg.setDestination(40408U);
    msg.setDestinationEntity(58U);
    msg.type = 35U;
    msg.frequency = 475398598U;
    msg.min_range = 24505U;
    msg.max_range = 22273U;
    msg.bits_per_point = 156U;
    msg.scale_factor = 0.87312812848;
    IMC::BeamConfig tmp_msg_0;
    tmp_msg_0.beam_width = 0.757559659369;
    tmp_msg_0.beam_height = 0.786871010479;
    msg.beam_config.push_back(tmp_msg_0);
    const char tmp_msg_1[] = {6, -39, 105, -86, -115, -15, 86, 80, -107, -87, 69, -65, -62, -79, 126, -68, 65, 97, -27, 66, 50, 40, -70, -44, -118, 84, -98, -88, -17, -64, 17, -88, 77, -32, -118, 16, -108, -13, 105, -56, 26, -80, 15, 81, -31, -58, -124, 56, -102, -120, -127, 31, -126, -106, -31, 40, 91, 14, 81, -27, 104, 43, -68, 112, 78, 54, -60, 19, -63, 56, -37, 52, 61, -19, 15, 89, -36, -23, -75, 29, 65, -113, -108, 40, -47, 89, 116, 6, -92, -12, 113, 16, 118, 1, 93, 14, -10, -125, -44, -103, -124, 66, -98, 75, 56, -104, -76, -123, -40, -107, -21, -6, -41, -60, 1, 4, 16, 69, -122, -66, -72, -2, -121, -124, 21, -44, -122, -56, 100, -85, -79, 76, 90, 66, 99, -95, 83, 4, 102, 104, 67, -38, -17, -119, 57, 88, -55, -99, 59, -92, -3, -6, -29, 40, 100, -3, -22, 64, -13, -117, -99, -45, 122, 26, -35, 30, -20, -32, -58};
    msg.data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SonarData msg;
    msg.setTimeStamp(0.16245497825);
    msg.setSource(45934U);
    msg.setSourceEntity(246U);
    msg.setDestination(40533U);
    msg.setDestinationEntity(56U);
    msg.type = 20U;
    msg.frequency = 2542919715U;
    msg.min_range = 32992U;
    msg.max_range = 25245U;
    msg.bits_per_point = 235U;
    msg.scale_factor = 0.0318011512254;
    const char tmp_msg_0[] = {39, -79, -45, 41, -44, -104, 4, 96, 63, 73, -85, -89, -103, -15, -34, -65, -13, 40, 74, -7, -80, 29, -102, 7, -33, 107, -24, -15, -80, -56, -126};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SonarData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.406029503893);
    msg.setSource(47425U);
    msg.setSourceEntity(156U);
    msg.setDestination(27955U);
    msg.setDestinationEntity(25U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.106312261348);
    msg.setSource(39532U);
    msg.setSourceEntity(59U);
    msg.setDestination(62254U);
    msg.setDestinationEntity(28U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Pulse msg;
    msg.setTimeStamp(0.530904639355);
    msg.setSource(4179U);
    msg.setSourceEntity(37U);
    msg.setDestination(45726U);
    msg.setDestinationEntity(37U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Pulse #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.344009325473);
    msg.setSource(38750U);
    msg.setSourceEntity(63U);
    msg.setDestination(50943U);
    msg.setDestinationEntity(3U);
    msg.op = 213U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.520318640896);
    msg.setSource(35596U);
    msg.setSourceEntity(166U);
    msg.setDestination(19908U);
    msg.setDestinationEntity(136U);
    msg.op = 129U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PulseDetectionControl msg;
    msg.setTimeStamp(0.422141773732);
    msg.setSource(20747U);
    msg.setSourceEntity(209U);
    msg.setDestination(46363U);
    msg.setDestinationEntity(28U);
    msg.op = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PulseDetectionControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.720693586532);
    msg.setSource(50451U);
    msg.setSourceEntity(109U);
    msg.setDestination(54035U);
    msg.setDestinationEntity(62U);
    msg.value = 0.0631574513761;
    msg.confidence = 0.42682595495;
    msg.opmodes.assign("RGZCKHABFECDICSZJLTAXRJOKJHIMLXNEYQQIRRAGFLYAGEFWECHQABJDCXUVAVQEBHOEPNVNKZTAFWSGBWIVNKYCXOVOLHQWTTGNRGEFYJNU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.223302067068);
    msg.setSource(17335U);
    msg.setSourceEntity(64U);
    msg.setDestination(176U);
    msg.setDestinationEntity(29U);
    msg.value = 0.344451066181;
    msg.confidence = 0.099493518639;
    msg.opmodes.assign("UWOLRXHFBVJGHARKBBXCHMCSVYEEMETQPNJBGMFKXWZRRIJYNUENEJKIDVQKICYDDUJWCNXKVOWCYJGZPZETBIYZNIEOOVULJRXWXCNOUNWOLTGULICZASDSQXKBWMFRXDQVLCQWTFIWFYAGMKMHMZHQSPERJAXZGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FuelLevel msg;
    msg.setTimeStamp(0.933629964975);
    msg.setSource(9273U);
    msg.setSourceEntity(43U);
    msg.setDestination(13963U);
    msg.setDestinationEntity(27U);
    msg.value = 0.801001406586;
    msg.confidence = 0.688811506079;
    msg.opmodes.assign("ILAFHVNRUYWMGPKLDTKSGKWOMCMPCQDSVWXEORKTJXKLZOYSGFOXHLKGZARJQIREHSEBAKSZBEIKHWIIJFXUGBYUYTLURHEKULWCOASTRVLXJPLZACGEQAFQFQPQIBHJDITVPXEPSZBVVUZNYHYZCBFOOBIFYTXJMNXEUPHGENBFIZYSBFODMOTRKUUNMBGRDMOGAPQJC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FuelLevel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.135744753175);
    msg.setSource(16392U);
    msg.setSourceEntity(178U);
    msg.setDestination(14771U);
    msg.setDestinationEntity(198U);
    msg.itow = 1030889217U;
    msg.lat = 0.158351684705;
    msg.lon = 0.382558317236;
    msg.height_ell = 0.680860539372;
    msg.height_sea = 0.105716859481;
    msg.hacc = 0.746649583083;
    msg.vacc = 0.0750795599152;
    msg.vel_n = 0.934795547401;
    msg.vel_e = 0.670347963302;
    msg.vel_d = 0.236527997627;
    msg.speed = 0.750991289342;
    msg.gspeed = 0.017328964592;
    msg.heading = 3.06128187499e-05;
    msg.sacc = 0.662326967596;
    msg.cacc = 0.976958077015;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.263565905509);
    msg.setSource(20646U);
    msg.setSourceEntity(1U);
    msg.setDestination(1897U);
    msg.setDestinationEntity(166U);
    msg.itow = 575677440U;
    msg.lat = 0.491891481056;
    msg.lon = 0.751854382513;
    msg.height_ell = 0.139848251709;
    msg.height_sea = 0.905589082755;
    msg.hacc = 0.574448909284;
    msg.vacc = 0.627044513235;
    msg.vel_n = 0.938591244683;
    msg.vel_e = 0.0910459885233;
    msg.vel_d = 0.534831715621;
    msg.speed = 0.0606407140143;
    msg.gspeed = 0.31316054893;
    msg.heading = 0.207408054802;
    msg.sacc = 0.132607732144;
    msg.cacc = 0.499981880161;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsNavData msg;
    msg.setTimeStamp(0.300751468644);
    msg.setSource(56933U);
    msg.setSourceEntity(102U);
    msg.setDestination(53380U);
    msg.setDestinationEntity(166U);
    msg.itow = 2927495787U;
    msg.lat = 0.574817350157;
    msg.lon = 0.844670810547;
    msg.height_ell = 0.882836859746;
    msg.height_sea = 0.386945771735;
    msg.hacc = 0.875677846149;
    msg.vacc = 0.820682850691;
    msg.vel_n = 0.411437319192;
    msg.vel_e = 0.809412056139;
    msg.vel_d = 0.549981033466;
    msg.speed = 0.871187899213;
    msg.gspeed = 0.335742108325;
    msg.heading = 0.929772686885;
    msg.sacc = 0.434641468299;
    msg.cacc = 0.590491292572;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.244824206771);
    msg.setSource(4357U);
    msg.setSourceEntity(203U);
    msg.setDestination(6298U);
    msg.setDestinationEntity(245U);
    msg.id = 17U;
    msg.value = 0.0252201117667;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.89761525442);
    msg.setSource(11951U);
    msg.setSourceEntity(170U);
    msg.setDestination(39630U);
    msg.setDestinationEntity(237U);
    msg.id = 182U;
    msg.value = 0.804103859427;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ServoPosition msg;
    msg.setTimeStamp(0.382551823017);
    msg.setSource(6603U);
    msg.setSourceEntity(12U);
    msg.setDestination(26556U);
    msg.setDestinationEntity(163U);
    msg.id = 31U;
    msg.value = 0.984402574923;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.592845617572);
    msg.setSource(15404U);
    msg.setSourceEntity(206U);
    msg.setDestination(6102U);
    msg.setDestinationEntity(65U);
    msg.x = 0.398978574731;
    msg.y = 0.18848740354;
    msg.z = 0.510489447722;
    msg.phi = 0.859231111964;
    msg.theta = 0.639909741091;
    msg.psi = 0.603185561954;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.381417343008);
    msg.setSource(40169U);
    msg.setSourceEntity(72U);
    msg.setDestination(30764U);
    msg.setDestinationEntity(232U);
    msg.x = 0.264795936741;
    msg.y = 0.025434199361;
    msg.z = 0.650065871054;
    msg.phi = 0.132080308325;
    msg.theta = 0.77742162928;
    msg.psi = 0.409640157208;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DeviceState msg;
    msg.setTimeStamp(0.764120995824);
    msg.setSource(35916U);
    msg.setSourceEntity(254U);
    msg.setDestination(14086U);
    msg.setDestinationEntity(132U);
    msg.x = 0.0920414070887;
    msg.y = 0.543653723608;
    msg.z = 0.422834668229;
    msg.phi = 0.635557652741;
    msg.theta = 0.407674706708;
    msg.psi = 0.875109743788;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DeviceState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.911930219406);
    msg.setSource(33924U);
    msg.setSourceEntity(139U);
    msg.setDestination(3336U);
    msg.setDestinationEntity(31U);
    msg.beam_width = 0.656522778917;
    msg.beam_height = 0.0512666765287;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.792754339288);
    msg.setSource(699U);
    msg.setSourceEntity(240U);
    msg.setDestination(44952U);
    msg.setDestinationEntity(23U);
    msg.beam_width = 0.181484045083;
    msg.beam_height = 0.195658721802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::BeamConfig msg;
    msg.setTimeStamp(0.647823392848);
    msg.setSource(35449U);
    msg.setSourceEntity(86U);
    msg.setDestination(41270U);
    msg.setDestinationEntity(68U);
    msg.beam_width = 0.176590261775;
    msg.beam_height = 0.781827815408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("BeamConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.99721928205);
    msg.setSource(15751U);
    msg.setSourceEntity(87U);
    msg.setDestination(17473U);
    msg.setDestinationEntity(117U);
    msg.sane = 66U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.900317621148);
    msg.setSource(40779U);
    msg.setSourceEntity(176U);
    msg.setDestination(52032U);
    msg.setDestinationEntity(242U);
    msg.sane = 8U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DataSanity msg;
    msg.setTimeStamp(0.943824188144);
    msg.setSource(25370U);
    msg.setSourceEntity(126U);
    msg.setDestination(29314U);
    msg.setDestinationEntity(31U);
    msg.sane = 201U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DataSanity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.183385279415);
    msg.setSource(18577U);
    msg.setSourceEntity(120U);
    msg.setDestination(12167U);
    msg.setDestinationEntity(91U);
    msg.value = 0.424808411103;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.392283891051);
    msg.setSource(29247U);
    msg.setSourceEntity(151U);
    msg.setDestination(39422U);
    msg.setDestinationEntity(153U);
    msg.value = 0.343268509649;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RhodamineDye msg;
    msg.setTimeStamp(0.726444292947);
    msg.setSource(27204U);
    msg.setSourceEntity(233U);
    msg.setDestination(63671U);
    msg.setDestinationEntity(85U);
    msg.value = 0.814844364959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RhodamineDye #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.159590149032);
    msg.setSource(31057U);
    msg.setSourceEntity(232U);
    msg.setDestination(1998U);
    msg.setDestinationEntity(184U);
    msg.value = 0.402673607675;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.581620098734);
    msg.setSource(49935U);
    msg.setSourceEntity(138U);
    msg.setDestination(6566U);
    msg.setDestinationEntity(93U);
    msg.value = 0.921953053959;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CrudeOil msg;
    msg.setTimeStamp(0.631877128062);
    msg.setSource(45878U);
    msg.setSourceEntity(45U);
    msg.setDestination(39234U);
    msg.setDestinationEntity(174U);
    msg.value = 0.0627130336865;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CrudeOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.378460259257);
    msg.setSource(34588U);
    msg.setSourceEntity(109U);
    msg.setDestination(59820U);
    msg.setDestinationEntity(81U);
    msg.value = 0.376982282644;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.426983782128);
    msg.setSource(41933U);
    msg.setSourceEntity(60U);
    msg.setDestination(38329U);
    msg.setDestinationEntity(134U);
    msg.value = 0.918870498901;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FineOil msg;
    msg.setTimeStamp(0.24321222697);
    msg.setSource(10476U);
    msg.setSourceEntity(55U);
    msg.setDestination(39297U);
    msg.setDestinationEntity(208U);
    msg.value = 0.927413985643;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FineOil #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.692765378277);
    msg.setSource(18924U);
    msg.setSourceEntity(187U);
    msg.setDestination(18648U);
    msg.setDestinationEntity(137U);
    msg.value = 0.716731524928;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.359497780216);
    msg.setSource(51252U);
    msg.setSourceEntity(163U);
    msg.setDestination(11387U);
    msg.setDestinationEntity(248U);
    msg.value = 0.327871675297;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Turbidity msg;
    msg.setTimeStamp(0.13677788739);
    msg.setSource(32401U);
    msg.setSourceEntity(224U);
    msg.setDestination(13202U);
    msg.setDestinationEntity(91U);
    msg.value = 0.168775096319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Turbidity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.491629347376);
    msg.setSource(61600U);
    msg.setSourceEntity(107U);
    msg.setDestination(36327U);
    msg.setDestinationEntity(188U);
    msg.value = 0.553953117921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.893404583959);
    msg.setSource(36342U);
    msg.setSourceEntity(240U);
    msg.setDestination(10696U);
    msg.setDestinationEntity(33U);
    msg.value = 0.373425658716;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Chlorophyll msg;
    msg.setTimeStamp(0.44398011375);
    msg.setSource(57915U);
    msg.setSourceEntity(119U);
    msg.setDestination(17146U);
    msg.setDestinationEntity(20U);
    msg.value = 0.371749791898;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Chlorophyll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.654731411448);
    msg.setSource(58515U);
    msg.setSourceEntity(30U);
    msg.setDestination(30350U);
    msg.setDestinationEntity(55U);
    msg.value = 0.725412325438;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.37412338337);
    msg.setSource(11953U);
    msg.setSourceEntity(169U);
    msg.setDestination(9681U);
    msg.setDestinationEntity(31U);
    msg.value = 0.872175390087;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Fluorescein msg;
    msg.setTimeStamp(0.233215295662);
    msg.setSource(65016U);
    msg.setSourceEntity(241U);
    msg.setDestination(10513U);
    msg.setDestinationEntity(186U);
    msg.value = 0.227213254211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Fluorescein #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.903982236333);
    msg.setSource(50588U);
    msg.setSourceEntity(173U);
    msg.setDestination(48558U);
    msg.setDestinationEntity(38U);
    msg.value = 0.106920095904;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.585905490509);
    msg.setSource(24956U);
    msg.setSourceEntity(28U);
    msg.setDestination(27640U);
    msg.setDestinationEntity(51U);
    msg.value = 0.952352577115;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycocyanin msg;
    msg.setTimeStamp(0.956813056185);
    msg.setSource(44038U);
    msg.setSourceEntity(58U);
    msg.setDestination(36871U);
    msg.setDestinationEntity(67U);
    msg.value = 0.493252344154;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycocyanin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.218208466912);
    msg.setSource(38746U);
    msg.setSourceEntity(8U);
    msg.setDestination(46408U);
    msg.setDestinationEntity(91U);
    msg.value = 0.214923926258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.494185599478);
    msg.setSource(56886U);
    msg.setSourceEntity(70U);
    msg.setDestination(18466U);
    msg.setDestinationEntity(210U);
    msg.value = 0.45735084268;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Phycoerythrin msg;
    msg.setTimeStamp(0.602026008176);
    msg.setSource(55279U);
    msg.setSourceEntity(163U);
    msg.setDestination(18405U);
    msg.setDestinationEntity(198U);
    msg.value = 0.428373149829;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Phycoerythrin #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.830090364171);
    msg.setSource(40289U);
    msg.setSourceEntity(121U);
    msg.setDestination(22520U);
    msg.setDestinationEntity(131U);
    msg.validity = 15295U;
    msg.type = 14U;
    msg.tow = 2997145938U;
    msg.base_lat = 0.103988925373;
    msg.base_lon = 0.62740592485;
    msg.base_height = 0.429709003774;
    msg.n = 0.197456361844;
    msg.e = 0.399833381458;
    msg.d = 0.701222379521;
    msg.v_n = 0.406438480383;
    msg.v_e = 0.524592780553;
    msg.v_d = 0.211137340176;
    msg.satellites = 73U;
    msg.iar_hyp = 20180U;
    msg.iar_ratio = 0.308129721942;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.65034809116);
    msg.setSource(51440U);
    msg.setSourceEntity(15U);
    msg.setDestination(39612U);
    msg.setDestinationEntity(110U);
    msg.validity = 51356U;
    msg.type = 187U;
    msg.tow = 3855933800U;
    msg.base_lat = 0.0376364951283;
    msg.base_lon = 0.148049178337;
    msg.base_height = 0.986533194351;
    msg.n = 0.990132599496;
    msg.e = 0.928881794267;
    msg.d = 0.669199586588;
    msg.v_n = 0.723902983729;
    msg.v_e = 0.941718356555;
    msg.v_d = 0.979096808505;
    msg.satellites = 159U;
    msg.iar_hyp = 62669U;
    msg.iar_ratio = 0.316157585079;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRtk msg;
    msg.setTimeStamp(0.906692915439);
    msg.setSource(64723U);
    msg.setSourceEntity(173U);
    msg.setDestination(55642U);
    msg.setDestinationEntity(122U);
    msg.validity = 886U;
    msg.type = 22U;
    msg.tow = 2265802397U;
    msg.base_lat = 0.104951486222;
    msg.base_lon = 0.638379713871;
    msg.base_height = 0.247762198984;
    msg.n = 0.945583856241;
    msg.e = 0.587354308188;
    msg.d = 0.300030422927;
    msg.v_n = 0.390482293311;
    msg.v_e = 0.0699509027162;
    msg.v_d = 0.2452523071;
    msg.satellites = 42U;
    msg.iar_hyp = 21781U;
    msg.iar_ratio = 0.741215887133;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRtk #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.446241272077);
    msg.setSource(14585U);
    msg.setSourceEntity(68U);
    msg.setDestination(40159U);
    msg.setDestinationEntity(137U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.0468481368231;
    tmp_msg_0.lon = 0.215649997148;
    tmp_msg_0.height = 0.424199435618;
    tmp_msg_0.x = 0.150438344096;
    tmp_msg_0.y = 0.818424452119;
    tmp_msg_0.z = 0.920504553758;
    tmp_msg_0.phi = 0.801062516284;
    tmp_msg_0.theta = 0.887033363123;
    tmp_msg_0.psi = 0.670827254623;
    tmp_msg_0.u = 0.26892658923;
    tmp_msg_0.v = 0.501243778169;
    tmp_msg_0.w = 0.281215144733;
    tmp_msg_0.vx = 0.150977503517;
    tmp_msg_0.vy = 0.772066876725;
    tmp_msg_0.vz = 0.320580595089;
    tmp_msg_0.p = 0.254838447925;
    tmp_msg_0.q = 0.156631761092;
    tmp_msg_0.r = 0.915304872818;
    tmp_msg_0.depth = 0.150158334145;
    tmp_msg_0.alt = 0.604896294449;
    msg.state.set(tmp_msg_0);
    msg.type = 253U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.79456295287);
    msg.setSource(63733U);
    msg.setSourceEntity(3U);
    msg.setDestination(32357U);
    msg.setDestinationEntity(158U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.633793387193;
    tmp_msg_0.lon = 0.778704774292;
    tmp_msg_0.height = 0.304048770713;
    tmp_msg_0.x = 0.323060940905;
    tmp_msg_0.y = 0.384617147835;
    tmp_msg_0.z = 0.894717382833;
    tmp_msg_0.phi = 0.387300275983;
    tmp_msg_0.theta = 0.768481450987;
    tmp_msg_0.psi = 0.961923006942;
    tmp_msg_0.u = 0.387551889322;
    tmp_msg_0.v = 0.483581144977;
    tmp_msg_0.w = 0.594679879821;
    tmp_msg_0.vx = 0.648543134037;
    tmp_msg_0.vy = 0.471352695035;
    tmp_msg_0.vz = 0.199840430806;
    tmp_msg_0.p = 0.906722551239;
    tmp_msg_0.q = 0.801144500059;
    tmp_msg_0.r = 0.138895619962;
    tmp_msg_0.depth = 0.256530001405;
    tmp_msg_0.alt = 0.969442671678;
    msg.state.set(tmp_msg_0);
    msg.type = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ExternalNavData msg;
    msg.setTimeStamp(0.452597844165);
    msg.setSource(16574U);
    msg.setSourceEntity(216U);
    msg.setDestination(38097U);
    msg.setDestinationEntity(85U);
    IMC::EstimatedState tmp_msg_0;
    tmp_msg_0.lat = 0.285613798625;
    tmp_msg_0.lon = 0.402402514634;
    tmp_msg_0.height = 0.714618311987;
    tmp_msg_0.x = 0.54070353769;
    tmp_msg_0.y = 0.602912850128;
    tmp_msg_0.z = 0.656561657455;
    tmp_msg_0.phi = 0.853626232042;
    tmp_msg_0.theta = 0.610018117203;
    tmp_msg_0.psi = 0.816295206616;
    tmp_msg_0.u = 0.571863144761;
    tmp_msg_0.v = 0.853085767892;
    tmp_msg_0.w = 0.207505816345;
    tmp_msg_0.vx = 0.643440066021;
    tmp_msg_0.vy = 0.459561442464;
    tmp_msg_0.vz = 0.025861598247;
    tmp_msg_0.p = 0.844350279128;
    tmp_msg_0.q = 0.73129081189;
    tmp_msg_0.r = 0.280582264701;
    tmp_msg_0.depth = 0.19490060717;
    tmp_msg_0.alt = 0.884421124561;
    msg.state.set(tmp_msg_0);
    msg.type = 64U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ExternalNavData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.756593325127);
    msg.setSource(16744U);
    msg.setSourceEntity(211U);
    msg.setDestination(50670U);
    msg.setDestinationEntity(16U);
    msg.value = 0.758084716917;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.310882254715);
    msg.setSource(21755U);
    msg.setSourceEntity(149U);
    msg.setDestination(38970U);
    msg.setDestinationEntity(116U);
    msg.value = 0.974224188272;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOxygen msg;
    msg.setTimeStamp(0.0906160512943);
    msg.setSource(41234U);
    msg.setSourceEntity(172U);
    msg.setDestination(52422U);
    msg.setDestinationEntity(158U);
    msg.value = 0.70997061211;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOxygen #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.634146914885);
    msg.setSource(61683U);
    msg.setSourceEntity(183U);
    msg.setDestination(38983U);
    msg.setDestinationEntity(24U);
    msg.value = 0.480944013059;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.100133957079);
    msg.setSource(46075U);
    msg.setSourceEntity(11U);
    msg.setDestination(38299U);
    msg.setDestinationEntity(111U);
    msg.value = 0.978143156257;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AirSaturation msg;
    msg.setTimeStamp(0.318581499911);
    msg.setSource(40302U);
    msg.setSourceEntity(245U);
    msg.setDestination(1489U);
    msg.setDestinationEntity(213U);
    msg.value = 0.642705102465;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AirSaturation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.841966930187);
    msg.setSource(25329U);
    msg.setSourceEntity(117U);
    msg.setDestination(46389U);
    msg.setDestinationEntity(168U);
    msg.value = 0.347856501436;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.344484528319);
    msg.setSource(37786U);
    msg.setSourceEntity(12U);
    msg.setDestination(5796U);
    msg.setDestinationEntity(104U);
    msg.value = 0.37260960236;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Throttle msg;
    msg.setTimeStamp(0.18085459496);
    msg.setSource(37751U);
    msg.setSourceEntity(157U);
    msg.setDestination(24387U);
    msg.setDestinationEntity(117U);
    msg.value = 0.714813061931;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Throttle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.51945751648);
    msg.setSource(16840U);
    msg.setSourceEntity(101U);
    msg.setDestination(25234U);
    msg.setDestinationEntity(217U);
    msg.value = 0.302395512855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.286154195302);
    msg.setSource(12683U);
    msg.setSourceEntity(201U);
    msg.setDestination(4027U);
    msg.setDestinationEntity(233U);
    msg.value = 0.371280224462;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PH msg;
    msg.setTimeStamp(0.938537719558);
    msg.setSource(43074U);
    msg.setSourceEntity(40U);
    msg.setDestination(54309U);
    msg.setDestinationEntity(73U);
    msg.value = 0.11119743017;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PH #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.312617856562);
    msg.setSource(40947U);
    msg.setSourceEntity(239U);
    msg.setDestination(15057U);
    msg.setDestinationEntity(115U);
    msg.value = 0.52224581585;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.31549950788);
    msg.setSource(34891U);
    msg.setSourceEntity(10U);
    msg.setDestination(1172U);
    msg.setDestinationEntity(157U);
    msg.value = 0.834442406671;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Redox msg;
    msg.setTimeStamp(0.822756991078);
    msg.setSource(55590U);
    msg.setSourceEntity(103U);
    msg.setDestination(45833U);
    msg.setDestinationEntity(146U);
    msg.value = 0.915299832184;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Redox #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.0672393207777);
    msg.setSource(45044U);
    msg.setSourceEntity(230U);
    msg.setDestination(53318U);
    msg.setDestinationEntity(131U);
    msg.id = 193U;
    msg.zoom = 141U;
    msg.action = 181U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.586434479891);
    msg.setSource(2613U);
    msg.setSourceEntity(237U);
    msg.setDestination(59823U);
    msg.setDestinationEntity(0U);
    msg.id = 216U;
    msg.zoom = 81U;
    msg.action = 100U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CameraZoom msg;
    msg.setTimeStamp(0.946021318181);
    msg.setSource(17663U);
    msg.setSourceEntity(198U);
    msg.setDestination(40971U);
    msg.setDestinationEntity(122U);
    msg.id = 79U;
    msg.zoom = 97U;
    msg.action = 215U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CameraZoom #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.725000526019);
    msg.setSource(39229U);
    msg.setSourceEntity(85U);
    msg.setDestination(481U);
    msg.setDestinationEntity(200U);
    msg.id = 244U;
    msg.value = 0.225568261434;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.294884719822);
    msg.setSource(18331U);
    msg.setSourceEntity(248U);
    msg.setDestination(61266U);
    msg.setDestinationEntity(1U);
    msg.id = 66U;
    msg.value = 0.968178934402;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetThrusterActuation msg;
    msg.setTimeStamp(0.985934730715);
    msg.setSource(22913U);
    msg.setSourceEntity(45U);
    msg.setDestination(14039U);
    msg.setDestinationEntity(76U);
    msg.id = 160U;
    msg.value = 0.55174086756;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetThrusterActuation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.280759893287);
    msg.setSource(42334U);
    msg.setSourceEntity(28U);
    msg.setDestination(8266U);
    msg.setDestinationEntity(94U);
    msg.id = 204U;
    msg.value = 0.295479314225;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.883861515369);
    msg.setSource(39899U);
    msg.setSourceEntity(216U);
    msg.setDestination(33649U);
    msg.setDestinationEntity(90U);
    msg.id = 139U;
    msg.value = 0.747983791562;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetServoPosition msg;
    msg.setTimeStamp(0.521307918011);
    msg.setSource(30585U);
    msg.setSourceEntity(5U);
    msg.setDestination(52500U);
    msg.setDestinationEntity(197U);
    msg.id = 144U;
    msg.value = 0.670956486588;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetServoPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.903301872072);
    msg.setSource(31211U);
    msg.setSourceEntity(4U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(50U);
    msg.id = 212U;
    msg.angle = 0.62507901731;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.735797147529);
    msg.setSource(32694U);
    msg.setSourceEntity(39U);
    msg.setDestination(63722U);
    msg.setDestinationEntity(179U);
    msg.id = 68U;
    msg.angle = 0.522669105119;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetControlSurfaceDeflection msg;
    msg.setTimeStamp(0.290796930755);
    msg.setSource(58109U);
    msg.setSourceEntity(139U);
    msg.setDestination(3780U);
    msg.setDestinationEntity(95U);
    msg.id = 114U;
    msg.angle = 0.539676065307;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetControlSurfaceDeflection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.335701623423);
    msg.setSource(50387U);
    msg.setSourceEntity(107U);
    msg.setDestination(2858U);
    msg.setDestinationEntity(65U);
    msg.op = 149U;
    msg.actions.assign("ZQWAVPOYNNDYLWNPTIKGFSHGENKUEBAZSBDAGSSJEFJDFMWMDWUKKYGXNFTTJMVHHPWKUBMPLHYGYVLRHGKRSJRCQCRSHHONVMOKFXNXINDKDUCVZONPTMBISQYVPFLJCUITLLCZWFXRQJEAZKFABRBWDGZTMADUOIHTUQYQIWGADEFJBQUVXZXNJBXROBIXFIZTEZRLOPYBEXCJWVLUZEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.713039179451);
    msg.setSource(12462U);
    msg.setSourceEntity(68U);
    msg.setDestination(9582U);
    msg.setDestinationEntity(105U);
    msg.op = 159U;
    msg.actions.assign("YMGQMSHTALSLUSCJONVXBMLSYADPSNHDWIXVNLUXOKXEVHWSQPNCGCEPCBJTANGFHMGBMKWQBSZTFGWZOFBCAHZVIJGUCBNUFKPRDYMVHZLQOEUJWVITFOFKZLPKJCRASOKFULQFPDDLOYGQETRMXEARNNJIZAGJRQWSSKQRCIRUPDOVPYDENYPHHIQEHKIROUADTWVMGAXUPETZTEBIXQRCTKYXZVWYJRBXMFXKWINJBZCFEL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActionsRequest msg;
    msg.setTimeStamp(0.781106543317);
    msg.setSource(14429U);
    msg.setSourceEntity(135U);
    msg.setDestination(42001U);
    msg.setDestinationEntity(57U);
    msg.op = 145U;
    msg.actions.assign("NPNTBLYKEFIRXRGIYEWEBCLQUCLZJEZLUMEASKTNFMAQZQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActionsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.383491413506);
    msg.setSource(48727U);
    msg.setSourceEntity(12U);
    msg.setDestination(29540U);
    msg.setDestinationEntity(101U);
    msg.actions.assign("CSWCEIRRGJZEYAXTGOOTMRPWOUJALUP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.172572425474);
    msg.setSource(9763U);
    msg.setSourceEntity(45U);
    msg.setDestination(42806U);
    msg.setDestinationEntity(31U);
    msg.actions.assign("LNVJOVBSKRJNKWSJRJFIMYAIYXQXGPJAKFEDOROOSPABUGSKIMTPEFJTFPZVPNQVKWTAQXCQBKKGVSTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteActions msg;
    msg.setTimeStamp(0.35563346925);
    msg.setSource(31475U);
    msg.setSourceEntity(151U);
    msg.setDestination(36992U);
    msg.setDestinationEntity(188U);
    msg.actions.assign("UWJIQHWLSYXZSDYGELTLUHMYNEOPBIGAGJTVSKNYSUIFBVMFFZHPEQNPIEYHYENDBHAPWZRTUTDFKOKTOIRJUQWACKGLWNQBACRVPXGICFRQKUUQXADXLOJTMGMCBVNXJCMYJGBXUVNDIAHWOBXCVZZYGVZKGVFIHRCLNVPRYASQFKZSYXHTWETHSCQDMPZWQKIRXPVZNPLOGZOLEODJMKMH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteActions #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.738444764454);
    msg.setSource(51509U);
    msg.setSourceEntity(7U);
    msg.setDestination(27526U);
    msg.setDestinationEntity(219U);
    msg.button = 161U;
    msg.value = 89U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.395371858474);
    msg.setSource(20678U);
    msg.setSourceEntity(157U);
    msg.setDestination(61781U);
    msg.setDestinationEntity(110U);
    msg.button = 205U;
    msg.value = 185U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ButtonEvent msg;
    msg.setTimeStamp(0.541125084823);
    msg.setSource(33679U);
    msg.setSourceEntity(252U);
    msg.setDestination(47951U);
    msg.setDestinationEntity(113U);
    msg.button = 166U;
    msg.value = 126U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ButtonEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.264763186137);
    msg.setSource(15264U);
    msg.setSourceEntity(91U);
    msg.setDestination(9686U);
    msg.setDestinationEntity(247U);
    msg.op = 42U;
    msg.text.assign("OTBMUJCDHAFYRZZLVQETJSMXQZKVDZHLAXLMMUSZWPWAIXNRTQKAXCWINAFKZLLIVSGUIKIQQVGQOHJEAGUAKTONWMDCXEOTXWREGCFSCLLYXWGKGYYSBBIEJLFBFBAOUNSVYTCMOEDEFYZWNEHROYPKVXCCZVJPDEZSZRKSVUJOTDQJNLHMBCBKPFJRNQSVUFPDRJUKERPLNTRUMPSGRHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.478973565043);
    msg.setSource(15233U);
    msg.setSourceEntity(222U);
    msg.setDestination(24181U);
    msg.setDestinationEntity(28U);
    msg.op = 127U;
    msg.text.assign("RGBRRWEKYYUCRDPISPCCVOLYOZJZGYOBUPKDWSAHAAGFULSYSLHZSKVMOMSKTJJWVJTJBBRQNQYGQHSGIMETGEOABEWNHKQPTBCKLCOSFLLUVIXRDVXZEVRXDQIOSLMDGJZKFPHXNDATRQEIKHBNCIOOWAAUULNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LcdControl msg;
    msg.setTimeStamp(0.339362717519);
    msg.setSource(8726U);
    msg.setSourceEntity(234U);
    msg.setDestination(39576U);
    msg.setDestinationEntity(254U);
    msg.op = 114U;
    msg.text.assign("IIZKWPKZMERNILYKLMYPTOQFUGLHFVHCNBPXTUMLIUJQMVETSBAKYOXGHTWUHFJVJOCBIMRTNFCBZUQLHZNIPKJZMYHFAXPCNDYWTAFGCNQOLHGWFXVQPXBBMINTEIFLJKVAAWXAVQVMTJMJSIWTZAWUUCSDEIXYNQBWQQEDRDSFKRSYXURHUHSGEQZRSZNACYLGNEYPYODEJWZWCGRHAXDDKDO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LcdControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.0954529154994);
    msg.setSource(13967U);
    msg.setSourceEntity(175U);
    msg.setDestination(30667U);
    msg.setDestinationEntity(141U);
    msg.op = 77U;
    msg.time_remain = 0.416425879373;
    msg.sched_time = 0.807692213402;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.272418646816);
    msg.setSource(889U);
    msg.setSourceEntity(137U);
    msg.setDestination(51356U);
    msg.setDestinationEntity(132U);
    msg.op = 0U;
    msg.time_remain = 0.82478903786;
    msg.sched_time = 0.525839030919;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerOperation msg;
    msg.setTimeStamp(0.0824733104565);
    msg.setSource(9668U);
    msg.setSourceEntity(203U);
    msg.setDestination(18305U);
    msg.setDestinationEntity(213U);
    msg.op = 112U;
    msg.time_remain = 0.2239872723;
    msg.sched_time = 0.63052397249;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.94506172499);
    msg.setSource(58373U);
    msg.setSourceEntity(60U);
    msg.setDestination(19329U);
    msg.setDestinationEntity(195U);
    msg.name.assign("IYSPOSVNLAZGFNAEUWNZWJYBWQHBKMIUCTHMYXBDZFEJFIKFN");
    msg.op = 114U;
    msg.sched_time = 0.280073784028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.918491586711);
    msg.setSource(1192U);
    msg.setSourceEntity(132U);
    msg.setDestination(12988U);
    msg.setDestinationEntity(141U);
    msg.name.assign("SBRIJRTYUYIAVZHNARPVFOAYGDYDLUYCBPJQDCVEXXVWLXYWAJAMZVOKFCMOXWCUDUFKVNKDOZPGDJWOSWZBMLEELQGEYNIKNHYSOHQFDMFXRJHESBZCKMSUMFTXGUKJ");
    msg.op = 49U;
    msg.sched_time = 0.871676193083;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelControl msg;
    msg.setTimeStamp(0.323488856566);
    msg.setSource(47385U);
    msg.setSourceEntity(164U);
    msg.setDestination(60339U);
    msg.setDestinationEntity(103U);
    msg.name.assign("ZJKATFIGUTSXBLMQRZTNKLSPBHPPWHHCHCMGUSLLTZRGWYOPBEWKJHXYULGNRTAGPGJCRECVGDDYYOUIAXJCGPTXVLV");
    msg.op = 209U;
    msg.sched_time = 0.601868620719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.986006968832);
    msg.setSource(15801U);
    msg.setSourceEntity(89U);
    msg.setDestination(28782U);
    msg.setDestinationEntity(151U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.433170703053);
    msg.setSource(21432U);
    msg.setSourceEntity(128U);
    msg.setDestination(45063U);
    msg.setDestinationEntity(38U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryPowerChannelState msg;
    msg.setTimeStamp(0.224057917235);
    msg.setSource(3493U);
    msg.setSourceEntity(72U);
    msg.setDestination(64616U);
    msg.setDestinationEntity(238U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryPowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.113217382144);
    msg.setSource(47256U);
    msg.setSourceEntity(103U);
    msg.setDestination(29930U);
    msg.setDestinationEntity(165U);
    msg.name.assign("BDMFEWJSAMNHMNS");
    msg.state = 160U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.292848329341);
    msg.setSource(19687U);
    msg.setSourceEntity(82U);
    msg.setDestination(27509U);
    msg.setDestinationEntity(4U);
    msg.name.assign("QSOWBNDNHPINWVDGAERLCKXVRCNEPTZQXJXVGDYEYUXWTEYLWITWSKXZZGSQRQAPFJNPZMB");
    msg.state = 249U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PowerChannelState msg;
    msg.setTimeStamp(0.675598830365);
    msg.setSource(22764U);
    msg.setSourceEntity(224U);
    msg.setDestination(16349U);
    msg.setDestinationEntity(177U);
    msg.name.assign("TCCPJDEINMJPFKUZMATRLEUGYXFKQHGWIDQKETWBVJGJGSITFYOSUMXEKOBVKENQJPHOITNFPSTZTMKNINOXCHRBEOVZGNFULHHAWNPKJXLMBUZTQEBRGKQRSSPRPWADFCMVCENLSRUCFPSBYENHLZDLBQJGUOIEABYWDMRWRCLYVYTPCODYDOXCXJQQLHRQUKZMS");
    msg.state = 164U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PowerChannelState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.834684324198);
    msg.setSource(46361U);
    msg.setSourceEntity(253U);
    msg.setDestination(29376U);
    msg.setDestinationEntity(240U);
    msg.name.assign("LLRLVIHEDHERVIAZPDPKIKTAAXHOREXHWRUYOKTCOQTPLJKWXATOJYSGZBFMGPGVJPUSEKRZMNXVBLSOKWWBECYBJACQ");
    msg.value = 241U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.57679585137);
    msg.setSource(32729U);
    msg.setSourceEntity(34U);
    msg.setDestination(2044U);
    msg.setDestinationEntity(117U);
    msg.name.assign("GJLJDPYMERGJMFPUJLKBGKBDPAACPBZXBGXYEQVB");
    msg.value = 123U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LedBrightness msg;
    msg.setTimeStamp(0.677709590061);
    msg.setSource(4006U);
    msg.setSourceEntity(176U);
    msg.setDestination(3866U);
    msg.setDestinationEntity(221U);
    msg.name.assign("GWDLYSPJDFAMWSILJMNFKSZVOAILGTZTPXILZPXBWMRHWMXNREWMSCNCZTRMPAGBWZ");
    msg.value = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.625187719067);
    msg.setSource(39623U);
    msg.setSourceEntity(64U);
    msg.setDestination(49144U);
    msg.setDestinationEntity(247U);
    msg.name.assign("RXKFQVNARFLRBWEASSFFVHANYLDKPRWJARYISONEGLCIAQODEOSKHMZKJZWGTDUNJWBXVYPCMEYFGGDQRESRQPSLQMCCYZOPGVKPPPVPWCAUPQXIZSMCTKWVUYFVOOMZJHKMAH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.683371688216);
    msg.setSource(58555U);
    msg.setSourceEntity(133U);
    msg.setDestination(2664U);
    msg.setDestinationEntity(237U);
    msg.name.assign("QYTEEGAHEJEEKIPCZXWFLTWOKQFYW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryLedBrightness msg;
    msg.setTimeStamp(0.334546426582);
    msg.setSource(42099U);
    msg.setSourceEntity(189U);
    msg.setDestination(56536U);
    msg.setDestinationEntity(239U);
    msg.name.assign("HLXUDTAANZEOYJVBSKXRGDRIQHQAKUYDBFKDTNHDZJYJKNNWSMQBOCSJYELSQSBHNTUCWGOMXQTUAFEKIRPEFPICRLPHVCYNDOOYWJAECFHMBDT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.411028996215);
    msg.setSource(59594U);
    msg.setSourceEntity(86U);
    msg.setDestination(45806U);
    msg.setDestinationEntity(80U);
    msg.name.assign("ESHOGNASTNGITUYRWTDSZFVWAJVURXVRGAUALOODZRYUYTKWOYELVDICXCQSLYQCJPCASFMXBGTHOMUHBVZMXTJWGPBFQZKBUYQBCLHUCBVNSRHHVEHEXLTDBKCHGETIZJSGCGYADPNVMYMPFXLWDPTJBMFSTWZQFYSILKOJIASIWQVFXZGDWKFQODPQWQOILEVBMCKJKENLPDRN");
    msg.value = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.0825158822406);
    msg.setSource(50696U);
    msg.setSourceEntity(137U);
    msg.setDestination(34182U);
    msg.setDestinationEntity(51U);
    msg.name.assign("JQBEUZPKABNXPCUHEBTQSZUKLITRVOLUTXGARTMCTNWVZGZDOCFDSFDEHJAJXMKNZJAUYJYQJMVXIOHRLSIMXSEKY");
    msg.value = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetLedBrightness msg;
    msg.setTimeStamp(0.436770809347);
    msg.setSource(3887U);
    msg.setSourceEntity(60U);
    msg.setDestination(63555U);
    msg.setDestinationEntity(14U);
    msg.name.assign("YVHNTMTZLBOXUSZKWFEVNZHECWFLLJFNVWARGKGFWRTTCHZIDBWXGAUCSZRHPQYXOKRKETDQISMSKEJFPHTMLCLLDIMTJZJHEJLUJHUYJQYJRCABMCKOXLCVFPRBXMTRDLIGEZBZAWFFROBRUMEWQIQCQKFSSNPUBPNWWDHUGTGYMPAKYKVIVPOZYGPINVJEZYEMSOSGG");
    msg.value = 102U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetLedBrightness #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.83100368238);
    msg.setSource(50307U);
    msg.setSourceEntity(86U);
    msg.setDestination(19764U);
    msg.setDestinationEntity(140U);
    msg.id = 139U;
    msg.period = 363241593U;
    msg.duty_cycle = 705231725U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.861225975171);
    msg.setSource(57952U);
    msg.setSourceEntity(20U);
    msg.setDestination(21045U);
    msg.setDestinationEntity(89U);
    msg.id = 227U;
    msg.period = 3134700220U;
    msg.duty_cycle = 4009957401U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetPWM msg;
    msg.setTimeStamp(0.183314602368);
    msg.setSource(20708U);
    msg.setSourceEntity(127U);
    msg.setDestination(44460U);
    msg.setDestinationEntity(84U);
    msg.id = 73U;
    msg.period = 492402540U;
    msg.duty_cycle = 1454190080U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetPWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.985366898135);
    msg.setSource(24031U);
    msg.setSourceEntity(243U);
    msg.setDestination(34867U);
    msg.setDestinationEntity(230U);
    msg.id = 141U;
    msg.period = 3347011726U;
    msg.duty_cycle = 835326978U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.495479184952);
    msg.setSource(22591U);
    msg.setSourceEntity(49U);
    msg.setDestination(3547U);
    msg.setDestinationEntity(216U);
    msg.id = 49U;
    msg.period = 682805647U;
    msg.duty_cycle = 2219390658U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PWM msg;
    msg.setTimeStamp(0.600214078127);
    msg.setSource(5493U);
    msg.setSourceEntity(72U);
    msg.setDestination(64675U);
    msg.setDestinationEntity(88U);
    msg.id = 25U;
    msg.period = 3163777080U;
    msg.duty_cycle = 1495411472U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PWM #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.719531880964);
    msg.setSource(43661U);
    msg.setSourceEntity(126U);
    msg.setDestination(16440U);
    msg.setDestinationEntity(34U);
    msg.lat = 0.216382747175;
    msg.lon = 0.0288221257323;
    msg.height = 0.182508984117;
    msg.x = 0.859982479728;
    msg.y = 0.199847947251;
    msg.z = 0.673975167207;
    msg.phi = 0.507630411451;
    msg.theta = 0.423629904892;
    msg.psi = 0.324149635321;
    msg.u = 0.0980976858054;
    msg.v = 0.528879231523;
    msg.w = 0.112606626481;
    msg.vx = 0.699970535193;
    msg.vy = 0.698108682584;
    msg.vz = 0.575957543011;
    msg.p = 0.791180886063;
    msg.q = 0.327177825364;
    msg.r = 0.665819033243;
    msg.depth = 0.567836802391;
    msg.alt = 0.221584349536;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.745691785978);
    msg.setSource(43415U);
    msg.setSourceEntity(52U);
    msg.setDestination(43887U);
    msg.setDestinationEntity(225U);
    msg.lat = 0.240398134543;
    msg.lon = 0.921680222119;
    msg.height = 0.594569907286;
    msg.x = 0.226928255723;
    msg.y = 0.645990068285;
    msg.z = 0.319343709055;
    msg.phi = 0.484175967933;
    msg.theta = 0.824761140854;
    msg.psi = 0.657700622636;
    msg.u = 0.182691166661;
    msg.v = 0.252714837476;
    msg.w = 0.765028225014;
    msg.vx = 0.875112910882;
    msg.vy = 0.134192207852;
    msg.vz = 0.624135642643;
    msg.p = 0.0240607576253;
    msg.q = 0.32452090475;
    msg.r = 0.371172060347;
    msg.depth = 0.999762896839;
    msg.alt = 0.138876650437;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedState msg;
    msg.setTimeStamp(0.278940883508);
    msg.setSource(49825U);
    msg.setSourceEntity(56U);
    msg.setDestination(24711U);
    msg.setDestinationEntity(13U);
    msg.lat = 0.817199056137;
    msg.lon = 0.547322165299;
    msg.height = 0.906149752314;
    msg.x = 0.848158697414;
    msg.y = 0.219100890967;
    msg.z = 0.877551035077;
    msg.phi = 0.199621702412;
    msg.theta = 0.149394745724;
    msg.psi = 0.349882639327;
    msg.u = 0.0224034221725;
    msg.v = 0.243573167721;
    msg.w = 0.45720670094;
    msg.vx = 0.203673113626;
    msg.vy = 0.482214987016;
    msg.vz = 0.644105747406;
    msg.p = 0.979181270178;
    msg.q = 0.72896049924;
    msg.r = 0.0922077328508;
    msg.depth = 0.306580786024;
    msg.alt = 0.77701051855;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.247290354256);
    msg.setSource(25424U);
    msg.setSourceEntity(2U);
    msg.setDestination(64876U);
    msg.setDestinationEntity(53U);
    msg.x = 0.652055450074;
    msg.y = 0.759568755822;
    msg.z = 0.237765234248;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.786207614938);
    msg.setSource(55357U);
    msg.setSourceEntity(225U);
    msg.setDestination(57691U);
    msg.setDestinationEntity(83U);
    msg.x = 0.664664837981;
    msg.y = 0.152400309876;
    msg.z = 0.302020827094;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EstimatedStreamVelocity msg;
    msg.setTimeStamp(0.322557873782);
    msg.setSource(32739U);
    msg.setSourceEntity(194U);
    msg.setDestination(60670U);
    msg.setDestinationEntity(75U);
    msg.x = 0.108282487566;
    msg.y = 0.212000834878;
    msg.z = 0.371270339625;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EstimatedStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.542516813914);
    msg.setSource(12472U);
    msg.setSourceEntity(44U);
    msg.setDestination(60084U);
    msg.setDestinationEntity(220U);
    msg.value = 0.633163222908;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.718719578829);
    msg.setSource(65285U);
    msg.setSourceEntity(250U);
    msg.setDestination(19797U);
    msg.setDestinationEntity(129U);
    msg.value = 0.253564257843;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IndicatedSpeed msg;
    msg.setTimeStamp(0.0104618944122);
    msg.setSource(50366U);
    msg.setSourceEntity(76U);
    msg.setDestination(45296U);
    msg.setDestinationEntity(195U);
    msg.value = 0.757084388732;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IndicatedSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.359642114188);
    msg.setSource(30445U);
    msg.setSourceEntity(2U);
    msg.setDestination(29551U);
    msg.setDestinationEntity(137U);
    msg.value = 0.571113332727;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.838526284557);
    msg.setSource(25536U);
    msg.setSourceEntity(193U);
    msg.setDestination(36880U);
    msg.setDestinationEntity(181U);
    msg.value = 0.854417231886;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrueSpeed msg;
    msg.setTimeStamp(0.588943548471);
    msg.setSource(61937U);
    msg.setSourceEntity(61U);
    msg.setDestination(23931U);
    msg.setDestinationEntity(27U);
    msg.value = 0.17546154838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrueSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.84056347483);
    msg.setSource(12420U);
    msg.setSourceEntity(57U);
    msg.setDestination(49748U);
    msg.setDestinationEntity(178U);
    msg.x = 0.273627484839;
    msg.y = 0.166518185101;
    msg.z = 0.313927075302;
    msg.phi = 0.164281831628;
    msg.theta = 0.908665562545;
    msg.psi = 0.739472626627;
    msg.p = 0.0252567788089;
    msg.q = 0.323109015249;
    msg.r = 0.994212692535;
    msg.u = 0.723155947119;
    msg.v = 0.550335972066;
    msg.w = 0.178058733917;
    msg.bias_psi = 0.771980656151;
    msg.bias_r = 0.950350579685;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.574790671232);
    msg.setSource(51912U);
    msg.setSourceEntity(88U);
    msg.setDestination(44929U);
    msg.setDestinationEntity(211U);
    msg.x = 0.817726019931;
    msg.y = 0.265279834824;
    msg.z = 0.328420502849;
    msg.phi = 0.54661481351;
    msg.theta = 0.475713312333;
    msg.psi = 0.0350576839368;
    msg.p = 0.0829232975626;
    msg.q = 0.304345826256;
    msg.r = 0.364193030011;
    msg.u = 0.0811407134013;
    msg.v = 0.0561231582877;
    msg.w = 0.748536086126;
    msg.bias_psi = 0.873237275221;
    msg.bias_r = 0.470995820526;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationUncertainty msg;
    msg.setTimeStamp(0.145826026492);
    msg.setSource(8382U);
    msg.setSourceEntity(219U);
    msg.setDestination(41613U);
    msg.setDestinationEntity(71U);
    msg.x = 0.0545031096263;
    msg.y = 0.871364577716;
    msg.z = 0.216049491581;
    msg.phi = 0.510117877676;
    msg.theta = 0.212851245238;
    msg.psi = 0.498117312904;
    msg.p = 0.999254712839;
    msg.q = 0.363539729116;
    msg.r = 0.76247070766;
    msg.u = 0.0090300910799;
    msg.v = 0.785159259111;
    msg.w = 0.972850505145;
    msg.bias_psi = 0.290023415126;
    msg.bias_r = 0.149737547982;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationUncertainty #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.469235813406);
    msg.setSource(34400U);
    msg.setSourceEntity(51U);
    msg.setDestination(54230U);
    msg.setDestinationEntity(107U);
    msg.bias_psi = 0.322851037151;
    msg.bias_r = 0.522820298363;
    msg.cog = 0.679057285291;
    msg.cyaw = 0.105115473203;
    msg.lbl_rej_level = 0.966719647357;
    msg.gps_rej_level = 0.615138663283;
    msg.custom_x = 0.734424763007;
    msg.custom_y = 0.942025477555;
    msg.custom_z = 0.102416693153;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.322060097047);
    msg.setSource(63844U);
    msg.setSourceEntity(160U);
    msg.setDestination(62310U);
    msg.setDestinationEntity(58U);
    msg.bias_psi = 0.676287921169;
    msg.bias_r = 0.220702412667;
    msg.cog = 0.509849094029;
    msg.cyaw = 0.470389527559;
    msg.lbl_rej_level = 0.143261844933;
    msg.gps_rej_level = 0.229408160197;
    msg.custom_x = 0.29759722814;
    msg.custom_y = 0.764911320729;
    msg.custom_z = 0.99751376966;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NavigationData msg;
    msg.setTimeStamp(0.43929657964);
    msg.setSource(34950U);
    msg.setSourceEntity(86U);
    msg.setDestination(35202U);
    msg.setDestinationEntity(218U);
    msg.bias_psi = 0.00228092998427;
    msg.bias_r = 0.20529723;
    msg.cog = 0.368085616937;
    msg.cyaw = 0.654317508182;
    msg.lbl_rej_level = 0.215664696428;
    msg.gps_rej_level = 0.883551981513;
    msg.custom_x = 0.696324112787;
    msg.custom_y = 0.405606904939;
    msg.custom_z = 0.78536695676;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NavigationData #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.344080284958);
    msg.setSource(45188U);
    msg.setSourceEntity(132U);
    msg.setDestination(7994U);
    msg.setDestinationEntity(82U);
    msg.utc_time = 0.153602212959;
    msg.reason = 254U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.217906213264);
    msg.setSource(52262U);
    msg.setSourceEntity(73U);
    msg.setDestination(23251U);
    msg.setDestinationEntity(129U);
    msg.utc_time = 0.0919627967943;
    msg.reason = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GpsFixRejection msg;
    msg.setTimeStamp(0.413893167064);
    msg.setSource(22429U);
    msg.setSourceEntity(201U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(220U);
    msg.utc_time = 0.637447966779;
    msg.reason = 41U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GpsFixRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.943613396011);
    msg.setSource(41204U);
    msg.setSourceEntity(227U);
    msg.setDestination(5917U);
    msg.setDestinationEntity(37U);
    msg.id = 147U;
    msg.range = 0.123171408769;
    msg.acceptance = 14U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.152732986616);
    msg.setSource(4076U);
    msg.setSourceEntity(79U);
    msg.setDestination(18233U);
    msg.setDestinationEntity(235U);
    msg.id = 226U;
    msg.range = 0.966426326078;
    msg.acceptance = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblRangeAcceptance msg;
    msg.setTimeStamp(0.42108160201);
    msg.setSource(65147U);
    msg.setSourceEntity(231U);
    msg.setDestination(3842U);
    msg.setDestinationEntity(12U);
    msg.id = 81U;
    msg.range = 0.874867655379;
    msg.acceptance = 74U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblRangeAcceptance #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.187904720391);
    msg.setSource(48188U);
    msg.setSourceEntity(254U);
    msg.setDestination(33478U);
    msg.setDestinationEntity(231U);
    msg.type = 61U;
    msg.reason = 52U;
    msg.value = 0.925686424262;
    msg.timestep = 0.0791228148544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.836398557453);
    msg.setSource(39945U);
    msg.setSourceEntity(138U);
    msg.setDestination(3657U);
    msg.setDestinationEntity(18U);
    msg.type = 69U;
    msg.reason = 17U;
    msg.value = 0.997708258781;
    msg.timestep = 0.318761599393;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DvlRejection msg;
    msg.setTimeStamp(0.535520992804);
    msg.setSource(53168U);
    msg.setSourceEntity(30U);
    msg.setDestination(24280U);
    msg.setDestinationEntity(223U);
    msg.type = 25U;
    msg.reason = 203U;
    msg.value = 0.718738654706;
    msg.timestep = 0.659588248838;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DvlRejection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0740192262047);
    msg.setSource(33696U);
    msg.setSourceEntity(45U);
    msg.setDestination(61404U);
    msg.setDestinationEntity(234U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("QVCHGMPDLOJPUAMTPNSXPKXBMMAZDJWZRFTIBJTINILVRKVXWCDJHHAJPLGGVJXOFBBTWXYLFTWOAYPVTJBYKGZOCYZF");
    tmp_msg_0.lat = 0.81298170296;
    tmp_msg_0.lon = 0.77698976312;
    tmp_msg_0.depth = 0.64359425897;
    tmp_msg_0.query_channel = 229U;
    tmp_msg_0.reply_channel = 97U;
    tmp_msg_0.transponder_delay = 247U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.372321710699;
    msg.y = 0.478014373313;
    msg.var_x = 0.391549462745;
    msg.var_y = 0.390758916453;
    msg.distance = 0.767790391714;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.877558777217);
    msg.setSource(42096U);
    msg.setSourceEntity(148U);
    msg.setDestination(28570U);
    msg.setDestinationEntity(247U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("NZYSZOHUGRDLYTHRKFDNEEZXWNJXBOHUPRCMWPUZOIBQNVENQHKNKYKYACMHJUPFGKZHJVKLJEZZCKKXQDVBLGSLNFYJMRMDQBT");
    tmp_msg_0.lat = 0.579041669609;
    tmp_msg_0.lon = 0.100081050078;
    tmp_msg_0.depth = 0.696092116398;
    tmp_msg_0.query_channel = 89U;
    tmp_msg_0.reply_channel = 167U;
    tmp_msg_0.transponder_delay = 100U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.0155125890712;
    msg.y = 0.969511065418;
    msg.var_x = 0.0302352366496;
    msg.var_y = 0.394408127341;
    msg.distance = 0.722629682717;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LblEstimate msg;
    msg.setTimeStamp(0.0644179440184);
    msg.setSource(17929U);
    msg.setSourceEntity(91U);
    msg.setDestination(10715U);
    msg.setDestinationEntity(241U);
    IMC::LblBeacon tmp_msg_0;
    tmp_msg_0.beacon.assign("GXKDXVLFFNRQPJGQZKOVTRJRSCFFABHEHUTOKMEDNYBLMFXZVXXCSTYPOWAWFIVGLYWSPXOHTFLLEJEJCBEIMADFESNPBAHYRXGQURIUWPDVBEYERDKDTAVBGXIDBNVYQEUZOVMMJUPYUTCIJUZRUKFJIBOTKKCQYPOPDYAIEGHWKKLWAIMHYCCPBOGSQZSJTNVLWGALXH");
    tmp_msg_0.lat = 0.11933497257;
    tmp_msg_0.lon = 0.485681032291;
    tmp_msg_0.depth = 0.279887362665;
    tmp_msg_0.query_channel = 12U;
    tmp_msg_0.reply_channel = 224U;
    tmp_msg_0.transponder_delay = 62U;
    msg.beacon.set(tmp_msg_0);
    msg.x = 0.940088385426;
    msg.y = 0.150268396133;
    msg.var_x = 0.116706379552;
    msg.var_y = 0.751317012388;
    msg.distance = 0.202262714807;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LblEstimate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.508092517687);
    msg.setSource(57618U);
    msg.setSourceEntity(193U);
    msg.setDestination(20623U);
    msg.setDestinationEntity(121U);
    msg.state = 122U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.417123121621);
    msg.setSource(12943U);
    msg.setSourceEntity(85U);
    msg.setDestination(4594U);
    msg.setDestinationEntity(46U);
    msg.state = 39U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AlignmentState msg;
    msg.setTimeStamp(0.924226357255);
    msg.setSource(11562U);
    msg.setSourceEntity(191U);
    msg.setDestination(61175U);
    msg.setDestinationEntity(145U);
    msg.state = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AlignmentState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.369663152594);
    msg.setSource(60067U);
    msg.setSourceEntity(140U);
    msg.setDestination(37179U);
    msg.setDestinationEntity(25U);
    msg.x = 0.286219012034;
    msg.y = 0.520837474992;
    msg.z = 0.958946789863;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.383321389323);
    msg.setSource(59547U);
    msg.setSourceEntity(176U);
    msg.setDestination(54838U);
    msg.setDestinationEntity(135U);
    msg.x = 0.97034851156;
    msg.y = 0.10730012377;
    msg.z = 0.66599606968;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GroupStreamVelocity msg;
    msg.setTimeStamp(0.728554642042);
    msg.setSource(33413U);
    msg.setSourceEntity(201U);
    msg.setDestination(25566U);
    msg.setDestinationEntity(176U);
    msg.x = 0.61251267909;
    msg.y = 0.0359836048719;
    msg.z = 0.9555997444;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GroupStreamVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.0236304059715);
    msg.setSource(12066U);
    msg.setSourceEntity(12U);
    msg.setDestination(55160U);
    msg.setDestinationEntity(10U);
    msg.va = 0.640513689853;
    msg.aoa = 0.232121098311;
    msg.ssa = 0.431523952837;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.869317828964);
    msg.setSource(64245U);
    msg.setSourceEntity(16U);
    msg.setDestination(8314U);
    msg.setDestinationEntity(215U);
    msg.va = 0.330311515219;
    msg.aoa = 0.00133177506514;
    msg.ssa = 0.500168716796;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Airflow msg;
    msg.setTimeStamp(0.299429919043);
    msg.setSource(7472U);
    msg.setSourceEntity(122U);
    msg.setDestination(4867U);
    msg.setDestinationEntity(39U);
    msg.va = 0.43220500525;
    msg.aoa = 0.829143442429;
    msg.ssa = 0.105580997669;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Airflow #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.955561263854);
    msg.setSource(4943U);
    msg.setSourceEntity(117U);
    msg.setDestination(4782U);
    msg.setDestinationEntity(127U);
    msg.value = 0.101661184258;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.835159771982);
    msg.setSource(5533U);
    msg.setSourceEntity(170U);
    msg.setDestination(31976U);
    msg.setDestinationEntity(111U);
    msg.value = 0.143023369876;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeading msg;
    msg.setTimeStamp(0.653766481593);
    msg.setSource(17194U);
    msg.setSourceEntity(67U);
    msg.setDestination(19148U);
    msg.setDestinationEntity(127U);
    msg.value = 0.967295404558;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeading #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.629460623629);
    msg.setSource(36009U);
    msg.setSourceEntity(84U);
    msg.setDestination(19357U);
    msg.setDestinationEntity(185U);
    msg.value = 0.761348178077;
    msg.z_units = 144U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.504952280441);
    msg.setSource(42386U);
    msg.setSourceEntity(149U);
    msg.setDestination(32468U);
    msg.setDestinationEntity(89U);
    msg.value = 0.631539426333;
    msg.z_units = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredZ msg;
    msg.setTimeStamp(0.961406585698);
    msg.setSource(48837U);
    msg.setSourceEntity(149U);
    msg.setDestination(11577U);
    msg.setDestinationEntity(56U);
    msg.value = 0.446543280253;
    msg.z_units = 161U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredZ #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.263105165119);
    msg.setSource(62465U);
    msg.setSourceEntity(135U);
    msg.setDestination(53579U);
    msg.setDestinationEntity(30U);
    msg.value = 0.885351270262;
    msg.speed_units = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.653978714718);
    msg.setSource(12291U);
    msg.setSourceEntity(65U);
    msg.setDestination(22919U);
    msg.setDestinationEntity(232U);
    msg.value = 0.825485751381;
    msg.speed_units = 158U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredSpeed msg;
    msg.setTimeStamp(0.517348769738);
    msg.setSource(1516U);
    msg.setSourceEntity(109U);
    msg.setDestination(36466U);
    msg.setDestinationEntity(38U);
    msg.value = 0.57122646302;
    msg.speed_units = 46U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredSpeed #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.244909174354);
    msg.setSource(26496U);
    msg.setSourceEntity(163U);
    msg.setDestination(2573U);
    msg.setDestinationEntity(231U);
    msg.value = 0.951745761681;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.732525158525);
    msg.setSource(43505U);
    msg.setSourceEntity(38U);
    msg.setDestination(55975U);
    msg.setDestinationEntity(110U);
    msg.value = 0.703920390751;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredRoll msg;
    msg.setTimeStamp(0.679976613363);
    msg.setSource(32373U);
    msg.setSourceEntity(24U);
    msg.setDestination(45574U);
    msg.setDestinationEntity(62U);
    msg.value = 0.178881361808;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredRoll #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.420020544898);
    msg.setSource(4197U);
    msg.setSourceEntity(85U);
    msg.setDestination(36640U);
    msg.setDestinationEntity(54U);
    msg.value = 0.0281579190185;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.555757521441);
    msg.setSource(41721U);
    msg.setSourceEntity(152U);
    msg.setDestination(1662U);
    msg.setDestinationEntity(65U);
    msg.value = 0.589237619502;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPitch msg;
    msg.setTimeStamp(0.458990412258);
    msg.setSource(44899U);
    msg.setSourceEntity(92U);
    msg.setDestination(14346U);
    msg.setDestinationEntity(52U);
    msg.value = 0.488182278782;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPitch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.227385485491);
    msg.setSource(40122U);
    msg.setSourceEntity(110U);
    msg.setDestination(39614U);
    msg.setDestinationEntity(14U);
    msg.value = 0.394365566386;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.925949504701);
    msg.setSource(57622U);
    msg.setSourceEntity(142U);
    msg.setDestination(58793U);
    msg.setDestinationEntity(40U);
    msg.value = 0.569893244259;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVerticalRate msg;
    msg.setTimeStamp(0.947272330465);
    msg.setSource(43659U);
    msg.setSourceEntity(17U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(223U);
    msg.value = 0.682298568841;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVerticalRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.320754592266);
    msg.setSource(35424U);
    msg.setSourceEntity(209U);
    msg.setDestination(41055U);
    msg.setDestinationEntity(205U);
    msg.path_ref = 1070217753U;
    msg.start_lat = 0.944251666891;
    msg.start_lon = 0.26317555329;
    msg.start_z = 0.880564966535;
    msg.start_z_units = 163U;
    msg.end_lat = 0.14732718451;
    msg.end_lon = 0.617288491572;
    msg.end_z = 0.948598182238;
    msg.end_z_units = 53U;
    msg.speed = 0.86804873133;
    msg.speed_units = 100U;
    msg.lradius = 0.916648213937;
    msg.flags = 87U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.113883557234);
    msg.setSource(45852U);
    msg.setSourceEntity(38U);
    msg.setDestination(20015U);
    msg.setDestinationEntity(168U);
    msg.path_ref = 2609678494U;
    msg.start_lat = 0.123334912463;
    msg.start_lon = 0.70763664896;
    msg.start_z = 0.887396009614;
    msg.start_z_units = 96U;
    msg.end_lat = 0.686048722374;
    msg.end_lon = 0.484855951459;
    msg.end_z = 0.582753321324;
    msg.end_z_units = 146U;
    msg.speed = 0.857931868588;
    msg.speed_units = 238U;
    msg.lradius = 0.113582327951;
    msg.flags = 176U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredPath msg;
    msg.setTimeStamp(0.34218837011);
    msg.setSource(43909U);
    msg.setSourceEntity(74U);
    msg.setDestination(14863U);
    msg.setDestinationEntity(85U);
    msg.path_ref = 2574973933U;
    msg.start_lat = 0.507663713471;
    msg.start_lon = 0.413476360629;
    msg.start_z = 0.795246617794;
    msg.start_z_units = 95U;
    msg.end_lat = 0.0334979047812;
    msg.end_lon = 0.807999027656;
    msg.end_z = 0.351246539435;
    msg.end_z_units = 66U;
    msg.speed = 0.980177725818;
    msg.speed_units = 55U;
    msg.lradius = 0.461587502682;
    msg.flags = 110U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.896229673346);
    msg.setSource(47746U);
    msg.setSourceEntity(158U);
    msg.setDestination(6779U);
    msg.setDestinationEntity(225U);
    msg.x = 0.804130192088;
    msg.y = 0.652883756075;
    msg.z = 0.18317714021;
    msg.k = 0.560342167141;
    msg.m = 0.869211435223;
    msg.n = 0.235705841214;
    msg.flags = 15U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.853231993974);
    msg.setSource(57146U);
    msg.setSourceEntity(248U);
    msg.setDestination(41652U);
    msg.setDestinationEntity(247U);
    msg.x = 0.320614662738;
    msg.y = 0.899979887071;
    msg.z = 0.320465683639;
    msg.k = 0.436431944645;
    msg.m = 0.989005353926;
    msg.n = 0.497996687858;
    msg.flags = 192U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredControl msg;
    msg.setTimeStamp(0.833676662685);
    msg.setSource(41931U);
    msg.setSourceEntity(19U);
    msg.setDestination(50133U);
    msg.setDestinationEntity(0U);
    msg.x = 0.782109495426;
    msg.y = 0.700345182637;
    msg.z = 0.363933682057;
    msg.k = 0.469407210109;
    msg.m = 0.974259098301;
    msg.n = 0.255490510528;
    msg.flags = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.851707492388);
    msg.setSource(26739U);
    msg.setSourceEntity(222U);
    msg.setDestination(41451U);
    msg.setDestinationEntity(212U);
    msg.value = 0.626390310781;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.992622529995);
    msg.setSource(18452U);
    msg.setSourceEntity(92U);
    msg.setDestination(13849U);
    msg.setDestinationEntity(122U);
    msg.value = 0.73048454414;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredHeadingRate msg;
    msg.setTimeStamp(0.593572747488);
    msg.setSource(64761U);
    msg.setSourceEntity(21U);
    msg.setDestination(40032U);
    msg.setDestinationEntity(142U);
    msg.value = 0.736307470722;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredHeadingRate #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.94106726107);
    msg.setSource(30575U);
    msg.setSourceEntity(104U);
    msg.setDestination(54546U);
    msg.setDestinationEntity(215U);
    msg.u = 0.918991757654;
    msg.v = 0.0435860421598;
    msg.w = 0.700544433544;
    msg.p = 0.945601509869;
    msg.q = 0.813077194266;
    msg.r = 0.457482616664;
    msg.flags = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.691695037331);
    msg.setSource(26741U);
    msg.setSourceEntity(6U);
    msg.setDestination(50428U);
    msg.setDestinationEntity(18U);
    msg.u = 0.0192871795099;
    msg.v = 0.0610098350042;
    msg.w = 0.549063878884;
    msg.p = 0.865118709898;
    msg.q = 0.597100056633;
    msg.r = 0.838388126287;
    msg.flags = 135U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredVelocity msg;
    msg.setTimeStamp(0.936417583714);
    msg.setSource(22655U);
    msg.setSourceEntity(13U);
    msg.setDestination(7825U);
    msg.setDestinationEntity(250U);
    msg.u = 0.906866019441;
    msg.v = 0.481587373235;
    msg.w = 0.0820769363417;
    msg.p = 0.338728131186;
    msg.q = 0.837606350872;
    msg.r = 0.745683184845;
    msg.flags = 21U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredVelocity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.588258870763);
    msg.setSource(37514U);
    msg.setSourceEntity(108U);
    msg.setDestination(30747U);
    msg.setDestinationEntity(115U);
    msg.path_ref = 1500883490U;
    msg.start_lat = 0.169614417404;
    msg.start_lon = 0.0602781695069;
    msg.start_z = 0.469716876811;
    msg.start_z_units = 146U;
    msg.end_lat = 0.375388885591;
    msg.end_lon = 0.0475262603462;
    msg.end_z = 0.119766341132;
    msg.end_z_units = 216U;
    msg.lradius = 0.135411520963;
    msg.flags = 5U;
    msg.x = 0.846022431856;
    msg.y = 0.499369579802;
    msg.z = 0.663275440101;
    msg.vx = 0.972557311264;
    msg.vy = 0.167745536829;
    msg.vz = 0.908337996423;
    msg.course_error = 0.00219112566046;
    msg.eta = 27777U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.835047632268);
    msg.setSource(32471U);
    msg.setSourceEntity(222U);
    msg.setDestination(53210U);
    msg.setDestinationEntity(118U);
    msg.path_ref = 3413915657U;
    msg.start_lat = 0.250277712131;
    msg.start_lon = 0.411227150643;
    msg.start_z = 0.476760569989;
    msg.start_z_units = 220U;
    msg.end_lat = 0.923559609675;
    msg.end_lon = 0.582215255886;
    msg.end_z = 0.909959804507;
    msg.end_z_units = 170U;
    msg.lradius = 0.723447683715;
    msg.flags = 2U;
    msg.x = 0.402166633911;
    msg.y = 0.835425643535;
    msg.z = 0.653924759301;
    msg.vx = 0.120886655338;
    msg.vy = 0.992740753305;
    msg.vz = 0.880861004312;
    msg.course_error = 0.355361047875;
    msg.eta = 8282U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathControlState msg;
    msg.setTimeStamp(0.807214884649);
    msg.setSource(43279U);
    msg.setSourceEntity(207U);
    msg.setDestination(14738U);
    msg.setDestinationEntity(183U);
    msg.path_ref = 2619287412U;
    msg.start_lat = 0.458836732511;
    msg.start_lon = 0.0327529802671;
    msg.start_z = 0.902008153588;
    msg.start_z_units = 70U;
    msg.end_lat = 0.449580187455;
    msg.end_lon = 0.0335000678205;
    msg.end_z = 0.273744026721;
    msg.end_z_units = 249U;
    msg.lradius = 0.504484454753;
    msg.flags = 113U;
    msg.x = 0.219465789508;
    msg.y = 0.940792166883;
    msg.z = 0.567973349294;
    msg.vx = 0.409597701247;
    msg.vy = 0.845068323688;
    msg.vz = 0.641453654493;
    msg.course_error = 0.621957197813;
    msg.eta = 61494U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.42081297563);
    msg.setSource(43579U);
    msg.setSourceEntity(252U);
    msg.setDestination(3493U);
    msg.setDestinationEntity(111U);
    msg.k = 0.332465925557;
    msg.m = 0.483686610714;
    msg.n = 0.964088957296;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.140604841208);
    msg.setSource(48963U);
    msg.setSourceEntity(102U);
    msg.setDestination(27103U);
    msg.setDestinationEntity(199U);
    msg.k = 0.505224466527;
    msg.m = 0.962437978744;
    msg.n = 0.765138866285;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AllocatedControlTorques msg;
    msg.setTimeStamp(0.812295261991);
    msg.setSource(35695U);
    msg.setSourceEntity(229U);
    msg.setDestination(58252U);
    msg.setDestinationEntity(69U);
    msg.k = 0.76034123054;
    msg.m = 0.252208285839;
    msg.n = 0.286226699896;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AllocatedControlTorques #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.661584970711);
    msg.setSource(8580U);
    msg.setSourceEntity(227U);
    msg.setDestination(12541U);
    msg.setDestinationEntity(168U);
    msg.p = 0.894253994137;
    msg.i = 0.196806455349;
    msg.d = 0.710157246109;
    msg.a = 0.935840923994;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.693108722663);
    msg.setSource(62733U);
    msg.setSourceEntity(189U);
    msg.setDestination(45205U);
    msg.setDestinationEntity(203U);
    msg.p = 0.872936277488;
    msg.i = 0.154929268655;
    msg.d = 0.309362974872;
    msg.a = 0.526908294718;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlParcel msg;
    msg.setTimeStamp(0.732509214958);
    msg.setSource(30180U);
    msg.setSourceEntity(77U);
    msg.setDestination(20836U);
    msg.setDestinationEntity(101U);
    msg.p = 0.608903572648;
    msg.i = 0.166053673594;
    msg.d = 0.97220314153;
    msg.a = 0.0524167303277;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlParcel #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.24042527546);
    msg.setSource(53709U);
    msg.setSourceEntity(90U);
    msg.setDestination(12074U);
    msg.setDestinationEntity(203U);
    msg.op = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.964349886443);
    msg.setSource(35042U);
    msg.setSourceEntity(85U);
    msg.setDestination(18020U);
    msg.setDestinationEntity(187U);
    msg.op = 229U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Brake msg;
    msg.setTimeStamp(0.951136251639);
    msg.setSource(44731U);
    msg.setSourceEntity(208U);
    msg.setDestination(32120U);
    msg.setDestinationEntity(76U);
    msg.op = 157U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Brake #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.120721261906);
    msg.setSource(12956U);
    msg.setSourceEntity(101U);
    msg.setDestination(13040U);
    msg.setDestinationEntity(227U);
    msg.x = 0.640495170003;
    msg.y = 0.452051078393;
    msg.z = 0.881693267626;
    msg.vx = 0.0671837243345;
    msg.vy = 0.0467172551049;
    msg.vz = 0.0727562065299;
    msg.ax = 0.504011624712;
    msg.ay = 0.229969376621;
    msg.az = 0.835769372575;
    msg.flags = 25433U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.736371167971);
    msg.setSource(17574U);
    msg.setSourceEntity(25U);
    msg.setDestination(36411U);
    msg.setDestinationEntity(80U);
    msg.x = 0.454344941516;
    msg.y = 0.625446214164;
    msg.z = 0.946619947004;
    msg.vx = 0.522988334538;
    msg.vy = 0.532989447028;
    msg.vz = 0.580106066362;
    msg.ax = 0.381447617247;
    msg.ay = 0.631334976465;
    msg.az = 0.0173111665646;
    msg.flags = 48542U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredLinearState msg;
    msg.setTimeStamp(0.072162057511);
    msg.setSource(32578U);
    msg.setSourceEntity(126U);
    msg.setDestination(31917U);
    msg.setDestinationEntity(92U);
    msg.x = 0.68198304124;
    msg.y = 0.183551131184;
    msg.z = 0.409005015733;
    msg.vx = 0.747448186589;
    msg.vy = 0.377537294409;
    msg.vz = 0.430460557065;
    msg.ax = 0.993812016367;
    msg.ay = 0.610912970952;
    msg.az = 0.029815804317;
    msg.flags = 11817U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredLinearState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.116257667159);
    msg.setSource(45913U);
    msg.setSourceEntity(234U);
    msg.setDestination(51273U);
    msg.setDestinationEntity(254U);
    msg.value = 0.698257309473;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.848034234001);
    msg.setSource(4082U);
    msg.setSourceEntity(206U);
    msg.setDestination(25406U);
    msg.setDestinationEntity(78U);
    msg.value = 0.378500154452;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DesiredThrottle msg;
    msg.setTimeStamp(0.103669776638);
    msg.setSource(65307U);
    msg.setSourceEntity(62U);
    msg.setDestination(13163U);
    msg.setDestinationEntity(141U);
    msg.value = 0.739177875404;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DesiredThrottle #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.834813818345);
    msg.setSource(22676U);
    msg.setSourceEntity(103U);
    msg.setDestination(50237U);
    msg.setDestinationEntity(156U);
    msg.timeout = 62881U;
    msg.lat = 0.32854230921;
    msg.lon = 0.284412168411;
    msg.z = 0.185061167095;
    msg.z_units = 202U;
    msg.speed = 0.869140464172;
    msg.speed_units = 17U;
    msg.roll = 0.0865462604982;
    msg.pitch = 0.416840649615;
    msg.yaw = 0.900828225301;
    msg.custom.assign("NCVNMCQSFJYMICUQUJVVAEEKSXBSULRCLVKUYZMDKDFRFSBOZNNHNPAIFMZNYLSRMIBMBKWNTPGKTSQYWC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.153685412196);
    msg.setSource(57281U);
    msg.setSourceEntity(122U);
    msg.setDestination(37437U);
    msg.setDestinationEntity(130U);
    msg.timeout = 24491U;
    msg.lat = 0.752750645351;
    msg.lon = 0.739299071726;
    msg.z = 0.595235024437;
    msg.z_units = 249U;
    msg.speed = 0.399657897952;
    msg.speed_units = 204U;
    msg.roll = 0.194743946493;
    msg.pitch = 0.287922402711;
    msg.yaw = 0.13308948073;
    msg.custom.assign("JDIZGYUNTQOXKMSBMDITDVVHGNCRVJJYGILODFKKAWHDJDSUUPXJRJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Goto msg;
    msg.setTimeStamp(0.177161731357);
    msg.setSource(52628U);
    msg.setSourceEntity(157U);
    msg.setDestination(41483U);
    msg.setDestinationEntity(219U);
    msg.timeout = 16323U;
    msg.lat = 0.861664213871;
    msg.lon = 0.169275191966;
    msg.z = 0.947791365067;
    msg.z_units = 32U;
    msg.speed = 0.484298372541;
    msg.speed_units = 131U;
    msg.roll = 0.599472541766;
    msg.pitch = 0.180751445379;
    msg.yaw = 0.312605876219;
    msg.custom.assign("KUFNBEVUSTIDZSYVNPMBEJJLVGPYLOHFZQWWOCNQNPUDPNQAUGNHHYTAWQJFMWZRFYXXAQBAALZKAIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Goto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.232773443625);
    msg.setSource(18141U);
    msg.setSourceEntity(28U);
    msg.setDestination(18646U);
    msg.setDestinationEntity(216U);
    msg.timeout = 3128U;
    msg.lat = 0.798377191965;
    msg.lon = 0.685899174297;
    msg.z = 0.521507271711;
    msg.z_units = 138U;
    msg.speed = 0.955142495397;
    msg.speed_units = 151U;
    msg.duration = 24750U;
    msg.radius = 0.418299652766;
    msg.flags = 177U;
    msg.custom.assign("BRLRGZBSFWHNZCQMDQOZKGHYLUIDIVMFUTFRXMQIKLAWAGQTEBKJRVJCCDQUABVCNDXFPPQIGGNZEYLSPHDBZVCHPOXVWKXAXMVVKIUYXSLW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.641203816131);
    msg.setSource(9449U);
    msg.setSourceEntity(79U);
    msg.setDestination(7908U);
    msg.setDestinationEntity(15U);
    msg.timeout = 59644U;
    msg.lat = 0.846959077399;
    msg.lon = 0.271556334774;
    msg.z = 0.861568096075;
    msg.z_units = 178U;
    msg.speed = 0.302631717848;
    msg.speed_units = 163U;
    msg.duration = 22966U;
    msg.radius = 0.873593835312;
    msg.flags = 127U;
    msg.custom.assign("JERRYGXDUEQSAWBSYKRMZXYUVQRCHAJDDASYCFDIVTKSZWXUSLFMQOHPRENPYWNUGQZPSIWUKBMHXZEGXNZOTCPBBTFAXIGANLTNAVCQEVDESTMORYOIQTVYYYXGOUPMNJROHJTESHZPDBDNKRPVKCBKAZXFHZEPXUWEYRGIQPZVFOLILVFAOJLQGNH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopUp msg;
    msg.setTimeStamp(0.929849339328);
    msg.setSource(18506U);
    msg.setSourceEntity(56U);
    msg.setDestination(3603U);
    msg.setDestinationEntity(164U);
    msg.timeout = 33178U;
    msg.lat = 0.771295314686;
    msg.lon = 0.0590337324651;
    msg.z = 0.169790904058;
    msg.z_units = 126U;
    msg.speed = 0.614946706814;
    msg.speed_units = 229U;
    msg.duration = 1424U;
    msg.radius = 0.407034220556;
    msg.flags = 99U;
    msg.custom.assign("LKGOIGSGDCWEANJBTTNOLNKPZUXEIMKSFLKRNZNJRTJIXXMCUXZFVSUFVWAQALGJDIZSQBCLTSZDMHOYUVYPMLXCIZHFLBGFKDFXJWCMHOKRTRVLZOUBZIEEWPAZPUUCJHBRFQPCXNAGWMVYEVNYCMBPXRUYOJQWACKOJRYPXFIAQEUJOQDYWIVEBLSVSIWUYHRKTQVGXHADETJYDNBRRHFDSZQPFMGEHSK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopUp #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.235476029465);
    msg.setSource(60720U);
    msg.setSourceEntity(133U);
    msg.setDestination(45861U);
    msg.setDestinationEntity(114U);
    msg.custom.assign("ZEHPJYCWSDKPRHNYRTMJELVTKLDXUPQFVUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.781436707418);
    msg.setSource(36559U);
    msg.setSourceEntity(123U);
    msg.setDestination(30409U);
    msg.setDestinationEntity(236U);
    msg.custom.assign("LNTVWJEYUYZMSWKEKAQCULLHGMNLVFPGPTCUESQDICMSZEWARZSCNBMCSPPHPLQVGTZVBUOWCROTJKIGWJNPOHZGDRFKWBYFLEFMTVRGYRISQSDXBTVAQEZOVOKQJMOJKBZTAFLMQAWYGSXJJTYMXWYTSIQFNHFKDNSHXIZVKHAAKDNEYAJHZYDGGMCU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Teleoperation msg;
    msg.setTimeStamp(0.208656158223);
    msg.setSource(60830U);
    msg.setSourceEntity(86U);
    msg.setDestination(320U);
    msg.setDestinationEntity(75U);
    msg.custom.assign("PCZWUBDNFCWSOWSMTNUKUEBUGUFIOJJDZIECQWBBPGFRKPNLOXZBEPRDJGLYMXGHTAMAKAJBSMFYDLDCXQQSZKEWNNMQUYKFKPXKXMVRLXTOGJBBQWMQWAYYYDTNWLXZVGVIOFQIISCIIWADHYOWOTTASHCRALFNJCVULOMTLUEGERHJNJESCRIVSRTHAHOJKZSEBURDCDKPPZVXFCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Teleoperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.403488360933);
    msg.setSource(45262U);
    msg.setSourceEntity(170U);
    msg.setDestination(35896U);
    msg.setDestinationEntity(132U);
    msg.timeout = 22552U;
    msg.lat = 0.716394779078;
    msg.lon = 0.0930307702256;
    msg.z = 0.796782003491;
    msg.z_units = 12U;
    msg.duration = 58310U;
    msg.speed = 0.7011866972;
    msg.speed_units = 101U;
    msg.type = 223U;
    msg.radius = 0.906665917067;
    msg.length = 0.835810971384;
    msg.bearing = 0.120624768307;
    msg.direction = 146U;
    msg.custom.assign("WCPDMXEKFWXPHYALCBAEIOHBIXEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.553997483608);
    msg.setSource(40795U);
    msg.setSourceEntity(33U);
    msg.setDestination(65121U);
    msg.setDestinationEntity(130U);
    msg.timeout = 47837U;
    msg.lat = 0.635092662638;
    msg.lon = 0.607841014151;
    msg.z = 0.88799578561;
    msg.z_units = 104U;
    msg.duration = 62884U;
    msg.speed = 0.521780038866;
    msg.speed_units = 49U;
    msg.type = 204U;
    msg.radius = 0.732209315394;
    msg.length = 0.678622271039;
    msg.bearing = 0.122086694983;
    msg.direction = 220U;
    msg.custom.assign("POYCIXVDFKHROMOECJFKCZASSMBFQKRJLDBUUXITAUWINEPFNJUWDSMWTXJAIRBCUBKXNLYAYUNIFOPTLZYCKL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Loiter msg;
    msg.setTimeStamp(0.978727880109);
    msg.setSource(37473U);
    msg.setSourceEntity(78U);
    msg.setDestination(36772U);
    msg.setDestinationEntity(157U);
    msg.timeout = 27191U;
    msg.lat = 0.968437012879;
    msg.lon = 0.380436461941;
    msg.z = 0.13476585584;
    msg.z_units = 161U;
    msg.duration = 25098U;
    msg.speed = 0.662794003016;
    msg.speed_units = 24U;
    msg.type = 142U;
    msg.radius = 0.286107293349;
    msg.length = 0.512635406214;
    msg.bearing = 0.867829272627;
    msg.direction = 185U;
    msg.custom.assign("PTRKVRORLWVFHFPDOWYVAJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Loiter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.289664111728);
    msg.setSource(37059U);
    msg.setSourceEntity(33U);
    msg.setDestination(9776U);
    msg.setDestinationEntity(117U);
    msg.duration = 52419U;
    msg.custom.assign("NKLSBULGWANFWTUIOWJBBIOLAMVXRMAXGXQERAIFIJBGPVZMFNLPFGSWRESDYMOBQWDUCTMHYCZVWEMQYQGPSNZFEA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.207188866306);
    msg.setSource(17730U);
    msg.setSourceEntity(226U);
    msg.setDestination(20931U);
    msg.setDestinationEntity(118U);
    msg.duration = 41664U;
    msg.custom.assign("GLCDYDAJWOTHLRGMHPMZRHLOQFO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IdleManeuver msg;
    msg.setTimeStamp(0.302600109712);
    msg.setSource(54631U);
    msg.setSourceEntity(242U);
    msg.setDestination(15093U);
    msg.setDestinationEntity(154U);
    msg.duration = 45095U;
    msg.custom.assign("LMPHYGFDAEKOINYXRKRCGR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IdleManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.759879223293);
    msg.setSource(10308U);
    msg.setSourceEntity(185U);
    msg.setDestination(45368U);
    msg.setDestinationEntity(169U);
    IMC::DesiredHeading tmp_msg_0;
    tmp_msg_0.value = 0.949427352538;
    msg.control.set(tmp_msg_0);
    msg.duration = 49280U;
    msg.custom.assign("HHHGCTSKMQRVEBNOMQWAWVXEIJARPHLROXYVKDLMPTJCEHQFJNWPPTDWRIEFFCNMZQYKQWWFNXDLNGIBUDNQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.640305300781);
    msg.setSource(65366U);
    msg.setSourceEntity(251U);
    msg.setDestination(11147U);
    msg.setDestinationEntity(145U);
    IMC::DesiredPath tmp_msg_0;
    tmp_msg_0.path_ref = 3296055010U;
    tmp_msg_0.start_lat = 0.840656953117;
    tmp_msg_0.start_lon = 0.922024733363;
    tmp_msg_0.start_z = 0.783138645627;
    tmp_msg_0.start_z_units = 235U;
    tmp_msg_0.end_lat = 0.215732773769;
    tmp_msg_0.end_lon = 0.452489911003;
    tmp_msg_0.end_z = 0.542124353448;
    tmp_msg_0.end_z_units = 95U;
    tmp_msg_0.speed = 0.792208455263;
    tmp_msg_0.speed_units = 167U;
    tmp_msg_0.lradius = 0.47437877035;
    tmp_msg_0.flags = 64U;
    msg.control.set(tmp_msg_0);
    msg.duration = 9814U;
    msg.custom.assign("QGJFGBQXZJJPMEZIOFNYTNZASSVDOUTBVWYQGQEDUDMTNMQHVPBXLSIIUFXLYFTBCXGWUAZLEHRZCANOMUXHVHXGSVAKTYUYYMUJRDNAJPOWEASPQKEFWTRIYRLJKMBDEYQKLRCQIZKEWYMOTLKRLBIUHGOOSEHNHBIP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LowLevelControl msg;
    msg.setTimeStamp(0.723047680788);
    msg.setSource(47620U);
    msg.setSourceEntity(228U);
    msg.setDestination(37630U);
    msg.setDestinationEntity(196U);
    IMC::DesiredRoll tmp_msg_0;
    tmp_msg_0.value = 0.29296669166;
    msg.control.set(tmp_msg_0);
    msg.duration = 42740U;
    msg.custom.assign("PRCRZSXMMZVNHJGBMEXXEAHKHHPENTIJKLUGNNEHDWALXGZVNASMSHJOBYUYSJDMHFX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LowLevelControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.156891917668);
    msg.setSource(56983U);
    msg.setSourceEntity(216U);
    msg.setDestination(20084U);
    msg.setDestinationEntity(173U);
    msg.timeout = 8736U;
    msg.lat = 0.687170619059;
    msg.lon = 0.882639344478;
    msg.z = 0.530591772942;
    msg.z_units = 186U;
    msg.speed = 0.402239541163;
    msg.speed_units = 231U;
    msg.bearing = 0.156628845335;
    msg.cross_angle = 0.588941514583;
    msg.width = 0.789190822311;
    msg.length = 0.760894276044;
    msg.hstep = 0.42421869974;
    msg.coff = 116U;
    msg.alternation = 122U;
    msg.flags = 78U;
    msg.custom.assign("GOZFELCWZDMXYVNVEATPRHUCZDBKQWSLYPDVQCDHHIUVPCSTVUUIXYQGKMYKWOUB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.218259145051);
    msg.setSource(61972U);
    msg.setSourceEntity(49U);
    msg.setDestination(48980U);
    msg.setDestinationEntity(223U);
    msg.timeout = 20992U;
    msg.lat = 0.854859626116;
    msg.lon = 0.366987154808;
    msg.z = 0.659419913385;
    msg.z_units = 135U;
    msg.speed = 0.329109814748;
    msg.speed_units = 7U;
    msg.bearing = 0.365144052785;
    msg.cross_angle = 0.85351530278;
    msg.width = 0.488985041053;
    msg.length = 0.645537596784;
    msg.hstep = 0.547441148058;
    msg.coff = 57U;
    msg.alternation = 188U;
    msg.flags = 70U;
    msg.custom.assign("CEPEZDQLPNBZLAXKAZWETJXDVHCNBNGMZDWKGFURKJMWEEMMUNDQUEOSQGGHENWOQSSPVJWSUIPQNLRICQRONOFBKCLUJHRIEFGYIYOTXUBRSCWVFKALPKYMTPKWIFASPCEBMLWIMQGCDYVFZVXJFATXYOSLHTXTASQIJHWKWYHNQRTMXGHVEHPMDXZZXYPPJJFMBSVAGZDBYAJBOYOYIGOFLJIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Rows msg;
    msg.setTimeStamp(0.549883737875);
    msg.setSource(63338U);
    msg.setSourceEntity(55U);
    msg.setDestination(39537U);
    msg.setDestinationEntity(251U);
    msg.timeout = 5968U;
    msg.lat = 0.586677655426;
    msg.lon = 0.811182821504;
    msg.z = 0.432933803958;
    msg.z_units = 150U;
    msg.speed = 0.349560670366;
    msg.speed_units = 89U;
    msg.bearing = 0.854662399256;
    msg.cross_angle = 0.484455257704;
    msg.width = 0.525879511476;
    msg.length = 0.188712865735;
    msg.hstep = 0.957826715459;
    msg.coff = 108U;
    msg.alternation = 27U;
    msg.flags = 148U;
    msg.custom.assign("SECBYIVRNCXUUUHMQPWPRRJUHULNVHMHKMQWZLTQDLSJMSIYRQECIAYBYLGPZEVDIKXFXQTHDY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Rows #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.569957023717);
    msg.setSource(38655U);
    msg.setSourceEntity(127U);
    msg.setDestination(10351U);
    msg.setDestinationEntity(232U);
    msg.timeout = 15771U;
    msg.lat = 0.856439822645;
    msg.lon = 0.534190293089;
    msg.z = 0.608404141105;
    msg.z_units = 3U;
    msg.speed = 0.254429637815;
    msg.speed_units = 116U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.310372251139;
    tmp_msg_0.y = 0.701548969994;
    tmp_msg_0.z = 0.560020664327;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("NJAUJWJSBLKTSIHVUPAPXZFUEEYAYRJNOFUQFMSYBNXDNBUUNQROKBXXSEFOKGUBTTJCJFDVJPMMYBRIREBVMZHSEKLDLCEDXOGRPDAAZRIDLPWZCFNXSWATQALCWSHUCKZORA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.546227279244);
    msg.setSource(37580U);
    msg.setSourceEntity(216U);
    msg.setDestination(21299U);
    msg.setDestinationEntity(27U);
    msg.timeout = 42403U;
    msg.lat = 0.901673334976;
    msg.lon = 0.650619548078;
    msg.z = 0.696967016468;
    msg.z_units = 149U;
    msg.speed = 0.212426789894;
    msg.speed_units = 146U;
    IMC::PathPoint tmp_msg_0;
    tmp_msg_0.x = 0.878906291368;
    tmp_msg_0.y = 0.981113799639;
    tmp_msg_0.z = 0.702911986054;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("GFZHCKPDTDERAZRRSIEWMOUVEYDMQGYZIANQKVJKVOUIAOCQITVWEWPHFYWPWRXWJSJYENOFZBOXURGKZEWTNYJJCRJVTJPXBLFBSCBNIAPQSZMFDLDHZMKHWQAMUUVUBCYXJXTDYLHCSEXNONIIIHYACLGQHHQDTAKDNSMGUHLPCGEEMOFCXUZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPath msg;
    msg.setTimeStamp(0.897705122292);
    msg.setSource(58441U);
    msg.setSourceEntity(82U);
    msg.setDestination(59195U);
    msg.setDestinationEntity(231U);
    msg.timeout = 63272U;
    msg.lat = 0.798947755641;
    msg.lon = 0.379309819243;
    msg.z = 0.922175171346;
    msg.z_units = 133U;
    msg.speed = 0.284113390171;
    msg.speed_units = 129U;
    msg.custom.assign("RQNHOPCADCAMZBSBKYJNAPVOCTLIRWKXYKBLKJOEULMYTCETFUHBNQABCITNA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPath #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.0687469118479);
    msg.setSource(55699U);
    msg.setSourceEntity(111U);
    msg.setDestination(24588U);
    msg.setDestinationEntity(196U);
    msg.x = 0.203834304797;
    msg.y = 0.0947842660173;
    msg.z = 0.866035555757;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.083290202256);
    msg.setSource(64478U);
    msg.setSourceEntity(18U);
    msg.setDestination(49801U);
    msg.setDestinationEntity(37U);
    msg.x = 0.890852097618;
    msg.y = 0.0339228327828;
    msg.z = 0.0719733415545;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PathPoint msg;
    msg.setTimeStamp(0.803108082069);
    msg.setSource(44295U);
    msg.setSourceEntity(2U);
    msg.setDestination(29916U);
    msg.setDestinationEntity(194U);
    msg.x = 0.386531202439;
    msg.y = 0.138899395293;
    msg.z = 0.63279566013;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PathPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.358410386097);
    msg.setSource(20085U);
    msg.setSourceEntity(13U);
    msg.setDestination(30225U);
    msg.setDestinationEntity(94U);
    msg.timeout = 44249U;
    msg.lat = 0.0540493018782;
    msg.lon = 0.0387441827969;
    msg.z = 0.511459646368;
    msg.z_units = 155U;
    msg.amplitude = 0.457197218714;
    msg.pitch = 0.949371156723;
    msg.speed = 0.70320271757;
    msg.speed_units = 24U;
    msg.custom.assign("SFNAGDMEDWUWZPRAGRLCAZOBAMHYEHIBCLNQCNKCSZILTHJJTHANRBFTMYPZLPNXTSZTUNIHBLVXPLIRCSQXDDVRJPWFQWIEOTZIYCMWATAEFOFHHDPFNAFKKKKPCOVCXFOUQUSVOOZQVHYMZBJWM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.526771770109);
    msg.setSource(55045U);
    msg.setSourceEntity(20U);
    msg.setDestination(36092U);
    msg.setDestinationEntity(78U);
    msg.timeout = 53890U;
    msg.lat = 0.743302752439;
    msg.lon = 0.08155844008;
    msg.z = 0.771738885263;
    msg.z_units = 242U;
    msg.amplitude = 0.508426214731;
    msg.pitch = 0.888038936707;
    msg.speed = 0.0733215956367;
    msg.speed_units = 109U;
    msg.custom.assign("PTXVJTIWPATROMKVJHVZEVGFLBEPSNYXCOXSMCLQBASGUDQDAYUULODUJBKRHLTTGQFNLLXINCKDNNEXOVMBDQAMARDGJILWNJNDKUPHDWZUTPQWHGAASBKEBOZEMTWSXPNYCPHRMIOWKEPVTQDYKRQFPBWRGOZJOMXJBRTVOPSHIIGHMYSQCCSXUBUMUDCEZLKFYALFIHEGLMYSJCZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::YoYo msg;
    msg.setTimeStamp(0.410138445774);
    msg.setSource(25301U);
    msg.setSourceEntity(94U);
    msg.setDestination(21499U);
    msg.setDestinationEntity(69U);
    msg.timeout = 1443U;
    msg.lat = 0.458444678048;
    msg.lon = 0.202601143894;
    msg.z = 0.280620130058;
    msg.z_units = 191U;
    msg.amplitude = 0.902995999739;
    msg.pitch = 0.566457996663;
    msg.speed = 0.675557269446;
    msg.speed_units = 164U;
    msg.custom.assign("ZFDBPBZUAGWVQOLXQHPUTFHYYCZSBISCXZCJHSVXAPZPOGUULFPVTXWIEOYWFLDMGCRIVMOKNMSBHCJTJJPBVQSKUHRMWBERYROINQNKMGJOALWGHTWGOEZQFDUGXD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("YoYo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.510775623276);
    msg.setSource(47596U);
    msg.setSourceEntity(223U);
    msg.setDestination(24289U);
    msg.setDestinationEntity(197U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.591614020258);
    msg.setSource(33350U);
    msg.setSourceEntity(153U);
    msg.setDestination(53828U);
    msg.setDestinationEntity(36U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TeleoperationDone msg;
    msg.setTimeStamp(0.447802908953);
    msg.setSource(58079U);
    msg.setSourceEntity(8U);
    msg.setDestination(21926U);
    msg.setDestinationEntity(215U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TeleoperationDone #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.27534684783);
    msg.setSource(37619U);
    msg.setSourceEntity(155U);
    msg.setDestination(5442U);
    msg.setDestinationEntity(168U);
    msg.lat = 0.820038013409;
    msg.lon = 0.0752182939931;
    msg.z = 0.643279572938;
    msg.z_units = 57U;
    msg.radius = 0.254691616331;
    msg.duration = 6173U;
    msg.speed = 0.12567419864;
    msg.speed_units = 141U;
    msg.custom.assign("QMJRELDVGSTNVCBMYNWOETMTNOXAZJAIOHHSNVSGYSBQDBTBQKLDWPWXAGFWVFGRJDRAEINFZXVXRMAHCRAYUPPQHNYNDQKGUIOWZDXWIKZFVVBOXHPFTAGULUXHDQZRBZBUSILGCBLGGOXCCOMKAWISOEORYJKEWMUVVJPRLFQBZERYOFPPSF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.270832101598);
    msg.setSource(15086U);
    msg.setSourceEntity(193U);
    msg.setDestination(50476U);
    msg.setDestinationEntity(23U);
    msg.lat = 0.87455284342;
    msg.lon = 0.758739740181;
    msg.z = 0.331209329066;
    msg.z_units = 235U;
    msg.radius = 0.158110999652;
    msg.duration = 59266U;
    msg.speed = 0.764767742303;
    msg.speed_units = 159U;
    msg.custom.assign("SWOFMTOLHCQJWHSDJZBNGTVXYSHYDQXQWHTMOJPERCC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeeping msg;
    msg.setTimeStamp(0.354167473182);
    msg.setSource(29664U);
    msg.setSourceEntity(188U);
    msg.setDestination(37505U);
    msg.setDestinationEntity(2U);
    msg.lat = 0.424198696113;
    msg.lon = 0.821268617252;
    msg.z = 0.648328879501;
    msg.z_units = 202U;
    msg.radius = 0.143205425956;
    msg.duration = 467U;
    msg.speed = 0.685717418878;
    msg.speed_units = 151U;
    msg.custom.assign("XDUMGZQBAQIBKTOIBWYQECZSHQLBRLQTYTFTUZNTIJISKDRFBEOCMGYDXFNUKUMTCIFRXJAHKTWVQXVYTDFFBUWPVWNKSBOEHSRCPVWWIKRMCJZGBEHRZMSPXOMMSVLUVUEYXMACAPOQVPJGGSXNODAFNSXFWKBRPJIELTOEVIPZDUAJVLKQGOUXYOFKPHZNPLCNUHQVJEFNQECWGXWDSRJMC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeeping #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.56025208668);
    msg.setSource(38766U);
    msg.setSourceEntity(240U);
    msg.setDestination(6290U);
    msg.setDestinationEntity(81U);
    msg.timeout = 13632U;
    msg.flags = 202U;
    msg.lat = 0.211425686454;
    msg.lon = 0.651584070026;
    msg.start_z = 0.819955987575;
    msg.start_z_units = 114U;
    msg.end_z = 0.909569482164;
    msg.end_z_units = 64U;
    msg.radius = 0.134649152453;
    msg.speed = 0.678160906636;
    msg.speed_units = 135U;
    msg.custom.assign("XYHIRWBGHKCXENAUTCUIXDGMPJQMXQWDFEBVQAUVFEHBSZOSLYVLLWZJJWRITSJYQYXRLGKPOONOIEZPCVSQBFGPUHFOQYNBZYEKNSZRSVDCIMRMPCEIACCTKXBTHRICLFUWNNMPZLTLSDZJAPIJTQV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.853040537981);
    msg.setSource(54163U);
    msg.setSourceEntity(75U);
    msg.setDestination(6277U);
    msg.setDestinationEntity(139U);
    msg.timeout = 10770U;
    msg.flags = 203U;
    msg.lat = 0.859691159991;
    msg.lon = 0.325724987423;
    msg.start_z = 0.436744014839;
    msg.start_z_units = 99U;
    msg.end_z = 0.616727885272;
    msg.end_z_units = 57U;
    msg.radius = 0.455215937578;
    msg.speed = 0.341266831872;
    msg.speed_units = 171U;
    msg.custom.assign("WONHYKTZEKRCABCPTFNFORSVXXRQZADKHGWFVNGBVGFAYJMEBNUEUJVPMNZICHPWKXZUBJXPLGYMQTCKIBMQWTSSZQGLX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Elevator msg;
    msg.setTimeStamp(0.505913032233);
    msg.setSource(52710U);
    msg.setSourceEntity(60U);
    msg.setDestination(19671U);
    msg.setDestinationEntity(110U);
    msg.timeout = 4678U;
    msg.flags = 215U;
    msg.lat = 0.707402035292;
    msg.lon = 0.559802339911;
    msg.start_z = 0.976451505769;
    msg.start_z_units = 226U;
    msg.end_z = 0.8512196223;
    msg.end_z_units = 48U;
    msg.radius = 0.490289578297;
    msg.speed = 0.324668049738;
    msg.speed_units = 101U;
    msg.custom.assign("RPSCJEALOOOINEFUKQCLXYIFPZHRBHUIZHOKRFLTQPDNVVPGMMPOYNRDLMGMNAUDXHAYQALUVZXSIU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Elevator #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.250468916928);
    msg.setSource(44339U);
    msg.setSourceEntity(18U);
    msg.setDestination(48064U);
    msg.setDestinationEntity(93U);
    msg.timeout = 1380U;
    msg.lat = 0.0150800348092;
    msg.lon = 0.594831442221;
    msg.z = 0.62635619864;
    msg.z_units = 198U;
    msg.speed = 0.0853088531428;
    msg.speed_units = 251U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.297076118967;
    tmp_msg_0.y = 0.688281080954;
    tmp_msg_0.z = 0.991104035593;
    tmp_msg_0.t = 0.700083209598;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("LBMKPABMIBMKAXFWVTAUUZGWUOYXIEAVYYRJMTNSDHSZQIULPRLUPGOSXGVVLVIRCBSNJKQXZGOSMIRFTKQJMWWZCGFDSROLLZTOYHWADCIHBENGZYOQGVDJFPNWFEUFERGMTBWWRTLWUACCRLBYXJPADELCQXBNNSAKTKOCPHYXUXSQTJEDVOLRQHIIDEMFAMDXDWGECBQMTHKSXJCQHOESCJKHPJEYTZYKUHAIOZFJFHNRZPPFUKPVQND");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.546464616133);
    msg.setSource(12103U);
    msg.setSourceEntity(233U);
    msg.setDestination(6435U);
    msg.setDestinationEntity(226U);
    msg.timeout = 57336U;
    msg.lat = 0.750229790346;
    msg.lon = 0.838038086904;
    msg.z = 0.249575642846;
    msg.z_units = 3U;
    msg.speed = 0.323261912712;
    msg.speed_units = 205U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.645469775648;
    tmp_msg_0.y = 0.140757426279;
    tmp_msg_0.z = 0.497343097712;
    tmp_msg_0.t = 0.372941612954;
    msg.points.push_back(tmp_msg_0);
    msg.custom.assign("PEEEZQHMKBFKVNFGVTQQFYXYTIHSCHHRNHXQXGVZKHLQIYAZXJLLIPIWGVEBBRVLONECZRFGACBZBADWRLUIBBLMRMAONJUZPQWNBSNPVKTOKQSIOMGSYFRSEGDLIWUCZSDJGXDENTXSRUNJJAFJXUDMMHNDYAXOLTPQCKWCOYGEMLCQOFCKPTTFOGSKVHYPWSJARUWQMDDMZHIIAUWBEDLZZJPTABYPFGVCSVCKNXIFRJTU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowTrajectory msg;
    msg.setTimeStamp(0.490653630331);
    msg.setSource(51956U);
    msg.setSourceEntity(107U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(39U);
    msg.timeout = 64055U;
    msg.lat = 0.581911550707;
    msg.lon = 0.886636705098;
    msg.z = 0.897618249876;
    msg.z_units = 155U;
    msg.speed = 0.61185324893;
    msg.speed_units = 90U;
    msg.custom.assign("IZGVYNKIHVMRMFXJCLBHOLGCIEFXFUGPOOZWEDWBCIZNWKGSKESDQLKOOLRBBBMVPATEDQFRTPBKAOMXFWPCDVRSYDELLQHLMFM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowTrajectory #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.968407589597);
    msg.setSource(20101U);
    msg.setSourceEntity(193U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(234U);
    msg.x = 0.797874706785;
    msg.y = 0.17731366366;
    msg.z = 0.312486870712;
    msg.t = 0.810228042219;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.0802294913151);
    msg.setSource(62577U);
    msg.setSourceEntity(100U);
    msg.setDestination(50555U);
    msg.setDestinationEntity(142U);
    msg.x = 0.176359535182;
    msg.y = 0.656952580736;
    msg.z = 0.456714010943;
    msg.t = 0.555461025784;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrajectoryPoint msg;
    msg.setTimeStamp(0.167802455402);
    msg.setSource(9121U);
    msg.setSourceEntity(174U);
    msg.setDestination(19667U);
    msg.setDestinationEntity(190U);
    msg.x = 0.0900278776673;
    msg.y = 0.184633151541;
    msg.z = 0.233644934177;
    msg.t = 0.746929638752;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrajectoryPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.772125562491);
    msg.setSource(60429U);
    msg.setSourceEntity(230U);
    msg.setDestination(16768U);
    msg.setDestinationEntity(165U);
    msg.timeout = 18246U;
    msg.name.assign("HFVWXIOURXMSJFVDQTFEXHSZEAYCSHNGEDRDUGU");
    msg.custom.assign("GYPMOKBYOZGCBFXRZBUHJMSZMJWSSLAHBYUFTHNGQNIMOIMKBDNTIASSAJJNAWRCNIWCFKVGCCCLEKXFCWVKRVRQUSRQDUEWUZDROTULJJVHJERBKDFGILNBBEQQNQILXGQNPDVMKEAGSDTKHPPGSLYDANYHLZHGHQYPTMTZKYZMI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.71719016548);
    msg.setSource(49708U);
    msg.setSourceEntity(13U);
    msg.setDestination(37557U);
    msg.setDestinationEntity(244U);
    msg.timeout = 17905U;
    msg.name.assign("OLQLFMWDOPXVBTGZGDYSJAWMOLJMHQWVDPUMISYNKNWRYXTRNFVHNBGHUMTTDLMIHPSELVWPZSGVIBNJXBWRSKFFVBEIFOI");
    msg.custom.assign("YCETHPMIHXLUQYIEONWYAQBZQKCCPVUYPNRTTQQZDNOTAAAYDYRSLEGXPQRJAZAHEEHVJKUBACGIMFPSIILOGWJGOFJNJGNAJUJGGIWKVBCOBSHLNEFAXZDBMF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CustomManeuver msg;
    msg.setTimeStamp(0.0467245482217);
    msg.setSource(7381U);
    msg.setSourceEntity(108U);
    msg.setDestination(40382U);
    msg.setDestinationEntity(6U);
    msg.timeout = 16692U;
    msg.name.assign("JBRLXZDMWOLERBCBVLIIOYNTRZMWDWMXQPARNOPZUOQFRTTCCDKMWTZEMTYJAYLVXYNTRSYRDKVEKOFCXKBQFXENB");
    msg.custom.assign("BDPZHSNJWNBBMRPQAERRHTAECFMJJLVDRQJHSTALSHZXCBMZEQTTKFSJXIWUUOHYCRVGQZYNLLWTOVUVVIIYZPODJXOWTOIIKOMELCDCCHXKQYNWVSZBVAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CustomManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.00201999147676);
    msg.setSource(38527U);
    msg.setSourceEntity(58U);
    msg.setDestination(9868U);
    msg.setDestinationEntity(76U);
    msg.lat = 0.0501859365632;
    msg.lon = 0.251855004872;
    msg.z = 0.179320773621;
    msg.z_units = 90U;
    msg.speed = 0.361097039464;
    msg.speed_units = 157U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.839195054252;
    tmp_msg_0.y = 0.223858485386;
    tmp_msg_0.z = 0.620503765118;
    tmp_msg_0.t = 0.398790652564;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 1992U;
    tmp_msg_1.off_x = 0.621837006733;
    tmp_msg_1.off_y = 0.135655739728;
    tmp_msg_1.off_z = 0.901811905275;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.434495320048;
    msg.custom.assign("FBPFXQRLDTMPMCUEDSVFJNQUIASVWVIORMPUCJBLVXVTCMHWSHGVACIMAHFGCZNZTTAPDJBNLTKE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.315518098524);
    msg.setSource(52415U);
    msg.setSourceEntity(127U);
    msg.setDestination(59081U);
    msg.setDestinationEntity(187U);
    msg.lat = 0.235491248679;
    msg.lon = 0.940613073049;
    msg.z = 0.611699809644;
    msg.z_units = 164U;
    msg.speed = 0.197352399712;
    msg.speed_units = 160U;
    IMC::TrajectoryPoint tmp_msg_0;
    tmp_msg_0.x = 0.0004397828196;
    tmp_msg_0.y = 0.235732893253;
    tmp_msg_0.z = 0.372493963212;
    tmp_msg_0.t = 0.960843952061;
    msg.points.push_back(tmp_msg_0);
    IMC::VehicleFormationParticipant tmp_msg_1;
    tmp_msg_1.vid = 31534U;
    tmp_msg_1.off_x = 0.82756987089;
    tmp_msg_1.off_y = 0.329755967718;
    tmp_msg_1.off_z = 0.288771425468;
    msg.participants.push_back(tmp_msg_1);
    msg.start_time = 0.250390654457;
    msg.custom.assign("ONJURQSBYQAKIISNHDUQUPAHVOCBHGZQZMGNRSKEXDWIHZDTWFEXYMEBAMLCSKKPHZFNYHIVBVOYABGMITVRJFOGOHECOPCLKZSXLRJCUZMIAQBGEDI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormation msg;
    msg.setTimeStamp(0.921791813053);
    msg.setSource(35208U);
    msg.setSourceEntity(23U);
    msg.setDestination(37935U);
    msg.setDestinationEntity(183U);
    msg.lat = 0.783241193938;
    msg.lon = 0.142000406167;
    msg.z = 0.027725788096;
    msg.z_units = 185U;
    msg.speed = 0.198467638748;
    msg.speed_units = 56U;
    msg.start_time = 0.717561686658;
    msg.custom.assign("LCXEHPRVZPQZBOYLWLWAKLXTCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.818463634223);
    msg.setSource(17995U);
    msg.setSourceEntity(201U);
    msg.setDestination(10584U);
    msg.setDestinationEntity(82U);
    msg.vid = 29086U;
    msg.off_x = 0.726011506398;
    msg.off_y = 0.952977502064;
    msg.off_z = 0.761667275557;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.499775735929);
    msg.setSource(48244U);
    msg.setSourceEntity(182U);
    msg.setDestination(26119U);
    msg.setDestinationEntity(201U);
    msg.vid = 24769U;
    msg.off_x = 0.20387519673;
    msg.off_y = 0.909345710578;
    msg.off_z = 0.0840106471045;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleFormationParticipant msg;
    msg.setTimeStamp(0.0593361938281);
    msg.setSource(25894U);
    msg.setSourceEntity(94U);
    msg.setDestination(37338U);
    msg.setDestinationEntity(42U);
    msg.vid = 21009U;
    msg.off_x = 0.0470281950414;
    msg.off_y = 0.568196261598;
    msg.off_z = 0.299592403451;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleFormationParticipant #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.601319393705);
    msg.setSource(38052U);
    msg.setSourceEntity(66U);
    msg.setDestination(31175U);
    msg.setDestinationEntity(10U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.545824887692);
    msg.setSource(62373U);
    msg.setSourceEntity(143U);
    msg.setDestination(50343U);
    msg.setDestinationEntity(173U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StopManeuver msg;
    msg.setTimeStamp(0.378017795945);
    msg.setSource(19214U);
    msg.setSourceEntity(176U);
    msg.setDestination(12345U);
    msg.setDestinationEntity(237U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StopManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.836314542739);
    msg.setSource(40155U);
    msg.setSourceEntity(4U);
    msg.setDestination(20309U);
    msg.setDestinationEntity(208U);
    msg.mid = 33412U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.162853317867);
    msg.setSource(32627U);
    msg.setSourceEntity(254U);
    msg.setDestination(59130U);
    msg.setDestinationEntity(11U);
    msg.mid = 7918U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RegisterManeuver msg;
    msg.setTimeStamp(0.340326096745);
    msg.setSource(34936U);
    msg.setSourceEntity(204U);
    msg.setDestination(40709U);
    msg.setDestinationEntity(7U);
    msg.mid = 4707U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RegisterManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.420939739575);
    msg.setSource(17730U);
    msg.setSourceEntity(222U);
    msg.setDestination(5384U);
    msg.setDestinationEntity(178U);
    msg.state = 16U;
    msg.eta = 49313U;
    msg.info.assign("DBOTYQFRXROVNATPHJDURCKLQTRBIGWKTUZFZBBRPWHIZHXDQLKMJLVBPCLUPRHWEUDITOIBDQAMYPAEOFQZYTNOZXZFVKSKIJZAXRNFKWLJHUHMPNWEDYXICPUOAMGRJCXLIFZJVPBDESGSSCOEFSHWTAMXSVSVGMQPGOZJSYTFAYCEDASLCUXCUYKCAUGILNZOYWRJLUPMMEMIIQVEBBTK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.615319323045);
    msg.setSource(62027U);
    msg.setSourceEntity(167U);
    msg.setDestination(59612U);
    msg.setDestinationEntity(68U);
    msg.state = 228U;
    msg.eta = 4245U;
    msg.info.assign("BWTNWKKUSXXYVEBMOIHHMGGVBCWXYOKIOALJXIRMQHVBSOZPKISKZNJUKCEPLUZZSFTGCTGPULNRJGJOYCMMVKTPDAJVQFWXFSBNMFZPDXHDJLEQHUVDEGBFHRPWHURWAETUAYYAXICKDXWEQHMTDRVQTLRKH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ManeuverControlState msg;
    msg.setTimeStamp(0.492071458661);
    msg.setSource(59089U);
    msg.setSourceEntity(93U);
    msg.setDestination(10690U);
    msg.setDestinationEntity(142U);
    msg.state = 143U;
    msg.eta = 63830U;
    msg.info.assign("ZKZPLDVMLKOIOJYQEITRCGRSXZBMCHWNSWPNXULOGZOQWYGDDFXHGOTZXTMTCCTQHEMWNSVUQQVBDSUMXYMAJIZQSBIYRSHHCRXFOHUBNBLXFUVBNUJDFPKEMVFWIQFSHDOYEUIMYSBPKZAKDVYZFZSBJFYHEOKTWFGGRNPW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ManeuverControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.454875361992);
    msg.setSource(63913U);
    msg.setSourceEntity(3U);
    msg.setDestination(26676U);
    msg.setDestinationEntity(219U);
    msg.system = 45316U;
    msg.duration = 31654U;
    msg.speed = 0.654118584743;
    msg.speed_units = 31U;
    msg.x = 0.499777580102;
    msg.y = 0.564460920377;
    msg.z = 0.389707349993;
    msg.z_units = 94U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.84223976331);
    msg.setSource(20766U);
    msg.setSourceEntity(31U);
    msg.setDestination(31301U);
    msg.setDestinationEntity(101U);
    msg.system = 28103U;
    msg.duration = 21194U;
    msg.speed = 0.611950677847;
    msg.speed_units = 56U;
    msg.x = 0.206295993975;
    msg.y = 0.624271974382;
    msg.z = 0.484251134339;
    msg.z_units = 235U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowSystem msg;
    msg.setTimeStamp(0.0345238060036);
    msg.setSource(18268U);
    msg.setSourceEntity(37U);
    msg.setDestination(16699U);
    msg.setDestinationEntity(23U);
    msg.system = 20268U;
    msg.duration = 19647U;
    msg.speed = 0.798181202502;
    msg.speed_units = 31U;
    msg.x = 0.618351519202;
    msg.y = 0.463248576564;
    msg.z = 0.893117735931;
    msg.z_units = 234U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowSystem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.261627046822);
    msg.setSource(21269U);
    msg.setSourceEntity(253U);
    msg.setDestination(61081U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.894746223035;
    msg.lon = 0.334646330893;
    msg.speed = 0.267417048879;
    msg.speed_units = 49U;
    msg.duration = 28154U;
    msg.sys_a = 56658U;
    msg.sys_b = 42936U;
    msg.move_threshold = 0.0719155445827;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.509252631877);
    msg.setSource(21168U);
    msg.setSourceEntity(87U);
    msg.setDestination(39627U);
    msg.setDestinationEntity(22U);
    msg.lat = 0.105715524157;
    msg.lon = 0.157579790695;
    msg.speed = 0.282885440561;
    msg.speed_units = 20U;
    msg.duration = 26118U;
    msg.sys_a = 61325U;
    msg.sys_b = 47474U;
    msg.move_threshold = 0.368974405921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CommsRelay msg;
    msg.setTimeStamp(0.285582848347);
    msg.setSource(65268U);
    msg.setSourceEntity(186U);
    msg.setDestination(48061U);
    msg.setDestinationEntity(223U);
    msg.lat = 0.399022820625;
    msg.lon = 0.620078469711;
    msg.speed = 0.369151034472;
    msg.speed_units = 52U;
    msg.duration = 62292U;
    msg.sys_a = 12940U;
    msg.sys_b = 19263U;
    msg.move_threshold = 0.851732528244;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CommsRelay #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.59145351479);
    msg.setSource(57852U);
    msg.setSourceEntity(134U);
    msg.setDestination(25303U);
    msg.setDestinationEntity(24U);
    msg.lat = 0.698556031155;
    msg.lon = 0.302824954937;
    msg.z = 0.238469668524;
    msg.z_units = 151U;
    msg.speed = 0.606791564163;
    msg.speed_units = 50U;
    msg.custom.assign("IEHTXASOHUCXQURSGHQJNZNNTTTASMCDFGOTWQHZHVDPPBBRKLNHCYPMMCYCLFOKHODKNUPPKSQDGLNKZAUZEJQSXAQUHHPTS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.121692145201);
    msg.setSource(49989U);
    msg.setSourceEntity(24U);
    msg.setDestination(44963U);
    msg.setDestinationEntity(172U);
    msg.lat = 0.808242726811;
    msg.lon = 0.134013138297;
    msg.z = 0.168861710887;
    msg.z_units = 68U;
    msg.speed = 0.785302303816;
    msg.speed_units = 30U;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.602167443504;
    tmp_msg_0.lon = 0.590601611559;
    msg.polygon.push_back(tmp_msg_0);
    msg.custom.assign("BPPDMBJKNRFILSVRXVKOVFCXSKKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CoverArea msg;
    msg.setTimeStamp(0.0444317485548);
    msg.setSource(4876U);
    msg.setSourceEntity(171U);
    msg.setDestination(48589U);
    msg.setDestinationEntity(241U);
    msg.lat = 0.853199838782;
    msg.lon = 0.824308817478;
    msg.z = 0.462696417924;
    msg.z_units = 155U;
    msg.speed = 0.777285161726;
    msg.speed_units = 49U;
    msg.custom.assign("ENPYAFCRBTPFGINXNHONTQWDGAULLOWNYZIIOFASIWOCXVHLUYPJHLDMBGSHEFYHTJEVLKQJYCWJTXYXQVMBWZEISMKMZADLRMWYCZNBTGRSCBSDAHHUJXACPQEVNPRGKEYPDOWFFUAIKBDVXQDGEUZBGRPCCVRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CoverArea #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.57514575608);
    msg.setSource(33147U);
    msg.setSourceEntity(113U);
    msg.setDestination(16201U);
    msg.setDestinationEntity(72U);
    msg.lat = 0.770150760359;
    msg.lon = 0.870987901734;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.246957731638);
    msg.setSource(29564U);
    msg.setSourceEntity(168U);
    msg.setDestination(18927U);
    msg.setDestinationEntity(157U);
    msg.lat = 0.502793424352;
    msg.lon = 0.00501322363778;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PolygonVertex msg;
    msg.setTimeStamp(0.685027631024);
    msg.setSource(62876U);
    msg.setSourceEntity(230U);
    msg.setDestination(10028U);
    msg.setDestinationEntity(9U);
    msg.lat = 0.769972847895;
    msg.lon = 0.408240707498;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PolygonVertex #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.275718836199);
    msg.setSource(23880U);
    msg.setSourceEntity(162U);
    msg.setDestination(45216U);
    msg.setDestinationEntity(236U);
    msg.timeout = 46385U;
    msg.lat = 0.784867622953;
    msg.lon = 0.91021948033;
    msg.z = 0.962873536686;
    msg.z_units = 47U;
    msg.pitch = 0.27505449872;
    msg.amplitude = 0.0128877527245;
    msg.duration = 29137U;
    msg.speed = 0.130059862503;
    msg.speed_units = 71U;
    msg.radius = 0.222149340032;
    msg.direction = 112U;
    msg.custom.assign("HPPFJOLEYNMKNCADXIOGBPVBRIWYIQJXCCWVREOBQZKUQKJQJDAKGVBHRLYGZWUPCBCMJJTLOURTONSPOSSARUBLNIVYMXEAUSRJVWFZNAQCHEYJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.0178824542551);
    msg.setSource(45905U);
    msg.setSourceEntity(79U);
    msg.setDestination(42503U);
    msg.setDestinationEntity(235U);
    msg.timeout = 1272U;
    msg.lat = 0.097832276123;
    msg.lon = 0.808473669085;
    msg.z = 0.43446289767;
    msg.z_units = 133U;
    msg.pitch = 0.307409726467;
    msg.amplitude = 0.710517956766;
    msg.duration = 53333U;
    msg.speed = 0.822595031639;
    msg.speed_units = 93U;
    msg.radius = 0.465136316332;
    msg.direction = 19U;
    msg.custom.assign("GKCIFTVPOTLZWGXKKUDGNSKBBHWJIJXOXPUMKXONLCAEQDILVCVRBWQYJIQGQHWJNLIAHHWEXQMAJMZCQVMXUAPXIATLNPRCPLKYZUBIJJMDFTSNXHRDYNYPKNHFRAGQFEOURQKESUZWTDQSHFOWVTDJGSJGYPTVKCRFFZBGCHXOANIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompassCalibration msg;
    msg.setTimeStamp(0.369909869691);
    msg.setSource(33279U);
    msg.setSourceEntity(211U);
    msg.setDestination(528U);
    msg.setDestinationEntity(144U);
    msg.timeout = 8571U;
    msg.lat = 0.270322520197;
    msg.lon = 0.537652623413;
    msg.z = 0.436038547996;
    msg.z_units = 124U;
    msg.pitch = 0.834463044663;
    msg.amplitude = 0.61639495221;
    msg.duration = 50968U;
    msg.speed = 0.154014631541;
    msg.speed_units = 63U;
    msg.radius = 0.667703259497;
    msg.direction = 71U;
    msg.custom.assign("YXKXTMIBYYXUHJSSFXWTVFNXKGFBGFVHOYXLTFPASKAMDTHNEUAJWZOKLLDHPJNHURFRHXHXWLZGQNZYERWVEUXIBJISLMUMJBIQIDVUKBYMPKGPZQOKOVBOBFAIFZVNAPAOECWWMLWCDIOJZCCSKSAGTVDUPHGUGQQDPBATUEMMQWYOAYGPKJPLERVSDWGMP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompassCalibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.79308802464);
    msg.setSource(7043U);
    msg.setSourceEntity(18U);
    msg.setDestination(59976U);
    msg.setDestinationEntity(103U);
    msg.formation_name.assign("GWVTLJAHFAGDRZYBWIXKUDRLMTYIFRDZXVZPQSNJFLELUCLUQXZAXRSLCHYVVMHNZGPAAFWCDCDJNSKYGHIYAKTDMLCEVVKTTBZXCOMONVVBPMWRYUQQDXBBATNSFKLWMXUQRUEJGARIETFZISEQFSBPJWIURNKOSSUOCQ");
    msg.reference_frame = 201U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 17601U;
    tmp_msg_0.off_x = 0.0883257237773;
    tmp_msg_0.off_y = 0.951101201296;
    tmp_msg_0.off_z = 0.746782207528;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("BFSYRSBTDDAAVJVWPXQHNMUUPZSFYYEISZUFEZUHZTWCASEZMVLNRAFYCQMKAULHWGMOBGPXXJFCZTJTRBOKOKGRMPIUTFLXOBNRASHWSGITLBUBWTECPOBLDGJRXIXIQJCYQODMRWCECISBHWGVVGEHJMUSGEHMDXYAVTGPNDBPNVWOORIMZNLOKIUAVSWEXLDDWGMKKQNQZFJTVTJCYQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.714037715387);
    msg.setSource(64529U);
    msg.setSourceEntity(240U);
    msg.setDestination(40877U);
    msg.setDestinationEntity(30U);
    msg.formation_name.assign("NMYJYHAKRGESCUYWHSJIDKRPICQFLGQRJVHXUHUYZDVAEWNQCDAWRWPXOOXPZQSKBGIARMZIIEMNMLLMZBRKZADZMBXUFOTWNEWMJVPZOUJRFTQJIVHCQNDGUCYPBGYOBWSFDLGCMBTGTYXFVHDQTWYUGELNAHIIYFVINVCTHABHDMSESBUVWLCXB");
    msg.reference_frame = 168U;
    IMC::VehicleFormationParticipant tmp_msg_0;
    tmp_msg_0.vid = 6295U;
    tmp_msg_0.off_x = 0.0455795509641;
    tmp_msg_0.off_y = 0.126313181308;
    tmp_msg_0.off_z = 0.843327578476;
    msg.participants.push_back(tmp_msg_0);
    msg.custom.assign("VJSMUKDAVMSBSNBSUJTUWSMXUXVRSGSZQWRINTCVAGULHFDEIMIQLVOKAFFPNXHZMYGWTMTDAGRQYYFBLGQKYJJWTZAKEQGQSPKYYCFWEPAWMFFTPRCDREWBHHHFPFOHXBGRHSHMGHWIBXDIJPHBCKDXFXLPLVNPXTDCEIKROKNEUKZVCCLOBLCBENOEOCTEUJXZGN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationParameters msg;
    msg.setTimeStamp(0.229650761661);
    msg.setSource(56804U);
    msg.setSourceEntity(215U);
    msg.setDestination(19315U);
    msg.setDestinationEntity(70U);
    msg.formation_name.assign("MQWRYAMVEDLUSJRJTBNAERMLUDMSXPDUOPXBBDJBZAEBQQMHOCWQGVAIWPOKGLBVQHXNWTVVFBYZFLNHRZISRWNOZP");
    msg.reference_frame = 99U;
    msg.custom.assign("SUURKVPFNBFVJGYTQMDKOJXBWIEISLMDAYSBGMUJJONBFPAKCGBHEIOZEQLMSKNRKECPJQGMDRELXHWTFMPUXIISMOTCCCGLQZZEVZQVHTSGICOJPWVQRYFYIFFZXKTXYJRNPVSRHAOWKQPTVHLXHATGUBBHRDTAYYIQCDBCNZWNQPVUAHFVCEBXMSXHGDWJNRPNDRPSZXNUYKFIYLKWZKELUJQDAUZIHFELJGTEWBDXGDLMZAVWONURAMYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.483371885791);
    msg.setSource(34514U);
    msg.setSourceEntity(56U);
    msg.setDestination(25777U);
    msg.setDestinationEntity(252U);
    msg.group_name.assign("AFHDUFMIEPTRMZKWHCGSFHGPTWQUBOTAYIVOGWBXNSDREIIMFFWTBRPYMVDRTUXWRDIJOJBGJFTZIOVJUWYTGETMAATHLNXUOLSPLYMCXGASKDOCSCNZRQUNRNFROBEMBUKLJBOKJKZBNNHVSABAHZLDWPQXCWEQGCXHUSYPQDJBIRHFYNAVVENUMSVXQHKYFCCFRMQLETVLYGLCWKXKEEUZYACJPZGAPXNXS");
    msg.formation_name.assign("DCJNJZVCRPMCZIUKYLGPQSDCETUGVSCAANFZZMFXGRHKQVNAOMANMRQZQIHATPHAIRYOYUGFVKFTPQQPFLNDDNFCBWAOXXDCPLKZBGBGDKLWUFXLSXDKJZXWPEBOBLZHWYQNUSQNQEXITEGJHXJRJYSWJBVAVLUTMHLSDEKWWWRJHYOEMUMERU");
    msg.plan_id.assign("QVMVGGGSVDSFFANIWMNKZBMONEJSS");
    msg.description.assign("QXSTSCAEOSJDSGEXCTNAWYINALEIBTFIGJOKMZCVRRRVKFEVHGVJWWUSUHSSDBKDVWJTIRHHTKKBVYYTPJYFDCMMPKXNPBGVWLLCPXDYZDFFZOTVCUZSNNKNMWNQHXVUFLGRYPYQPZOFMMONSARQDUCZXRAOGLWRETFJQILCEHIABWFPTXOZIBRJYHMDGQHKQLUJMOOXJQAGWXYHUEAW");
    msg.leader_speed = 0.713991738472;
    msg.leader_bank_lim = 0.478741731595;
    msg.pos_sim_err_lim = 0.746010557088;
    msg.pos_sim_err_wrn = 0.144358163621;
    msg.pos_sim_err_timeout = 33009U;
    msg.converg_max = 0.989691637763;
    msg.converg_timeout = 9709U;
    msg.comms_timeout = 13724U;
    msg.turb_lim = 0.605917326072;
    msg.custom.assign("ABHSEFZFPBSUUSQQEOHRIUXNWTMEPPFZQXDRYRYRLUSWVPWCTLJDYFEOZWQZVJOGEUTNSSCZIRMHDCI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.237986727975);
    msg.setSource(30607U);
    msg.setSourceEntity(76U);
    msg.setDestination(51755U);
    msg.setDestinationEntity(205U);
    msg.group_name.assign("PRHPRNOQFSVUDIFCLLGCHKEVIZMMMXREYUPXGFSJZKPBWLLCTDUGGJNLWKVDOHVYXUQVEPUR");
    msg.formation_name.assign("OINWOOJQRZNTJEUSOYQPRTWKDMJRRABXZTLWCJLPIUVGYHEMMFUXMRVSWLZLH");
    msg.plan_id.assign("PLNRJSDEDEABCANHCYIILYCOGVDKFMSKVCEZWIDBXARVYWDJMBHCOVZXQXODJCWGMURVONUKSJ");
    msg.description.assign("AUZDVBFUPXIUESXEFSJZQSZYGRDQQQTZJAMWRXYLOGMDNCBIOMLZHGWZBGIJTLVSAFPUMYFYBICURNJLWMEARJTHXYBVQVAIUWTCFRCLKSVHHZOFASDCUJFXQEMPCDPKXZLNILOEQYBVKBCNZGEDMIXRWUIXGLCHNKFDWGAVNKWAAWBHQJYKDHYKWNDDCIFJGSRKHBPVERHOJKFEMRRSXPOXLONANVNTJQPTYGYQOTOZPSTKBHLITM");
    msg.leader_speed = 0.243694537775;
    msg.leader_bank_lim = 0.400649970143;
    msg.pos_sim_err_lim = 0.602463958926;
    msg.pos_sim_err_wrn = 0.999914858232;
    msg.pos_sim_err_timeout = 29969U;
    msg.converg_max = 0.25688863811;
    msg.converg_timeout = 31835U;
    msg.comms_timeout = 55337U;
    msg.turb_lim = 0.710003848036;
    msg.custom.assign("AMJALPIVQHMILNCVHZGXGTISWLLUALSIOTQGAWVCATGFKMEWRXACILUINZRWZNJBWLOPYVBGBNPVWWKNKOTFFNMYRGKUKBPCGYBCIANSYDVQNPPRFEREIPODCSXWZSCOMTVHQKBZFJZVVJHCUYTUQJSDUXESTIHUXJKASXOBPHJOFYNKEMROZZKDVAOMSETHSMZFQTRQRFUEODEQMFDRALERYBJXYMZPYDP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationPlanExecution msg;
    msg.setTimeStamp(0.836249325441);
    msg.setSource(35825U);
    msg.setSourceEntity(129U);
    msg.setDestination(46200U);
    msg.setDestinationEntity(251U);
    msg.group_name.assign("PAFPIWSKNINVRBCBIMJLDZTHVQNMSDCWOGVENXRZWUTDWXTDGHTFLFFFZXXYJHKGICLIOXBKRUVISGARZKRUWIJVQFNGHUKYYYEPNYJOQYUBPHSIMYAPRZLQHOKOIZAQVMLJEBAUQMXSTNVLFOZKKWNGBCOWTCCDUSEKCEEDHMOXZAHXJQDTGFAUTSSEKPOQPNERVBSEBYDLGHPFDXCBZMYUIFRVZWNQELTOTARHRXQBULJVLCJMWJW");
    msg.formation_name.assign("MUUVAJDNTXOPRIRHBWJTIMLDMTPGAPWUBEDBXHYKLAYIPEJVAJHSKNZEMICVAAWZRNBBEMRREXKZNVBUHCGGVVZXEDLKXYSCYUPSPHIQEIKNMGJDPQFMOIFCJQPFXCBLCTQWOLPEGBFWLALUZQKTTNOVZSFHHLVKQQCVIYRCLFFEVQUDBOFLKRMDSGXOJGPIGUNDUXACGHSQRYISZWYJWNROJCXONZWYAFHMTAXSJWDHSEFTTBYKNQOSD");
    msg.plan_id.assign("HLAMFPGOBVJHSJJNABIQFHPTDSMPPAYTIXLSAASVXWUOUWYIGGCTASRFHJZUYHYMMSDZEULLNDCPBIMKBQLLBJTNOQIOFCREZQNJEYCPIYPRXIIUCREDTDXQUYTO");
    msg.description.assign("CUZBUJBWSDRIWZZMQPPWDZDLHIEXWTODHYPIYVIBACHAPAUGENUKKLLKLMSARNGDNADEGOVQXIMHOXTHSQFJWCFBHWSFBERSJMPYBOMJOVNJCPLOVNTFSXCAIRSRHAGOVDYYRCPGXFBIYSOZEQKEIWLFQCMXIDNZXGKQBHWMLZHKTUALZLOKZNLKXXMEWYRFMNGGEKUNQTHVUPZQIVKYGUOBTJTCJCAJYVFJUYEBRWJVXATFPPSVTFC");
    msg.leader_speed = 0.0529198037413;
    msg.leader_bank_lim = 0.552081367267;
    msg.pos_sim_err_lim = 0.984967595933;
    msg.pos_sim_err_wrn = 0.0919878126564;
    msg.pos_sim_err_timeout = 19447U;
    msg.converg_max = 0.27665693013;
    msg.converg_timeout = 37123U;
    msg.comms_timeout = 5605U;
    msg.turb_lim = 0.0752919851372;
    msg.custom.assign("VBRJYRNMFKTMNQWVGWPTUAUZODMYJAQNJJRGUZILPUABMOMSFVEAJCUPBXOEZXYQCIZBNRIDOVYNYGGSMGQJATPCIVKEDLXLVQLSYBEFORNMHGZQCYWDKVMKTCYUQID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationPlanExecution #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.502184954552);
    msg.setSource(56080U);
    msg.setSourceEntity(79U);
    msg.setDestination(26736U);
    msg.setDestinationEntity(121U);
    msg.control_src = 53459U;
    msg.control_ent = 101U;
    msg.timeout = 0.527300257001;
    msg.loiter_radius = 0.926578193713;
    msg.altitude_interval = 0.427512492279;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.968241351625);
    msg.setSource(47235U);
    msg.setSourceEntity(2U);
    msg.setDestination(60173U);
    msg.setDestinationEntity(217U);
    msg.control_src = 57647U;
    msg.control_ent = 3U;
    msg.timeout = 0.274237718361;
    msg.loiter_radius = 0.559531917667;
    msg.altitude_interval = 0.99195357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowReference msg;
    msg.setTimeStamp(0.735277534574);
    msg.setSource(9824U);
    msg.setSourceEntity(88U);
    msg.setDestination(16646U);
    msg.setDestinationEntity(86U);
    msg.control_src = 7694U;
    msg.control_ent = 245U;
    msg.timeout = 0.188241799179;
    msg.loiter_radius = 0.223384419357;
    msg.altitude_interval = 0.89460090357;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowReference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.427785705024);
    msg.setSource(11524U);
    msg.setSourceEntity(148U);
    msg.setDestination(8930U);
    msg.setDestinationEntity(44U);
    msg.flags = 72U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.0588910896252;
    tmp_msg_0.speed_units = 22U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.378060732785;
    tmp_msg_1.z_units = 123U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.916515886678;
    msg.lon = 0.555339528206;
    msg.radius = 0.750280542086;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.365363002936);
    msg.setSource(56153U);
    msg.setSourceEntity(239U);
    msg.setDestination(29821U);
    msg.setDestinationEntity(83U);
    msg.flags = 118U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.708190081028;
    tmp_msg_0.speed_units = 183U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.202194927025;
    tmp_msg_1.z_units = 125U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.700061988729;
    msg.lon = 0.112704692377;
    msg.radius = 0.200638030391;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Reference msg;
    msg.setTimeStamp(0.337105957575);
    msg.setSource(39538U);
    msg.setSourceEntity(94U);
    msg.setDestination(47275U);
    msg.setDestinationEntity(189U);
    msg.flags = 39U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.783235269064;
    tmp_msg_0.speed_units = 144U;
    msg.speed.set(tmp_msg_0);
    IMC::DesiredZ tmp_msg_1;
    tmp_msg_1.value = 0.294618730388;
    tmp_msg_1.z_units = 149U;
    msg.z.set(tmp_msg_1);
    msg.lat = 0.429821505764;
    msg.lon = 0.979256558927;
    msg.radius = 0.355786236746;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Reference #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.195007859084);
    msg.setSource(15458U);
    msg.setSourceEntity(195U);
    msg.setDestination(32095U);
    msg.setDestinationEntity(51U);
    msg.control_src = 22766U;
    msg.control_ent = 38U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 115U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.716149876261;
    tmp_tmp_msg_0_0.speed_units = 2U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.863181687842;
    tmp_tmp_msg_0_1.z_units = 224U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.617251028397;
    tmp_msg_0.lon = 0.287707997794;
    tmp_msg_0.radius = 0.539130111194;
    msg.reference.set(tmp_msg_0);
    msg.state = 181U;
    msg.proximity = 147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.441357054903);
    msg.setSource(32569U);
    msg.setSourceEntity(188U);
    msg.setDestination(36577U);
    msg.setDestinationEntity(14U);
    msg.control_src = 20267U;
    msg.control_ent = 53U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 90U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.265325125239;
    tmp_tmp_msg_0_0.speed_units = 118U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.252514664261;
    tmp_tmp_msg_0_1.z_units = 203U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.150227628509;
    tmp_msg_0.lon = 0.448349616146;
    tmp_msg_0.radius = 0.434876089633;
    msg.reference.set(tmp_msg_0);
    msg.state = 100U;
    msg.proximity = 153U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowRefState msg;
    msg.setTimeStamp(0.663915771445);
    msg.setSource(59552U);
    msg.setSourceEntity(99U);
    msg.setDestination(23593U);
    msg.setDestinationEntity(10U);
    msg.control_src = 61929U;
    msg.control_ent = 69U;
    IMC::Reference tmp_msg_0;
    tmp_msg_0.flags = 59U;
    IMC::DesiredSpeed tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.173685525268;
    tmp_tmp_msg_0_0.speed_units = 158U;
    tmp_msg_0.speed.set(tmp_tmp_msg_0_0);
    IMC::DesiredZ tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.value = 0.64370212731;
    tmp_tmp_msg_0_1.z_units = 177U;
    tmp_msg_0.z.set(tmp_tmp_msg_0_1);
    tmp_msg_0.lat = 0.806297883594;
    tmp_msg_0.lon = 0.194742441749;
    tmp_msg_0.radius = 0.0650427534656;
    msg.reference.set(tmp_msg_0);
    msg.state = 67U;
    msg.proximity = 186U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowRefState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.981694435722);
    msg.setSource(18466U);
    msg.setSourceEntity(66U);
    msg.setDestination(46558U);
    msg.setDestinationEntity(98U);
    msg.ax_cmd = 0.192507308457;
    msg.ay_cmd = 0.575860252198;
    msg.az_cmd = 0.60164840235;
    msg.ax_des = 0.660291576118;
    msg.ay_des = 0.299503866132;
    msg.az_des = 0.23826545563;
    msg.virt_err_x = 0.969867514717;
    msg.virt_err_y = 0.124893148605;
    msg.virt_err_z = 0.446750954577;
    msg.surf_fdbk_x = 0.247011066336;
    msg.surf_fdbk_y = 0.00167134544399;
    msg.surf_fdbk_z = 0.389881082679;
    msg.surf_unkn_x = 0.350990620977;
    msg.surf_unkn_y = 0.498524208782;
    msg.surf_unkn_z = 0.876311062051;
    msg.ss_x = 0.444532412264;
    msg.ss_y = 0.648164090794;
    msg.ss_z = 0.0446858013604;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("ATOKHAYWICJYZTYQUGSZQMXVWFEMIYGJLXJXFVBPSKAUCKOVFZGRGOBAEDBCPMRSPOCUQUVBCQSFTJAQZWTNUHPWGITIVCEWPVCFHQLLQVCAFMDGQGSIOHRFPDIXYYVEKDEAVMWNTKYMIOTHUK");
    tmp_msg_0.dist = 0.258191000145;
    tmp_msg_0.err = 0.280060070475;
    tmp_msg_0.ctrl_imp = 0.770663793077;
    tmp_msg_0.rel_dir_x = 0.00257431305978;
    tmp_msg_0.rel_dir_y = 0.18957376854;
    tmp_msg_0.rel_dir_z = 0.617085089517;
    tmp_msg_0.err_x = 0.0130848527723;
    tmp_msg_0.err_y = 0.92994962387;
    tmp_msg_0.err_z = 0.165034036819;
    tmp_msg_0.rf_err_x = 0.175112365269;
    tmp_msg_0.rf_err_y = 0.907285309407;
    tmp_msg_0.rf_err_z = 0.64060008868;
    tmp_msg_0.rf_err_vx = 0.237085051996;
    tmp_msg_0.rf_err_vy = 0.750438322712;
    tmp_msg_0.rf_err_vz = 0.581194570923;
    tmp_msg_0.ss_x = 0.455859881693;
    tmp_msg_0.ss_y = 0.617117103169;
    tmp_msg_0.ss_z = 0.707267620829;
    tmp_msg_0.virt_err_x = 0.43863061088;
    tmp_msg_0.virt_err_y = 0.649468765653;
    tmp_msg_0.virt_err_z = 0.514143305002;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.24848676178);
    msg.setSource(60543U);
    msg.setSourceEntity(143U);
    msg.setDestination(6353U);
    msg.setDestinationEntity(55U);
    msg.ax_cmd = 0.617790296705;
    msg.ay_cmd = 0.36396484473;
    msg.az_cmd = 0.959978133027;
    msg.ax_des = 0.546852393062;
    msg.ay_des = 0.0918713332175;
    msg.az_des = 0.552506617115;
    msg.virt_err_x = 0.0682284186565;
    msg.virt_err_y = 0.94260395101;
    msg.virt_err_z = 0.189287409443;
    msg.surf_fdbk_x = 0.525786624523;
    msg.surf_fdbk_y = 0.322739076645;
    msg.surf_fdbk_z = 0.391814430767;
    msg.surf_unkn_x = 0.703908020299;
    msg.surf_unkn_y = 0.89945875082;
    msg.surf_unkn_z = 0.442940294423;
    msg.ss_x = 0.526012772146;
    msg.ss_y = 0.999284818003;
    msg.ss_z = 0.671089724101;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("MNTCFDQUVYMPUOIXXZVUEL");
    tmp_msg_0.dist = 0.467172312356;
    tmp_msg_0.err = 0.0528081196717;
    tmp_msg_0.ctrl_imp = 0.107601808942;
    tmp_msg_0.rel_dir_x = 0.0186578830225;
    tmp_msg_0.rel_dir_y = 0.59961027794;
    tmp_msg_0.rel_dir_z = 0.38015440705;
    tmp_msg_0.err_x = 0.862261996942;
    tmp_msg_0.err_y = 0.0452101524459;
    tmp_msg_0.err_z = 0.528439993165;
    tmp_msg_0.rf_err_x = 0.070161355149;
    tmp_msg_0.rf_err_y = 0.367814288199;
    tmp_msg_0.rf_err_z = 0.580451456608;
    tmp_msg_0.rf_err_vx = 0.684469054202;
    tmp_msg_0.rf_err_vy = 0.428700541615;
    tmp_msg_0.rf_err_vz = 0.45357720146;
    tmp_msg_0.ss_x = 0.573603799304;
    tmp_msg_0.ss_y = 0.400927083859;
    tmp_msg_0.ss_z = 0.804838977824;
    tmp_msg_0.virt_err_x = 0.496383835134;
    tmp_msg_0.virt_err_y = 0.728780923656;
    tmp_msg_0.virt_err_z = 0.557306681848;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationMonitor msg;
    msg.setTimeStamp(0.480346921306);
    msg.setSource(49353U);
    msg.setSourceEntity(153U);
    msg.setDestination(13112U);
    msg.setDestinationEntity(40U);
    msg.ax_cmd = 0.550853517092;
    msg.ay_cmd = 0.124979744234;
    msg.az_cmd = 0.371077649218;
    msg.ax_des = 0.356425839045;
    msg.ay_des = 0.51963143281;
    msg.az_des = 0.426415440147;
    msg.virt_err_x = 0.390350792789;
    msg.virt_err_y = 0.308364995101;
    msg.virt_err_z = 0.353128981862;
    msg.surf_fdbk_x = 0.44228954719;
    msg.surf_fdbk_y = 0.796289303055;
    msg.surf_fdbk_z = 0.486572053276;
    msg.surf_unkn_x = 0.434377697522;
    msg.surf_unkn_y = 0.651707967116;
    msg.surf_unkn_z = 0.24177206334;
    msg.ss_x = 0.871785220636;
    msg.ss_y = 0.851485234846;
    msg.ss_z = 0.428939072066;
    IMC::RelativeState tmp_msg_0;
    tmp_msg_0.s_id.assign("WKHILBFXFDUSSOKETHZKASFWBLRYSXDIHAVRCTBXGDEJEXYNOPAPCCJGSPCNKMGWFEMBLAFDLXYRQOHFPLKZRQSZVHMAXUQZPLPSTONVNNULAWKPEQGVKCXHNVTUBNYYUVHWQAYTUDIQETVPIVQTNQIRAHAKAOCZIZUGTNEEIMWKOG");
    tmp_msg_0.dist = 0.837812144995;
    tmp_msg_0.err = 0.55774217958;
    tmp_msg_0.ctrl_imp = 0.261935480286;
    tmp_msg_0.rel_dir_x = 0.618250637679;
    tmp_msg_0.rel_dir_y = 0.00896768848427;
    tmp_msg_0.rel_dir_z = 0.0853832197978;
    tmp_msg_0.err_x = 0.0152067793584;
    tmp_msg_0.err_y = 0.902169631714;
    tmp_msg_0.err_z = 0.750589848325;
    tmp_msg_0.rf_err_x = 0.929334400597;
    tmp_msg_0.rf_err_y = 0.54571963822;
    tmp_msg_0.rf_err_z = 0.00277051935758;
    tmp_msg_0.rf_err_vx = 0.72630331855;
    tmp_msg_0.rf_err_vy = 0.262078714863;
    tmp_msg_0.rf_err_vz = 0.517916175353;
    tmp_msg_0.ss_x = 0.35634155901;
    tmp_msg_0.ss_y = 0.884575068747;
    tmp_msg_0.ss_z = 0.372593249423;
    tmp_msg_0.virt_err_x = 0.553954340337;
    tmp_msg_0.virt_err_y = 0.737322120101;
    tmp_msg_0.virt_err_z = 0.217415284973;
    msg.rel_state.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationMonitor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.964145650958);
    msg.setSource(8609U);
    msg.setSourceEntity(58U);
    msg.setDestination(16635U);
    msg.setDestinationEntity(49U);
    msg.s_id.assign("QLGVTLJEUBKLOGJXPCEHUGIUNIIBJFRQHMACOHINJCAIESCUGQAUVMBVZTJHMETDGZXIYMQPKXJFDEXQKKXLRIWYSZHFASOSNCMMTJHXWOBLNWDXHPVLHRPYMRYGUQCVUKBJPWZYBMCLUAVNXVSHZIWMDWKUFBPDJYPZONLPSEBGDARFIWOPYGWOCNNEYORTAFPFRLOTEZFQSEEGX");
    msg.dist = 0.0449423121958;
    msg.err = 0.181323769734;
    msg.ctrl_imp = 0.408206683404;
    msg.rel_dir_x = 0.98963390459;
    msg.rel_dir_y = 0.912580568052;
    msg.rel_dir_z = 0.671469401028;
    msg.err_x = 0.461689956949;
    msg.err_y = 0.200716749425;
    msg.err_z = 0.540645821477;
    msg.rf_err_x = 0.291485825472;
    msg.rf_err_y = 0.182342158593;
    msg.rf_err_z = 0.372940989306;
    msg.rf_err_vx = 0.149622936874;
    msg.rf_err_vy = 0.646305815846;
    msg.rf_err_vz = 0.599258109822;
    msg.ss_x = 0.186271340449;
    msg.ss_y = 0.93688815476;
    msg.ss_z = 0.782042764363;
    msg.virt_err_x = 0.861455521931;
    msg.virt_err_y = 0.77189481816;
    msg.virt_err_z = 0.882787660897;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.396792320108);
    msg.setSource(4557U);
    msg.setSourceEntity(179U);
    msg.setDestination(29013U);
    msg.setDestinationEntity(254U);
    msg.s_id.assign("HECTAYOUPRKDIVIQKKYSQYQPIIJGMNCVGFZSNMWQXLIJBCSRPHZXMNXUCREGGVLGDYWLCQBYKXAZUOQZLMJA");
    msg.dist = 0.732044041297;
    msg.err = 0.195719559002;
    msg.ctrl_imp = 0.888593368526;
    msg.rel_dir_x = 0.460707416249;
    msg.rel_dir_y = 0.879024240915;
    msg.rel_dir_z = 0.663120154385;
    msg.err_x = 0.931509018172;
    msg.err_y = 0.564918263888;
    msg.err_z = 0.171169731076;
    msg.rf_err_x = 0.620322103035;
    msg.rf_err_y = 0.298143884069;
    msg.rf_err_z = 0.901880013421;
    msg.rf_err_vx = 0.717845431217;
    msg.rf_err_vy = 0.233994007142;
    msg.rf_err_vz = 0.882961356057;
    msg.ss_x = 0.802550632007;
    msg.ss_y = 0.736788049951;
    msg.ss_z = 0.926445734091;
    msg.virt_err_x = 0.51515982398;
    msg.virt_err_y = 0.796002490639;
    msg.virt_err_z = 0.394411950016;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RelativeState msg;
    msg.setTimeStamp(0.703535327176);
    msg.setSource(53444U);
    msg.setSourceEntity(201U);
    msg.setDestination(49750U);
    msg.setDestinationEntity(137U);
    msg.s_id.assign("JPUIAOPHNNBFIZRMPKQNITYXZDHPETVVIDVXWEDGPZTVGFZYRZVWGTUMUXUSL");
    msg.dist = 0.349050555003;
    msg.err = 0.422437420246;
    msg.ctrl_imp = 0.250963965569;
    msg.rel_dir_x = 0.297214065922;
    msg.rel_dir_y = 0.017749289778;
    msg.rel_dir_z = 0.387053238013;
    msg.err_x = 0.0888179364069;
    msg.err_y = 0.869859293588;
    msg.err_z = 0.947940597822;
    msg.rf_err_x = 0.979561915127;
    msg.rf_err_y = 0.55577870778;
    msg.rf_err_z = 0.700057329889;
    msg.rf_err_vx = 0.311507343619;
    msg.rf_err_vy = 0.74759413315;
    msg.rf_err_vz = 0.159931940188;
    msg.ss_x = 0.683828372977;
    msg.ss_y = 0.0125619876416;
    msg.ss_z = 0.312639617563;
    msg.virt_err_x = 0.99790706797;
    msg.virt_err_y = 0.448872204454;
    msg.virt_err_z = 0.0624214057745;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RelativeState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.81347446811);
    msg.setSource(29080U);
    msg.setSourceEntity(131U);
    msg.setDestination(53905U);
    msg.setDestinationEntity(103U);
    msg.timeout = 53638U;
    msg.rpm = 0.493033334304;
    msg.direction = 157U;
    msg.custom.assign("WNIWPXRVJAEDSAKQWWNLLOVBAHZRRWKAIAZEOOQLFBXSCWRJHUZCCVWVGNKXSCPTUJKFJPEFDDNAPNGYQKOTOXGSREFIMVTSMZQKVHTHYXDPTBPLDYJGBGMMTLPSQSMCGQMAIFLNMQYVOCWIAYKHDKAXLCIYQRFXUYKXHBHOSANIEPOVVFJELOZPKBEBZGEIFBGXJXWTTMFTIJJRFNCEWSQDMYDVUNTCURJMYRNDBZHQHBUUHIUGUZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.981634577671);
    msg.setSource(7424U);
    msg.setSourceEntity(176U);
    msg.setDestination(55325U);
    msg.setDestinationEntity(154U);
    msg.timeout = 65317U;
    msg.rpm = 0.982893210851;
    msg.direction = 50U;
    msg.custom.assign("JVRRLMNSUFMLDDIYBRDSAPVKCQVCTXYFGKLRAYNIZUMSR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Dislodge msg;
    msg.setTimeStamp(0.166548795343);
    msg.setSource(63889U);
    msg.setSourceEntity(52U);
    msg.setDestination(46182U);
    msg.setDestinationEntity(95U);
    msg.timeout = 54264U;
    msg.rpm = 0.477018740099;
    msg.direction = 71U;
    msg.custom.assign("CQNELRZJKJZBMMAEZV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Dislodge #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.925657478695);
    msg.setSource(21612U);
    msg.setSourceEntity(17U);
    msg.setDestination(23887U);
    msg.setDestinationEntity(24U);
    msg.formation_name.assign("HQRBSGOQMXHBEOHIQFXEEUMDSJBLPZTLGJQYUUYVCVJKFHDNWSAZMBBDRHEOKWLKAQAJTJGDPGFBGZPIXWASUDAHAKSTFMIEUNXTDWXCMIKAHRRFKVCBRRVZBFCYTUJPAEVWLNNCWTOVBGKMDMFRVNIYNKSYOLTMWIZNHKWYIHQPPFXUXGEGLZSLJ");
    msg.type = 54U;
    msg.op = 134U;
    msg.group_name.assign("QXRAHEAYWSVIGBRHKYSWFRNLFESWQTHAPUTXHNNQXDSEFKGJMNUICFURCMRSZAFMDRJLLPDQTQCGSZIZLCI");
    msg.plan_id.assign("JSFVPFTOOHMLGRZDADAKVYTCCLKNFWJBBYCTEPFHRNXTVWGALSYTMWSZAQHGNPOQDEHPUCXEFICZXENPRTBPGUXLIMKGQEBSQOXDGHQEKJDYRURGAPXLUDDNFCYCCNHKNZRRPOVSIKEABIVQNAKBEHJWQLIIUZMHQLFWQMTMXETIDDWCKEVIKJJFLBGZNIGJFKGWSPHYDRLLZOOXMTQBMMSXBOZOWVYBJJNUARWJXUWRYVUCAYZUSVU");
    msg.description.assign("IWKKSGMOJUCUDUPEWWYSRRCNUWB");
    msg.reference_frame = 65U;
    msg.leader_bank_lim = 0.0911468554406;
    msg.leader_speed_min = 0.655811660754;
    msg.leader_speed_max = 0.427846037021;
    msg.leader_alt_min = 0.0699938527119;
    msg.leader_alt_max = 0.372847184921;
    msg.pos_sim_err_lim = 0.750524249296;
    msg.pos_sim_err_wrn = 0.223175419569;
    msg.pos_sim_err_timeout = 63867U;
    msg.converg_max = 0.707250292357;
    msg.converg_timeout = 56343U;
    msg.comms_timeout = 36643U;
    msg.turb_lim = 0.731019582683;
    msg.custom.assign("FQEADRUGCFWGSZWNOGMKZFRELAQQOPZEMBQOPJAOZJSMNIYDVPARZIIPRJQSVXZXSCHWYLLJGYJQGBHGUERHVWVTXKNCJALGVLFQMCBXULGLNOINBNYSCYISFHLIQDEOKGFTCIKTDBPHPCWAIUDTMHTUSTEEQIYFCJLRDDKJGPDVOKUTYHYMZNJMWWXNUFTHDROKZHWVKNAWUVPBAABEVUMXBORKQAL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.941318491432);
    msg.setSource(10941U);
    msg.setSourceEntity(27U);
    msg.setDestination(32346U);
    msg.setDestinationEntity(206U);
    msg.formation_name.assign("AKFKOSZPINIVUKGEIHKNPBGPYTLQFMLEXDGVEYXTFBZEVBXKHHLPZDDUGIGDFQYOFXUJE");
    msg.type = 60U;
    msg.op = 96U;
    msg.group_name.assign("PWZYDFOYKPRSYCKWTTQOSGRIYNNIBMLYSSYEAUKWFZDTCUHHXUIZUQLEAPMCXZCQQUZXONHXPJREMUPADVWJBIZHRVRXBJTLXRYEOJEMFDVRGGJAVWEDCPESZCWNDSLFNHFFJMNSAWLOVKDLOBEAWHIFGITRPWJVYHGRQSJRKXDFKCIKMYTSXEYCTKHUCJISJAPBDPQXFUTTZQQVHVOOGOFMXV");
    msg.plan_id.assign("UQOCNJHNGMWLNEUAHPQSOAKMFPPTIUCRGNQHJSRJAFCEOQRHVMBJYWAGMVBCKOSVMDTFODKPDPYNMTGLITNIXZHJWQERCXCRXCILJFLMKMHHDRKWBCIAKYXTXONEZXJSBNFHRIWPHKTENNJIPKHOCTEDYOZJWRUKESVGXUFTMBPUBSJDQDYEBLIEDGTYGLXSBYULFYZPCWWVQFILDVGSRUQIVKZGSFZV");
    msg.description.assign("GEVVHJCBLCYKPXDIEJOJMCITGCVIVENPYZSFKQTUAZSXVOQARKJQIVBZBRTOMPRXNQCYPXPTGAOOMUDCFWXIPDAUWJMFTTHQHUSIWWEHTURPLLFMAPGZXCBNWBGCWJLSBBGUTDBRYOMYHWKFILDURHFVZLYELKFYMAEQENFSJNAUWJVGZXKFQEWZARNNPUNGIASMSDNJBDKMTQVDO");
    msg.reference_frame = 250U;
    msg.leader_bank_lim = 0.582345892634;
    msg.leader_speed_min = 0.490811011483;
    msg.leader_speed_max = 0.353461306253;
    msg.leader_alt_min = 0.300041818086;
    msg.leader_alt_max = 0.928627693869;
    msg.pos_sim_err_lim = 0.284344813541;
    msg.pos_sim_err_wrn = 0.134863695833;
    msg.pos_sim_err_timeout = 43400U;
    msg.converg_max = 0.870013104066;
    msg.converg_timeout = 56499U;
    msg.comms_timeout = 21208U;
    msg.turb_lim = 0.793694373602;
    msg.custom.assign("FZZWGQHOYDDKBQGMQPHGTPSRVUBBIWABLTRYYDKJKCTEIGILNNVRUBJWRCSKUJDIGTAAJHVMXFWNYNVWHOPSAFOMCLFFSXILVIMAYDNBJOPAKZUJALNYQDXVZEVOKBEYXZGTXHNRUIJEZXXOFCJCFIQBETOHJMVWNCZCISRKRTUMGLYOVIPDQZUXYPLTQQHMEEDCPSDWNHKTSFWKUNLRGJMAWEBDQRSPKSLSCVZUUXXOMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Formation msg;
    msg.setTimeStamp(0.864974924318);
    msg.setSource(25383U);
    msg.setSourceEntity(224U);
    msg.setDestination(12727U);
    msg.setDestinationEntity(156U);
    msg.formation_name.assign("GIJTLUOSKJUSTBXJEFLDSLWZGR");
    msg.type = 53U;
    msg.op = 180U;
    msg.group_name.assign("HGPWDKFDDAUDXBYOYECMVGBABTNNQMNSFYHJGOMEYJLBTUDNFCVQAAOFYDBTMWPQYRTSMZRKWSXAVNVSRUXFROQKHKXXRISUBFYWUEXJDULFZMGVVCINMDOXUNTQEJBHHQARPGTBPKNOIUXZLOLKVKZZZZJLRHCGJVCYMPCMPCAWUMRWREBDIIBAEKWYSGLHXAATTQHYSLOEZISXGNPEQKWDFJZUPNKQQTOOIWFVPECTGIJGHPZELJFLHR");
    msg.plan_id.assign("CRYCLWQVGKGKIOERLTSSPFEQGXQUJYQQZTAUQSYYUXCHUNXGXXZDLLTWUHRXWFGOMEFPZAIOSNOFMWZVEAFCWFLYBUTUAXACPJUKBKTWVDNHMEYYZJ");
    msg.description.assign("JACAPHNWETKTWDFNVBGGTWSCVPUZHMDTPJUOVISHJKIDMIVWIQDRRKFEZTJCAPMWLYEJLXJXVLYUCQKOQQGHPWHYJUYJMCIODLFVIUNTVYAXQDFLGRHLQPHHEESR");
    msg.reference_frame = 200U;
    msg.leader_bank_lim = 0.18471009573;
    msg.leader_speed_min = 0.33911237144;
    msg.leader_speed_max = 0.888938190763;
    msg.leader_alt_min = 0.0515735513262;
    msg.leader_alt_max = 0.607547178545;
    msg.pos_sim_err_lim = 0.376063256742;
    msg.pos_sim_err_wrn = 0.318500354222;
    msg.pos_sim_err_timeout = 39950U;
    msg.converg_max = 0.50633302351;
    msg.converg_timeout = 62181U;
    msg.comms_timeout = 19114U;
    msg.turb_lim = 0.646554999738;
    msg.custom.assign("ADYCOPFZKNOCWDZOJRTWVHJWINGIZEIRFYVKNNBJQCLASAOYYYXSLSDPGKOTFOMXBTCLCCPMRIRIGMISXYPEUXRQBHFBCFAMWMVJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Formation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.714607309538);
    msg.setSource(32548U);
    msg.setSourceEntity(230U);
    msg.setDestination(17164U);
    msg.setDestinationEntity(138U);
    msg.timeout = 42676U;
    msg.lat = 0.647874203062;
    msg.lon = 0.551850925724;
    msg.z = 0.660412123058;
    msg.z_units = 231U;
    msg.speed = 0.591882309462;
    msg.speed_units = 112U;
    msg.custom.assign("ECNXHPBQZALSGWQYODRWYENNSPJRTD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.457625208146);
    msg.setSource(7527U);
    msg.setSourceEntity(234U);
    msg.setDestination(55510U);
    msg.setDestinationEntity(234U);
    msg.timeout = 13170U;
    msg.lat = 0.456821539712;
    msg.lon = 0.111508181439;
    msg.z = 0.037756720914;
    msg.z_units = 154U;
    msg.speed = 0.0206403495403;
    msg.speed_units = 202U;
    msg.custom.assign("PCHPIIHOVPNUBSJEAMNKKUIRHFEFFPYVJJHZMIZDZKKLDNYJDLTSJTBEDCGHJUTPAKXNWXMKAVSFFUEZQOMBWNTWHHUAGUSCOOJFXGYLIZZCSUUVRWXWMQTQEBXOUBVSXMNIBFMLWQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Launch msg;
    msg.setTimeStamp(0.00132359881273);
    msg.setSource(55912U);
    msg.setSourceEntity(185U);
    msg.setDestination(38343U);
    msg.setDestinationEntity(51U);
    msg.timeout = 34881U;
    msg.lat = 0.46902494714;
    msg.lon = 0.773337115033;
    msg.z = 0.0942857685031;
    msg.z_units = 248U;
    msg.speed = 0.782766363103;
    msg.speed_units = 117U;
    msg.custom.assign("GMAWKMIZJXVITDCPDFQFGUIRAHBPEVSYEMRHTHIGBNMQEDRYWASUTXIBHQHIRAKNVDVJGCKQKNNJRLWHYZUOWXZSQISFNACFNZSWELXLKWCMBUQAJLETFMYHFGODPWOGIYTKPCDCQHEKUPC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Launch #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.0571175679589);
    msg.setSource(54838U);
    msg.setSourceEntity(252U);
    msg.setDestination(47911U);
    msg.setDestinationEntity(35U);
    msg.timeout = 46134U;
    msg.lat = 0.0125136005724;
    msg.lon = 0.738279512219;
    msg.z = 0.820452029366;
    msg.z_units = 2U;
    msg.speed = 0.64863794517;
    msg.speed_units = 49U;
    msg.custom.assign("IWPFBBTEYWQYOANHKUTBJHQOOWCXHTLEFDIBGLXYKSZADZSMIDHPZWWSYCJLJJUUNEEY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.623292477658);
    msg.setSource(16460U);
    msg.setSourceEntity(215U);
    msg.setDestination(3180U);
    msg.setDestinationEntity(99U);
    msg.timeout = 6244U;
    msg.lat = 0.0906307579297;
    msg.lon = 0.624112622628;
    msg.z = 0.090137332948;
    msg.z_units = 84U;
    msg.speed = 0.542223032862;
    msg.speed_units = 168U;
    msg.custom.assign("IYWLFHTIOLJEPHBGGSMOHTHRXKLBBX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Drop msg;
    msg.setTimeStamp(0.141315883941);
    msg.setSource(63819U);
    msg.setSourceEntity(131U);
    msg.setDestination(40223U);
    msg.setDestinationEntity(108U);
    msg.timeout = 41399U;
    msg.lat = 0.290220725807;
    msg.lon = 0.558955074516;
    msg.z = 0.241340000548;
    msg.z_units = 26U;
    msg.speed = 0.0113455631841;
    msg.speed_units = 114U;
    msg.custom.assign("SWNDEVSBDGFHZIVXFLWTDYFQJTKPJXJKDRHTHSMFNDWNPJDXECYRTRCRBNRKLLAMYYHHQILEVYNUGCXDEWZRGUTXUNNIOCUQHENOCLIQBHFFSATVUXLORMIYZVJJGSBMPEFDNJTKBUACXOMLQIOLLWSCBOJWBPQZIKXEIRPVJZPDVZHGNHOOYMKAAT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Drop #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.782959619676);
    msg.setSource(7004U);
    msg.setSourceEntity(253U);
    msg.setDestination(52651U);
    msg.setDestinationEntity(96U);
    msg.arrival_time = 0.589312911878;
    msg.lat = 0.614068142879;
    msg.lon = 0.74395827158;
    msg.z = 0.271856756737;
    msg.z_units = 104U;
    msg.travel_z = 0.767306956477;
    msg.travel_z_units = 173U;
    msg.delayed = 240U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.836564332406);
    msg.setSource(63129U);
    msg.setSourceEntity(43U);
    msg.setDestination(40555U);
    msg.setDestinationEntity(98U);
    msg.arrival_time = 0.592394804892;
    msg.lat = 0.801777601457;
    msg.lon = 0.257205246715;
    msg.z = 0.993701362206;
    msg.z_units = 90U;
    msg.travel_z = 0.561285324771;
    msg.travel_z_units = 49U;
    msg.delayed = 121U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ScheduledGoto msg;
    msg.setTimeStamp(0.32024128174);
    msg.setSource(29323U);
    msg.setSourceEntity(90U);
    msg.setDestination(23443U);
    msg.setDestinationEntity(207U);
    msg.arrival_time = 0.835050469756;
    msg.lat = 0.653118216753;
    msg.lon = 0.691032771643;
    msg.z = 0.828959114394;
    msg.z_units = 8U;
    msg.travel_z = 0.125587678702;
    msg.travel_z_units = 190U;
    msg.delayed = 200U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ScheduledGoto #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.704185211431);
    msg.setSource(30581U);
    msg.setSourceEntity(82U);
    msg.setDestination(19171U);
    msg.setDestinationEntity(142U);
    msg.lat = 0.695716886793;
    msg.lon = 0.447955673643;
    msg.z = 0.81781787261;
    msg.z_units = 229U;
    msg.speed = 0.378001791061;
    msg.speed_units = 111U;
    msg.bearing = 0.622651651608;
    msg.cross_angle = 0.464068352726;
    msg.width = 0.876102457014;
    msg.length = 0.290302571589;
    msg.coff = 37U;
    msg.angaperture = 0.807239150169;
    msg.range = 60383U;
    msg.overlap = 243U;
    msg.flags = 135U;
    msg.custom.assign("PFJIVOUMPCMBTLXLNUXNNZOKGFRGCNBLYLMBYZGFJKWPIUEVFCXZBSVYBHOWJWIKHJATQMPAHSGODUEUWNQJBSEMZXRNFCWTADQVERPPQIAHWYQVJFJYEVULYRXXIBIGSTAKOEUNFHGHHMGKJOIRQUFZPTCWTSMMUOTWLLCGOKNECZZQYWQDENSCXYSBDEMAQHRLVDVRPAISDTXEXZARROKYACKIO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.3115811422);
    msg.setSource(19177U);
    msg.setSourceEntity(50U);
    msg.setDestination(28780U);
    msg.setDestinationEntity(20U);
    msg.lat = 0.923286183322;
    msg.lon = 0.513891854114;
    msg.z = 0.437441444981;
    msg.z_units = 101U;
    msg.speed = 0.0349498149505;
    msg.speed_units = 26U;
    msg.bearing = 0.437947459868;
    msg.cross_angle = 0.885387525959;
    msg.width = 0.23483693707;
    msg.length = 0.624536450689;
    msg.coff = 253U;
    msg.angaperture = 0.801655662001;
    msg.range = 5083U;
    msg.overlap = 233U;
    msg.flags = 242U;
    msg.custom.assign("HEXZSLIZSJQRERIVNIXUKDRGGSNHLAVWYMZVIQJAULOE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RowsCoverage msg;
    msg.setTimeStamp(0.424100620829);
    msg.setSource(61125U);
    msg.setSourceEntity(176U);
    msg.setDestination(50119U);
    msg.setDestinationEntity(11U);
    msg.lat = 0.497178040757;
    msg.lon = 0.27664372805;
    msg.z = 0.560561084135;
    msg.z_units = 199U;
    msg.speed = 0.748523111315;
    msg.speed_units = 26U;
    msg.bearing = 0.549408544613;
    msg.cross_angle = 0.194521399223;
    msg.width = 0.650039161964;
    msg.length = 0.786916218404;
    msg.coff = 106U;
    msg.angaperture = 0.369745699307;
    msg.range = 44949U;
    msg.overlap = 78U;
    msg.flags = 25U;
    msg.custom.assign("YKQOQOHVGNGTKDLHVB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RowsCoverage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.1440403384);
    msg.setSource(5942U);
    msg.setSourceEntity(17U);
    msg.setDestination(21920U);
    msg.setDestinationEntity(143U);
    msg.timeout = 24646U;
    msg.lat = 0.636663175069;
    msg.lon = 0.542848048649;
    msg.z = 0.492630687503;
    msg.z_units = 123U;
    msg.speed = 0.0117413957109;
    msg.speed_units = 174U;
    msg.syringe0 = 64U;
    msg.syringe1 = 39U;
    msg.syringe2 = 99U;
    msg.custom.assign("WPXYXWEIYPSIUZUSVGOOYTMZMGRZAPONKNTLVQYURHBNIFITXNQISFNOCUICADTCERAKTZGFGXUPXHVXGXFDMGHAJHYKBUEHKSLBCFAKWEEEUZLRYZJDNAWBPOUVMELJMPAWXTRRZYSVVYDYPJBNLUOMIJWMRGHZJDNPKKHOBWIDAIOQXQFRHPCWTKVVYSOTC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.507481995743);
    msg.setSource(43140U);
    msg.setSourceEntity(207U);
    msg.setDestination(41744U);
    msg.setDestinationEntity(31U);
    msg.timeout = 24428U;
    msg.lat = 0.677827365713;
    msg.lon = 0.41956045286;
    msg.z = 0.360397763127;
    msg.z_units = 172U;
    msg.speed = 0.663098004908;
    msg.speed_units = 217U;
    msg.syringe0 = 145U;
    msg.syringe1 = 6U;
    msg.syringe2 = 248U;
    msg.custom.assign("INXEYDJXVVZCNUYQQTVYLQQFFOEHAOYDKW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Sample msg;
    msg.setTimeStamp(0.979707623203);
    msg.setSource(55111U);
    msg.setSourceEntity(170U);
    msg.setDestination(2677U);
    msg.setDestinationEntity(11U);
    msg.timeout = 29138U;
    msg.lat = 0.186039505147;
    msg.lon = 0.405101942106;
    msg.z = 0.276556760587;
    msg.z_units = 49U;
    msg.speed = 0.62648279704;
    msg.speed_units = 88U;
    msg.syringe0 = 50U;
    msg.syringe1 = 44U;
    msg.syringe2 = 217U;
    msg.custom.assign("RWWMXMKCOMIOIYOTYZUJMSNUMDIAWKVXJH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Sample #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.114314338053);
    msg.setSource(27917U);
    msg.setSourceEntity(236U);
    msg.setDestination(32111U);
    msg.setDestinationEntity(227U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.522500989332);
    msg.setSource(6087U);
    msg.setSourceEntity(38U);
    msg.setDestination(2589U);
    msg.setDestinationEntity(195U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTracking msg;
    msg.setTimeStamp(0.0595098876111);
    msg.setSource(5001U);
    msg.setSourceEntity(66U);
    msg.setDestination(55448U);
    msg.setDestinationEntity(59U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTracking #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.682438685356);
    msg.setSource(32081U);
    msg.setSourceEntity(137U);
    msg.setDestination(14876U);
    msg.setDestinationEntity(185U);
    msg.lat = 0.175874714305;
    msg.lon = 0.927733050027;
    msg.z = 0.687209043574;
    msg.z_units = 172U;
    msg.speed = 0.548377856076;
    msg.speed_units = 128U;
    msg.takeoff_pitch = 0.638918597596;
    msg.custom.assign("ISPSTOJVXCUDXBODPKJOJPLTEHWCDMAWLQHVUNBOAPUORLHUAVUYCIZEILYOIQMAMEWYYEQSSWRBGYQPJRNLXKWVAIQAHFYGGFJMCMNJVHKMLYQCRMHBFBINFLSRCDRZITTSQXHWYECKRGIXZZDGSANKBSCLRTNJSZZXFWFAIUNCEMFBRLUJHOPGZQYDGPTDWENPKCVNVOXATJVNXVBGWKXPEJWVUBQKSTMIGDYTLBUEOFTFZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.23240907973);
    msg.setSource(61251U);
    msg.setSourceEntity(71U);
    msg.setDestination(12276U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.870941543057;
    msg.lon = 0.13298000175;
    msg.z = 0.72787863264;
    msg.z_units = 119U;
    msg.speed = 0.432701377866;
    msg.speed_units = 168U;
    msg.takeoff_pitch = 0.561662323248;
    msg.custom.assign("NKDHYWNKWCACTVPPHXOGJPCJJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Takeoff msg;
    msg.setTimeStamp(0.0283171892278);
    msg.setSource(53793U);
    msg.setSourceEntity(151U);
    msg.setDestination(29434U);
    msg.setDestinationEntity(32U);
    msg.lat = 0.62439249408;
    msg.lon = 0.861559476002;
    msg.z = 0.893380024596;
    msg.z_units = 191U;
    msg.speed = 0.0759891828109;
    msg.speed_units = 110U;
    msg.takeoff_pitch = 0.313577990187;
    msg.custom.assign("DMUPHTBNOXRAXVQLSGUZQYSPOFAIWAJCVFQPJEXMHLWQTGWCSBUFDKDTRHAFIYXATKGAVODLXHWIQBSSLMSYENDNZCEOXCTPMGFBFUEQIFOQRVZQLYY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Takeoff #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.677785753688);
    msg.setSource(14164U);
    msg.setSourceEntity(209U);
    msg.setDestination(47505U);
    msg.setDestinationEntity(83U);
    msg.lat = 0.763933285925;
    msg.lon = 0.282485526105;
    msg.z = 0.939056290335;
    msg.z_units = 31U;
    msg.speed = 0.732960200891;
    msg.speed_units = 83U;
    msg.abort_z = 0.888549761276;
    msg.bearing = 0.805762721978;
    msg.glide_slope = 90U;
    msg.glide_slope_alt = 0.954535178704;
    msg.custom.assign("XSUDVTKRUGCVCAPAPVOETYSOHIOBAMXOQMWBXKBIYEMQOGQKVSJFTEQAGFXOLDHYHJXZAUMYPDNQZSSFQISCSVLRZEDGFYTLZNCBVVNMMYIRFCXFBKJJPET");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.0332407763513);
    msg.setSource(39329U);
    msg.setSourceEntity(184U);
    msg.setDestination(52786U);
    msg.setDestinationEntity(18U);
    msg.lat = 0.950834271955;
    msg.lon = 0.959252029278;
    msg.z = 0.774194696433;
    msg.z_units = 175U;
    msg.speed = 0.240928517464;
    msg.speed_units = 95U;
    msg.abort_z = 0.467187107139;
    msg.bearing = 0.067631447689;
    msg.glide_slope = 107U;
    msg.glide_slope_alt = 0.934264257028;
    msg.custom.assign("QXQNSTOSQTNLTIFAFXXRZHO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Land msg;
    msg.setTimeStamp(0.452514285054);
    msg.setSource(5936U);
    msg.setSourceEntity(84U);
    msg.setDestination(16020U);
    msg.setDestinationEntity(191U);
    msg.lat = 0.26066164934;
    msg.lon = 0.583416611833;
    msg.z = 0.121449392775;
    msg.z_units = 124U;
    msg.speed = 0.531635509253;
    msg.speed_units = 198U;
    msg.abort_z = 0.083172181389;
    msg.bearing = 0.125554740439;
    msg.glide_slope = 65U;
    msg.glide_slope_alt = 0.93173521342;
    msg.custom.assign("GNNBMDSWNOYOMXAILHFUUQRVZSIJZNJCQPEYHQDUKSWT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Land #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.966618822823);
    msg.setSource(35980U);
    msg.setSourceEntity(103U);
    msg.setDestination(12730U);
    msg.setDestinationEntity(171U);
    msg.lat = 0.481235686291;
    msg.lon = 0.167745435691;
    msg.speed = 0.968164725765;
    msg.speed_units = 63U;
    msg.limits = 224U;
    msg.max_depth = 0.401655249899;
    msg.min_alt = 0.609095765903;
    msg.time_limit = 0.846365926222;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.100464087436;
    tmp_msg_0.lon = 0.068428234638;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("DFEEKVWOOCRROMXWQDRGACIFJARMSDZWKPYZMBVNPJQLDNCYRTXZPXPVHHSRDTLIKUGYPKQWEGCSNDLFBBZXCLSYFIQZLFRBKKMDSVSSZCOUFEBUWKTAVBSMJJHAHTNEOHLBACGXXIADIQTTZTMNXUHFIAZNZAWWOUGXKJCCCHOMYEVYQBUPTGRSWIMYNVUEBENVVPVJGAGDKEUYPQYFIHAPPFELUKXINQOJWUDMSNQLQOJLRTRBGHMIWXZFT");
    msg.custom.assign("GZIBAMSHHSPHTYZJOXJMPFOOYQPEDQPBXZVXBQZVAGVGVEWGPPSECIPUUPJMNQTXSDGYOFYGIAUKYFUWFPZNSUWIQCKNRATNOOMOUEKZGNWDPRGKUJIITDXKBEXYMSEFTKBJSXWZNNQJYLAWVUBHQTIVRYDLRZGZLAALLCBJVMIXERUVBREKHSDHEHNCIFDYMFVJJLZRCKQWSFGYDDQBTMCALAVBQLORWLWHHTSCR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.0726067243872);
    msg.setSource(2189U);
    msg.setSourceEntity(182U);
    msg.setDestination(6578U);
    msg.setDestinationEntity(149U);
    msg.lat = 0.944349846742;
    msg.lon = 0.939873428208;
    msg.speed = 0.676130527688;
    msg.speed_units = 28U;
    msg.limits = 47U;
    msg.max_depth = 0.135784020829;
    msg.min_alt = 0.154175820419;
    msg.time_limit = 0.2895871771;
    IMC::PolygonVertex tmp_msg_0;
    tmp_msg_0.lat = 0.535811160854;
    tmp_msg_0.lon = 0.948954778311;
    msg.area_limits.push_back(tmp_msg_0);
    msg.controller.assign("YUUVNWUCLDTJJWRXFDKSOASSVMNFRNVXCMIMXKZOPFSXYZSSSQPGZPINTRGUAAEPHRMGJYGWFAIVXFBLGQXRPBMAHVHDVWZEW");
    msg.custom.assign("LMAWTGUZARLUKBIEBDWNMVTNVRDXVZXHKZSKYHGKIPYVJEUJQINNXMCOFYVBMEAILLHCLAMOQE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutonomousSection msg;
    msg.setTimeStamp(0.668806180179);
    msg.setSource(33805U);
    msg.setSourceEntity(50U);
    msg.setDestination(21256U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.524374346059;
    msg.lon = 0.126013828087;
    msg.speed = 0.935001862836;
    msg.speed_units = 198U;
    msg.limits = 187U;
    msg.max_depth = 0.412164840416;
    msg.min_alt = 0.97156290939;
    msg.time_limit = 0.577089884249;
    msg.controller.assign("GTSXFLDACHVJYYEEZYWGGUQMPEZKXMALXQSNJJZPANHLUKSEKQHWMCWQGAUGRPNFCXVOITFOLIRDLW");
    msg.custom.assign("ZXEZDFGWDFFPYQTNVIDJKGNTGZUJVNXVRWYUSJITHP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutonomousSection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.191163010524);
    msg.setSource(34548U);
    msg.setSourceEntity(27U);
    msg.setDestination(14248U);
    msg.setDestinationEntity(102U);
    msg.target.assign("EKBNXCBYEMATZFDXJJIMOTJWGMGDPLXWBUQVMEXTZUDSHATXNWBKGMGVSUORPPRVUJNYJUOCHWVIPSEZEPVMDFERHCUQQCXDNVBZQYKPMYMTEZRAIPGRJHQPDZZAHYFALLTLSJZBVXEJGIHTCESLHDICDQYYMAFLAKIAQFFKVODOZ");
    msg.max_speed = 0.146962476752;
    msg.speed_units = 90U;
    msg.lat = 0.28209710034;
    msg.lon = 0.0846759197701;
    msg.z = 0.399940922856;
    msg.z_units = 48U;
    msg.custom.assign("ZSNMKMNUONNLYSPHRMOZWEHCOEUWYJQJVIBCYCNPHVWRTPCGGBLKFIXKIJFIAKFXAFYXNMHAGYNMQPBRROUHCFFUQKPWZPLAWKAFVKSFBDUOJCAEXTMLDTYDHRJBOZASPDBUTVSEIYDWKQEAVWHRBZLSVXSRQCTTWUBQQRDXLGONFMJKZGSQVGOCKOZLBWIOUIUGICGNAGTDJXLDHJLAQJTPYNMEPVIYSMCFZEREXQYJDHDVUWVLTZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.367664841201);
    msg.setSource(26565U);
    msg.setSourceEntity(46U);
    msg.setDestination(40100U);
    msg.setDestinationEntity(150U);
    msg.target.assign("CHPKDEOCNVSIAAGABDLTDQFYNMFIXDXVABEXKLYZDZUGZTWFJWDUOIUQWPZSVXHTTANZEEOHUJPKHHGMAWTBOFDPRZYRQXVNYBJONVUHPGTCMRCXSESRTFUAYOSNRAFUZBRKISBHHXQWICNDCSTOEFKXEQJDWTJKBCVKXLJPDLGJWPGMGCUQKLQBYIZAFJVPWIJQHLYGVJEAOKWMSLYUIGQMRBCVN");
    msg.max_speed = 0.453169167409;
    msg.speed_units = 224U;
    msg.lat = 0.364903500722;
    msg.lon = 0.354130377842;
    msg.z = 0.784514656227;
    msg.z_units = 6U;
    msg.custom.assign("KAMMKDNTXDAIABJUKOKQZKWTCICDHAUNGHVPESRCUTVERYGQUGFOTJJJNYOSURJAJUVNPRQZBKSFGISSNMACQOLBAIAONPAIHPNQZRSBZMETMKJQYVLHHLXCYMHLNTBWLGJSW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FollowPoint msg;
    msg.setTimeStamp(0.813807137908);
    msg.setSource(41910U);
    msg.setSourceEntity(30U);
    msg.setDestination(28657U);
    msg.setDestinationEntity(19U);
    msg.target.assign("YSPDHOCAYGSBVLVUQQPHZYANJVUYHXBXIBMKDAPWLIXSMVFUACUQRGSEJNUHXIXYZGOKIZONEQRRQGMTWNVGMPMAEHCLFLCMDTCEBRJZLWBTTMNKIGCWUZFZJOAGHNWSBETEXQKNMLSFK");
    msg.max_speed = 0.430161937993;
    msg.speed_units = 158U;
    msg.lat = 0.623597070289;
    msg.lon = 0.145198727652;
    msg.z = 0.236519436075;
    msg.z_units = 188U;
    msg.custom.assign("RLXRBQPTWCFCOVHXHAWUKLWQFOTZIQRORKMYSLAJEYUQLOJDKJUDXJJGWYGYPZYASAIWDKFTXFHTHNVRBBBFLCJZMCHFSUTCQPIBCEDIXGHDASNEWVNNKGCPXGQRZOGNRHPNTABM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FollowPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.844253447186);
    msg.setSource(55309U);
    msg.setSourceEntity(76U);
    msg.setDestination(33060U);
    msg.setDestinationEntity(47U);
    msg.timeout = 53003U;
    msg.lat = 0.242349345965;
    msg.lon = 0.496561388624;
    msg.speed = 0.664191115852;
    msg.speed_units = 89U;
    msg.custom.assign("XWWEQKOYLAJTAJTFDTDEQBYNZGALKRPSREAYRZT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.121347880159);
    msg.setSource(50256U);
    msg.setSourceEntity(53U);
    msg.setDestination(34312U);
    msg.setDestinationEntity(121U);
    msg.timeout = 4951U;
    msg.lat = 0.463137970404;
    msg.lon = 0.0687799275825;
    msg.speed = 0.51892357525;
    msg.speed_units = 193U;
    msg.custom.assign("GWJPCVCTZYAFEJRTPVQTIWAXSXOQADBDLDIWUZHIVAJBNSRROYIGHJECCSDFJOGXUSLVHOKGFDNQFFPAINBLQVUALGXIBFYRZDTUHDMJLJPYOYHCZWOOFWENZECFSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Alignment msg;
    msg.setTimeStamp(0.184614794106);
    msg.setSource(57296U);
    msg.setSourceEntity(32U);
    msg.setDestination(34271U);
    msg.setDestinationEntity(77U);
    msg.timeout = 10531U;
    msg.lat = 0.189046796489;
    msg.lon = 0.211781017979;
    msg.speed = 0.973376796345;
    msg.speed_units = 66U;
    msg.custom.assign("URHTXFVWWEDPPTEGZALBLEQORGPSZFINSQJPMMUFFRHSOKABVJRLNWSXGPAIJWFOYXJQTHADBLIVGKTEXOBGTCTSJRZWYNKIEUALHKKTMBCIONZHXVWVFYJWQMMZGHLYLZKLTHXCMMOBJYBVPWGQPEVARUVVXHKLCIOQYSDUAODJVWCMUADDIUQKZFAYTFOQXIMJCXYRNMCNOZBCUIQQNSBNGEETXSRGCYUCPDKZNRWLZK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Alignment #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.331527007888);
    msg.setSource(9407U);
    msg.setSourceEntity(133U);
    msg.setDestination(31234U);
    msg.setDestinationEntity(226U);
    msg.lat = 0.71953132371;
    msg.lon = 0.890791388635;
    msg.z = 0.802418406947;
    msg.z_units = 103U;
    msg.radius = 0.180575563619;
    msg.duration = 20219U;
    msg.speed = 0.758464210814;
    msg.speed_units = 252U;
    msg.popup_period = 54517U;
    msg.popup_duration = 3682U;
    msg.flags = 243U;
    msg.custom.assign("UGCPRMYQBGWTJQKBGCBIBADCMMEQVLTURFGYTAWUEOVE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.883519665562);
    msg.setSource(9466U);
    msg.setSourceEntity(161U);
    msg.setDestination(60258U);
    msg.setDestinationEntity(51U);
    msg.lat = 0.51636665465;
    msg.lon = 0.0897571670726;
    msg.z = 0.97490813096;
    msg.z_units = 6U;
    msg.radius = 0.355307813006;
    msg.duration = 59994U;
    msg.speed = 0.566443366312;
    msg.speed_units = 155U;
    msg.popup_period = 25399U;
    msg.popup_duration = 7279U;
    msg.flags = 186U;
    msg.custom.assign("AFNWCGTMQCLRPJSNNZVJXVQANATCSRQDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StationKeepingExtended msg;
    msg.setTimeStamp(0.905054499256);
    msg.setSource(32193U);
    msg.setSourceEntity(80U);
    msg.setDestination(27715U);
    msg.setDestinationEntity(215U);
    msg.lat = 0.880521205818;
    msg.lon = 0.0814288836935;
    msg.z = 0.558935066938;
    msg.z_units = 163U;
    msg.radius = 0.994576036601;
    msg.duration = 28358U;
    msg.speed = 0.630425603648;
    msg.speed_units = 243U;
    msg.popup_period = 5343U;
    msg.popup_duration = 30412U;
    msg.flags = 200U;
    msg.custom.assign("ZAWVHXLQRQNCOCKYRPXXSGW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StationKeepingExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.469479225291);
    msg.setSource(25144U);
    msg.setSourceEntity(52U);
    msg.setDestination(35335U);
    msg.setDestinationEntity(164U);
    msg.timeout = 8851U;
    msg.lat = 0.651269431474;
    msg.lon = 0.808922503675;
    msg.z = 0.698086818314;
    msg.z_units = 196U;
    msg.speed = 0.951704920799;
    msg.speed_units = 237U;
    msg.bearing = 0.517019767937;
    msg.width = 0.0549262175125;
    msg.direction = 185U;
    msg.custom.assign("FXPHKHWGUWOEAROTLAVYUSKSJGVBMLDBBFFHNARSONYCPWLYMWQKDOMXQCADUXBTNNCGWRHEBCZFPPFYJUXTRAJLUZOLHGNHMCPZWIPPRCVQRXGKZEERHGIBPTTQTLQZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.489719184849);
    msg.setSource(63656U);
    msg.setSourceEntity(12U);
    msg.setDestination(41579U);
    msg.setDestinationEntity(225U);
    msg.timeout = 31042U;
    msg.lat = 0.321417039777;
    msg.lon = 0.867252731681;
    msg.z = 0.183542283143;
    msg.z_units = 34U;
    msg.speed = 0.0620332869915;
    msg.speed_units = 63U;
    msg.bearing = 0.561890465266;
    msg.width = 0.556450181955;
    msg.direction = 54U;
    msg.custom.assign("MQHBHKVCVDPRTFBGNMVYLBBIMLQIJYCKZTEGYCELODDKZCUIMCGUZETBCJNIJEOWMDWEXQPVNXKRVSQYNJAPWNVKVIQXJXWFHWHQZFDSPDPPGPKRDRZJBUJMRZXQPDLHCLASLIEFOIQJDBUNVLVRTTWMUGESAAUROYSNOCTYUSWXRBRGEUJYCUALKXXTMXITZEFHKPTUSOFYFSQGTHIHWKGFGSQOHADGSZAHEMXCBWVBAN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Magnetometer msg;
    msg.setTimeStamp(0.270998064115);
    msg.setSource(27340U);
    msg.setSourceEntity(175U);
    msg.setDestination(31070U);
    msg.setDestinationEntity(181U);
    msg.timeout = 13351U;
    msg.lat = 0.305627437125;
    msg.lon = 0.87839866249;
    msg.z = 0.748006058157;
    msg.z_units = 54U;
    msg.speed = 0.315940052638;
    msg.speed_units = 128U;
    msg.bearing = 0.613850180259;
    msg.width = 0.86644677527;
    msg.direction = 101U;
    msg.custom.assign("GHNACITVXHSDDQJKINGDUMPIFQSGRYSYYQEHUMZORXQGPDHEBJWDJHAJIZLHWNCLCPSWVHTXFZFKSLEBVTIMRRN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Magnetometer #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.256214961888);
    msg.setSource(6239U);
    msg.setSourceEntity(123U);
    msg.setDestination(2251U);
    msg.setDestinationEntity(72U);
    msg.op_mode = 172U;
    msg.error_count = 94U;
    msg.error_ents.assign("HYNJKZWDQFMRPLYHTTHGMNKLLQGZBEAIJSLNBBCMOVCASCAAENRUEYCSUZTOGHANIBKPKUSSTZWDOLVXQYMWJMCZJOUOMDVSHDCVFPEQJWFAECBKRXRVPQUGFJTTDKFGWPXQBLSRIXIXDUETBXAZPFFUOR");
    msg.maneuver_type = 27456U;
    msg.maneuver_stime = 1.34410443964e-06;
    msg.maneuver_eta = 57642U;
    msg.control_loops = 802647542U;
    msg.flags = 8U;
    msg.last_error.assign("KTUQIWRYHPEANJTLWXIXOBJRSAUTMVWFCSEKSVHLTVVSJBGSNKBEGJAKOMXXWTBFLDXPRIKHHWRFFBLQPFQUUSGOZTFHCZLVHPGYVEGDYRNWUUFKIACCAMPKOMQEOLYJJIRZTICFXHGVDEVHMVMLZRXGSUGPVSITYOBIZDIAQMWJTFUPQNYUPERDQLDCNYDLGBMJXEYCSRZQBWNQJBYQD");
    msg.last_error_time = 0.381686658935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.954751073942);
    msg.setSource(30016U);
    msg.setSourceEntity(135U);
    msg.setDestination(9349U);
    msg.setDestinationEntity(88U);
    msg.op_mode = 153U;
    msg.error_count = 92U;
    msg.error_ents.assign("HGFVPDBSKDSWSRVDREMGHKYSNQACFTNSYUNVMWVHFDBWQRRMXHJPBFTXXYMFYVCGYDQIFYSACKEGZ");
    msg.maneuver_type = 9089U;
    msg.maneuver_stime = 0.13035948136;
    msg.maneuver_eta = 17030U;
    msg.control_loops = 1873408939U;
    msg.flags = 210U;
    msg.last_error.assign("ARYVTCVXDNRODGKNQPEPHBIRGJKHEBBHGEXOYZMANZOKTNUIHYEBSDJCHNJFPPSFYDLWHRDFTCWROUATYFL");
    msg.last_error_time = 0.851121317313;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleState msg;
    msg.setTimeStamp(0.292556276131);
    msg.setSource(59207U);
    msg.setSourceEntity(142U);
    msg.setDestination(282U);
    msg.setDestinationEntity(188U);
    msg.op_mode = 17U;
    msg.error_count = 162U;
    msg.error_ents.assign("UBLXDSOFVSYIJAGUHGCBKUFJLNEIIRUBOHLHLZEBYNGTLWSQTJOVGOSQCKBPKMAMKH");
    msg.maneuver_type = 58250U;
    msg.maneuver_stime = 0.526472800807;
    msg.maneuver_eta = 58583U;
    msg.control_loops = 3551135651U;
    msg.flags = 199U;
    msg.last_error.assign("QFGFSKUXHMIJAYEMBNFUWJRZTKKUPAABUKGKXRRBYGRGMXPAVQQYZVHSEUNUZIBOJDCJVCFBMULZALPECDGWBYNNYCUCCMLXKJOUGOJWIPSLVRCNXWIIBQALGZZSFYBPMJKRIFOLR");
    msg.last_error_time = 0.398051810408;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.391319184634);
    msg.setSource(13165U);
    msg.setSourceEntity(167U);
    msg.setDestination(63324U);
    msg.setDestinationEntity(60U);
    msg.type = 251U;
    msg.request_id = 54721U;
    msg.command = 119U;
    IMC::AutonomousSection tmp_msg_0;
    tmp_msg_0.lat = 0.980789567667;
    tmp_msg_0.lon = 0.922010612541;
    tmp_msg_0.speed = 0.095046648129;
    tmp_msg_0.speed_units = 178U;
    tmp_msg_0.limits = 82U;
    tmp_msg_0.max_depth = 0.798029496532;
    tmp_msg_0.min_alt = 0.721607256389;
    tmp_msg_0.time_limit = 0.677439462772;
    IMC::PolygonVertex tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.807905171031;
    tmp_tmp_msg_0_0.lon = 0.279439888668;
    tmp_msg_0.area_limits.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.controller.assign("IVACJMDUKIMDJVQXFZZFHWNNNGCDYANZPBGSHYLFYNTUAUHOXKITCDGLFSHFVKJTGVUODISDOWZWLRKEKEXUMQWIXEEHOEBRO");
    tmp_msg_0.custom.assign("SEASYHDLFPNSNFANDITIGQEUXOTCHYMGWWDRXBYEOBGAAIJVJFUFOLWASVQOQCUBPZTLESAZBH");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 26394U;
    msg.info.assign("SGKHYTHNISLXTJFUDZDJZXCXPYVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.86434109742);
    msg.setSource(11053U);
    msg.setSourceEntity(11U);
    msg.setDestination(19177U);
    msg.setDestinationEntity(174U);
    msg.type = 239U;
    msg.request_id = 19000U;
    msg.command = 210U;
    IMC::LowLevelControl tmp_msg_0;
    IMC::DesiredThrottle tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.value = 0.644546619024;
    tmp_msg_0.control.set(tmp_tmp_msg_0_0);
    tmp_msg_0.duration = 47077U;
    tmp_msg_0.custom.assign("BTDBPNVEPSGTSQGRJSFAJTFOWWKKBCNRPMMZWBJDRSLQETZKGWRSROODNFNVCTGJBRDGKHQJXDQAXGVESOMSZONQTVBTHMLDCLVJFHQGJVUEWIUCNIVBYHTZOFCOMJUKAYRUMXJWZEIHGURHQANUZGRULHYXFOQYFIJVKXUGYPQDPMFLWIBIIFTSPZLOHLWXUNFKTNCHYLLCWCXSKEMYBXPDPRCOYMVIENEAADIDZMHXAYC");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 56866U;
    msg.info.assign("EUKCCQOFPCDTMWLUOVMDGZNHGTAXACPNYQJJLQOSNGXWXMWTAHXREEYRSEVGPIVYRXWWANNLLGFYJSQPCZMIFEKFTTSBOEXLBEGUOAXNNVFZHUIQMCJDPKQBGMHRDKBFHTDQRQFSDYMMPERTVRJIKZHESFWKJDAAWJYXDBVWNPFEYLHJOAQMIVSJJTZUWIXTQTWBLGOS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleCommand msg;
    msg.setTimeStamp(0.22196297792);
    msg.setSource(14880U);
    msg.setSourceEntity(28U);
    msg.setDestination(12433U);
    msg.setDestinationEntity(127U);
    msg.type = 251U;
    msg.request_id = 1640U;
    msg.command = 161U;
    IMC::FormationPlanExecution tmp_msg_0;
    tmp_msg_0.group_name.assign("BJEBRCWCGOGSXAOTYJMKCUNQYWHFQZPGRNIRQIVDJAUMDOQCXBRURKVSDKBYEAVTYBGWAAH");
    tmp_msg_0.formation_name.assign("RIJZWPCTHDWYREEBGVHOBNLZCLSFCPQBKWRXIBHNVKVVXXRIMXVNBJRIGYSSLYSUKMTFCNJWDQPTUCZHFUKGZJZTRYTNIPUIVFUQHXCBHEIHUWZFQXBAOYKEWDLDECHNYQOAJ");
    tmp_msg_0.plan_id.assign("JEPHVMNGOLJVAWICRUZJMDXXWVRDZFUYMUETSIEHOQMVOVWPDCAJGXKLKFMPBWKSRWHYLSLXRSPQACRYWFETFEQECDUXPHONOTGUICFANSRQJCNZPPMMDFIEZPJKBVSWYCTZATOBLGKEHRAQWNTAVRIYQVNZXYG");
    tmp_msg_0.description.assign("TOUIMIHMSYCRPVPGZZGTSLRTOXGUXKYSWYQNMZUOJQUCWWIJSRELNTUMHKLHLXFEAEMEIMQSGKGEAQYQNZ");
    tmp_msg_0.leader_speed = 0.678122328041;
    tmp_msg_0.leader_bank_lim = 0.494160183746;
    tmp_msg_0.pos_sim_err_lim = 0.920732788727;
    tmp_msg_0.pos_sim_err_wrn = 0.244123754611;
    tmp_msg_0.pos_sim_err_timeout = 24313U;
    tmp_msg_0.converg_max = 0.480131065166;
    tmp_msg_0.converg_timeout = 61717U;
    tmp_msg_0.comms_timeout = 34347U;
    tmp_msg_0.turb_lim = 0.865552374388;
    tmp_msg_0.custom.assign("TAEXSLXGPULTKJEVJIMTDEYEOYJIRGKPZQDNWPHIUKJWUEHIHDJPSLFSBKLFWRFZEVPSOVTGNKCVSUPNCOUARSOKDOBXIALCTEZSUQGQXQASCMIKZMTMMHZZHFHXPXEJSCANHT");
    msg.maneuver.set(tmp_msg_0);
    msg.calib_time = 53445U;
    msg.info.assign("RTCVMTODVCLNGQJRKFTSWXKLNBPIWGPLNWMPQSHSRMCZMBCMJPL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.980952364284);
    msg.setSource(47588U);
    msg.setSourceEntity(174U);
    msg.setDestination(40642U);
    msg.setDestinationEntity(137U);
    msg.command = 65U;
    msg.entities.assign("GHPQGLZJCVJQPPDSQUKYCGIFUOLIRYTVMLEHYFDYPPNZESRLAHQMIBARWWOQFSBIBEAEOJPSUKNVWXIUJCZDMZOYHZSOROORRGPLILJWKFWZTTBGAMKUXGJIUEVYQHKRDVVKJTWANAVTNZHZOCNDYSFXNEXCBFMUXNMQBTUKBKTVJXXAVUXBWCDHDALFTEQFDCWRZPZITYDGLPJMCLVBRHBXEHOTORYEQFMKYPFCCASHJEIIWDXSGGNMQGMAS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.98203494994);
    msg.setSource(58312U);
    msg.setSourceEntity(44U);
    msg.setDestination(14937U);
    msg.setDestinationEntity(84U);
    msg.command = 150U;
    msg.entities.assign("AAZBNBCCPAWRIFZYWDUVHVHNMSIPBEEFQSOVRVUIKLXMDUJZIPFULIFJYXZEGBQPSHSLDOEAWPZOXWJYYJRSOHMIYTGFQHVLHT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MonitorEntityState msg;
    msg.setTimeStamp(0.996586969761);
    msg.setSource(29266U);
    msg.setSourceEntity(119U);
    msg.setDestination(17042U);
    msg.setDestinationEntity(24U);
    msg.command = 125U;
    msg.entities.assign("ULRJIMWCPOCTVOQQKBBQUICAMMIDEHZQFGMWLJKEXOMOQOUYUFGOXDIHWKDELKKCOKLWXDGZNGIRETWDFEPBSVZXCJRHYGNSBPECMQTHAGYHOAGMRHBBGJYVLPDXSKMUURWLLSZHGWYAFRNEFRJXNQEVZVHFVIIOLZBBUPWCOSEFXKHBZSJRTCUTYPNJQRDQNDMZNSKAXVJLZTTYJCPIMYS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MonitorEntityState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.975166363817);
    msg.setSource(50656U);
    msg.setSourceEntity(171U);
    msg.setDestination(2305U);
    msg.setDestinationEntity(8U);
    msg.mcount = 229U;
    msg.mnames.assign("KKFXQPJVGXBIJJAJFECPJHPXCYEZHNUDBJFWNIMGLSQOIQNUMBCEOPIDZDNXSSKZMLIBHVZWOEVTYKBBGRKJRLZYTZFCUGVVWUCVPIKYFVAQPIRRFVWYZJGOUESBGCVUOZNOQNXOSHWRELLCGXWLKHVW");
    msg.ecount = 129U;
    msg.enames.assign("OSREETIKCULBVMPGQFFHCKVILMELFNLJZYUIKTROVIQFFBUPGKWMNHHZDYOUZKYAQLXOOVTVTIZSNBXHPGINWLEMVRBJJPWMDYJXQKJRPHEBXY");
    msg.ccount = 213U;
    msg.cnames.assign("CHNFOZEVOBKTZMVMXVRHXRKUTNEMDAQILFQQUPALECXUKCQTBGWURQKUZHTXIDQNHHVJYEPFYHLAMHCZAPKAYIIQNOVAGCUENNWBZEODCJREWMKYZYDDOXNSZUFGZQQKDKLPPFPJDXDWUWJMPJWXOSFVDTFWTMQBMLEINPAZGSCXGUV");
    msg.last_error.assign("GKPJIUXYXSPEDXAPMPANBBZBMJSJUBGGAHLVQKQJIOFINVQEANVEIVQQAKBCHRPIAJGVLYZMSZDQWTUGSIRKYYHFMOUTRFLAZCUBWOXTUFSGGWNOLHTYKJNTHEWVHXESUODKELUPI");
    msg.last_error_time = 0.188230242652;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.579808265954);
    msg.setSource(7885U);
    msg.setSourceEntity(121U);
    msg.setDestination(51930U);
    msg.setDestinationEntity(30U);
    msg.mcount = 12U;
    msg.mnames.assign("RGERUDPHQSGIXJBAFTJHMLFIIBOSARJVHVOSHQDEWWJGPKCTEWBBUGGDECABKKXIYHZQNKXEVXKGVBXTWYTLNZIESWAAXDPOLWCCJCUZRYSVEHHDPPVNARPMVRCTWHMVQDNBNDQFEPOBJWFCLUUKGLUMKMAOYALTIVAKQFSQRBRCENKJKSYYOHCLGFNNYXPPQOTWXSJQMBIURDFROMUJQTU");
    msg.ecount = 164U;
    msg.enames.assign("EPOKKLEBTEAHUEZWQRFCHEEOJYRYWJFMFBRYDIEBGBPXFCXJOPZLXAPVRPYOKWTOPKNGTGZL");
    msg.ccount = 169U;
    msg.cnames.assign("FKULLRMTTIOPPWGMLJPRYFYHYPJYQWXZCFXCEDKUAZDOOBGRBPOPASCEMESCRJMTAMEGHBZCPXOWHKMIDIQSKPQDTSGRZWWNFOAKHLHLWTIGEYKYXLQFUNDYJBJUXWVAGDQQZTGJXCUVWWVXXCLENNCOEBGXEISBNZSRZAFSIRALONTAQBTZNKLHDXIMZNAPJGBUSOTEVUFRMGVTMABH");
    msg.last_error.assign("BXBWNOVHIEPTBXHMOHHMQVJUVMJALTOHBURAGIFXWCLXPTJIDLHNWBVGZECXPTZVNXVAIUQSJNDDVMIADQZDIXUPMKMWZBSNESKZLJCEWNAKCNQGYUCCSERNZYDOZZGJYGFTGQRSEFZKQNAOKLMACOWBUKIAFCYMQEYRPFHGQWSKEFJUXDTBHCWREOOKTTDPYS");
    msg.last_error_time = 0.348146476334;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityMonitoringState msg;
    msg.setTimeStamp(0.295759370699);
    msg.setSource(33641U);
    msg.setSourceEntity(47U);
    msg.setDestination(35565U);
    msg.setDestinationEntity(254U);
    msg.mcount = 157U;
    msg.mnames.assign("DCJRPOZYJCVETVODROWKFSFQYGJJNQRDKZBEGETXKPIAPPAJZLJEQCLFTNBBTJIEDSFGMAXHMBYPIVLWVYWRMBRKPFHILFNACSTDABUEOFIZLVPGCXCXXUDYSQMUMIMNNXFXPOKSQKJEBGVHYEJWRHUTLXGNCKKGXQNUQWVSHCDTNYQGRFICIXKZUTAAIHODLVELYQSSWQOBWOSRWSBCHOEVHNZWOPMBFHZYRLDPGZKARUAYGZ");
    msg.ecount = 215U;
    msg.enames.assign("TLCCHNFGXTGFEMLBTPLAMOVBKUHINQCENVDHIVKPJJBWDNZCYICKFDCNCUOUJZXMQYUXJVJAHNWAKYKSAEMQGKAWYVBGYXDQQZFAWLSQOYNDYSVPJTWIPEOODOUBIWWYJQK");
    msg.ccount = 242U;
    msg.cnames.assign("DQHWJMPIALMVCFVYGWECOCXMUATTKQWEGTZZYPVHQAWNVRKYVZLENHDETYJHUXKYQGRPBNSNLDMUORIJBIDCUXONAFTFJKLXZHCSECKPSPFTTZDUSWLRJUNEJLXGDORHQBETGBINWAWDMNVQUXHBBCFQEOGMYGLHXSATFKXODCFSHIYWZZUJYSMSBPGUMLRQOIPMRBSKQPXEZOPBJADZRTIYAVOZMKVBLVFLKUKCENVRJWHQADSFX");
    msg.last_error.assign("PMKNSFQPJOIDPTMIEHWFIRCFQOHDAIGWNXVBDGAZMRFLQIDFPPQXBKTVZJANSFKUHWDRZKSOMGBSBXCOEDZUXMPHTENLSZYMJHEDIHODKKXBZTWSZTMNNTAJJOLDEQSLKKYRBRDMTFUYVHVCCLLQIUTSGWEQLLJOUQVHRXAQNYLBHBBVERRJPYWBMGCXYGGZOWHJFPGCXURRXYEQVVECOWPJAMSKGEUTJZNYIGCFAIUUVNNFTWCWAVY");
    msg.last_error_time = 0.0584110778101;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityMonitoringState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.817213811606);
    msg.setSource(58668U);
    msg.setSourceEntity(140U);
    msg.setDestination(4316U);
    msg.setDestinationEntity(112U);
    msg.mask = 86U;
    msg.max_depth = 0.188742789985;
    msg.min_altitude = 0.249412731151;
    msg.max_altitude = 0.59148228485;
    msg.min_speed = 0.375431740651;
    msg.max_speed = 0.379201045559;
    msg.max_vrate = 0.302615146211;
    msg.lat = 0.883968926348;
    msg.lon = 0.625455514994;
    msg.orientation = 0.619848921052;
    msg.width = 0.723622289387;
    msg.length = 0.299944496368;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.833922968792);
    msg.setSource(34459U);
    msg.setSourceEntity(42U);
    msg.setDestination(5458U);
    msg.setDestinationEntity(103U);
    msg.mask = 62U;
    msg.max_depth = 0.112656406002;
    msg.min_altitude = 0.210093251824;
    msg.max_altitude = 0.462191375868;
    msg.min_speed = 0.0291260770377;
    msg.max_speed = 0.109119679989;
    msg.max_vrate = 0.896266149758;
    msg.lat = 0.468007826944;
    msg.lon = 0.655839810551;
    msg.orientation = 0.831294122938;
    msg.width = 0.892987713301;
    msg.length = 0.299147190525;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OperationalLimits msg;
    msg.setTimeStamp(0.834860983073);
    msg.setSource(4300U);
    msg.setSourceEntity(72U);
    msg.setDestination(28737U);
    msg.setDestinationEntity(3U);
    msg.mask = 183U;
    msg.max_depth = 0.189320265136;
    msg.min_altitude = 0.0634439177607;
    msg.max_altitude = 0.674110572179;
    msg.min_speed = 0.0186693024147;
    msg.max_speed = 0.968388844538;
    msg.max_vrate = 0.112863774844;
    msg.lat = 0.760430093886;
    msg.lon = 0.051430932297;
    msg.orientation = 0.686072833476;
    msg.width = 0.903193631128;
    msg.length = 0.677288551806;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.835938553405);
    msg.setSource(63695U);
    msg.setSourceEntity(101U);
    msg.setDestination(12017U);
    msg.setDestinationEntity(218U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.895125011889);
    msg.setSource(58846U);
    msg.setSourceEntity(213U);
    msg.setDestination(34395U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetOperationalLimits msg;
    msg.setTimeStamp(0.0280845672391);
    msg.setSource(22695U);
    msg.setSourceEntity(56U);
    msg.setDestination(45656U);
    msg.setDestinationEntity(165U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetOperationalLimits #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.88949544315);
    msg.setSource(50715U);
    msg.setSourceEntity(98U);
    msg.setDestination(37633U);
    msg.setDestinationEntity(179U);
    msg.duration = 4339U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.589367377767);
    msg.setSource(57772U);
    msg.setSourceEntity(61U);
    msg.setDestination(23908U);
    msg.setDestinationEntity(36U);
    msg.duration = 33292U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Calibration msg;
    msg.setTimeStamp(0.300506911843);
    msg.setSource(32609U);
    msg.setSourceEntity(36U);
    msg.setDestination(29591U);
    msg.setDestinationEntity(158U);
    msg.duration = 4565U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Calibration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.289725605334);
    msg.setSource(37561U);
    msg.setSourceEntity(169U);
    msg.setDestination(35529U);
    msg.setDestinationEntity(105U);
    msg.enable = 137U;
    msg.mask = 4110835170U;
    msg.scope_ref = 579589169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.222659905747);
    msg.setSource(1761U);
    msg.setSourceEntity(122U);
    msg.setDestination(5156U);
    msg.setDestinationEntity(44U);
    msg.enable = 129U;
    msg.mask = 2213810928U;
    msg.scope_ref = 3503795605U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ControlLoops msg;
    msg.setTimeStamp(0.116188098796);
    msg.setSource(7847U);
    msg.setSourceEntity(112U);
    msg.setDestination(22920U);
    msg.setDestinationEntity(232U);
    msg.enable = 72U;
    msg.mask = 896550600U;
    msg.scope_ref = 700481498U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ControlLoops #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.904273539329);
    msg.setSource(52080U);
    msg.setSourceEntity(45U);
    msg.setDestination(6308U);
    msg.setDestinationEntity(220U);
    msg.medium = 165U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.0271880954418);
    msg.setSource(30979U);
    msg.setSourceEntity(85U);
    msg.setDestination(16925U);
    msg.setDestinationEntity(4U);
    msg.medium = 117U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleMedium msg;
    msg.setTimeStamp(0.205020079806);
    msg.setSource(11317U);
    msg.setSourceEntity(159U);
    msg.setDestination(14573U);
    msg.setDestinationEntity(170U);
    msg.medium = 204U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleMedium #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.315609136157);
    msg.setSource(59391U);
    msg.setSourceEntity(222U);
    msg.setDestination(18400U);
    msg.setDestinationEntity(207U);
    msg.value = 0.435501083836;
    msg.type = 184U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.589218570327);
    msg.setSource(31925U);
    msg.setSourceEntity(50U);
    msg.setDestination(24350U);
    msg.setDestinationEntity(82U);
    msg.value = 0.691277758701;
    msg.type = 148U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Collision msg;
    msg.setTimeStamp(0.406981925736);
    msg.setSource(22840U);
    msg.setSourceEntity(165U);
    msg.setDestination(30090U);
    msg.setDestinationEntity(42U);
    msg.value = 0.237732470059;
    msg.type = 97U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Collision #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.275995097026);
    msg.setSource(25488U);
    msg.setSourceEntity(71U);
    msg.setDestination(28288U);
    msg.setDestinationEntity(189U);
    msg.possimerr = 0.364952140457;
    msg.converg = 0.840965837658;
    msg.turbulence = 0.370614597347;
    msg.possimmon = 155U;
    msg.commmon = 139U;
    msg.convergmon = 154U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.47019200579);
    msg.setSource(12885U);
    msg.setSourceEntity(159U);
    msg.setDestination(50797U);
    msg.setDestinationEntity(136U);
    msg.possimerr = 0.192167552702;
    msg.converg = 0.43425192621;
    msg.turbulence = 0.890778340155;
    msg.possimmon = 49U;
    msg.commmon = 187U;
    msg.convergmon = 6U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormState msg;
    msg.setTimeStamp(0.570812126356);
    msg.setSource(15544U);
    msg.setSourceEntity(204U);
    msg.setDestination(59540U);
    msg.setDestinationEntity(5U);
    msg.possimerr = 0.949252350995;
    msg.converg = 0.0355024985601;
    msg.turbulence = 0.54680796626;
    msg.possimmon = 44U;
    msg.commmon = 141U;
    msg.convergmon = 82U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.97122182224);
    msg.setSource(34216U);
    msg.setSourceEntity(105U);
    msg.setDestination(49988U);
    msg.setDestinationEntity(182U);
    msg.autonomy = 172U;
    msg.mode.assign("PYKEFWTBEYXFFLOERXRAUOACQOMEMGDCJLAVJKMHFTGAWRCXIPVSXLMBRGJZGKLTUNINQXGPQFRZFLSPKVPFROWBSBPUHCUWSNVCJIYAFNRHUWAPGUNJRHJYMGRAQQEATHUKBDOJDHHCVVCZDTVIYQEEYTIZOYVZOTDABLJKXUVYKXZZXDZJFXQQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.970088624659);
    msg.setSource(54084U);
    msg.setSourceEntity(128U);
    msg.setDestination(38074U);
    msg.setDestinationEntity(164U);
    msg.autonomy = 141U;
    msg.mode.assign("WUUIKWOKBDQVKSQWPDTIATKDGLSMUUXVGYGBZEWCINXKGQSXJHELRCJHZPWTBQJOLIBXSBENDLZEWTSIVGHHDOGLZPUZRXZLECCMYPWMDXSPYHUJJKNXTKKNAJPTLVGRYSSQIAQVUFTDGULFBOCCEQNVPRNRETJRMZCVMAIAFWENOXYCHNYAYIQAMFTV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::AutopilotMode msg;
    msg.setTimeStamp(0.533827814401);
    msg.setSource(40329U);
    msg.setSourceEntity(186U);
    msg.setDestination(51277U);
    msg.setDestinationEntity(247U);
    msg.autonomy = 128U;
    msg.mode.assign("DZQEOPKBJZFJRTNWJSNXKGPHWLKICSDGOWUSXVSTZAVWAYPFWLZVBLRRQLRNLNOMNHVWPIHTPJONPBXMKKRANOICDQEYERPAYSMAVSVRZACXEIUUFJNMWCKDUYYRUEMSXJTCVMOWMHLIMTTIYDAZXZFEKQVTYLKPEXWHFCAKCTBZRGBSBGP");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("AutopilotMode #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.432293492217);
    msg.setSource(57692U);
    msg.setSourceEntity(24U);
    msg.setDestination(57155U);
    msg.setDestinationEntity(136U);
    msg.type = 110U;
    msg.op = 4U;
    msg.possimerr = 0.714693589304;
    msg.converg = 0.427188446004;
    msg.turbulence = 0.938529978885;
    msg.possimmon = 40U;
    msg.commmon = 31U;
    msg.convergmon = 245U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.538827780732);
    msg.setSource(9234U);
    msg.setSourceEntity(8U);
    msg.setDestination(40751U);
    msg.setDestinationEntity(169U);
    msg.type = 208U;
    msg.op = 27U;
    msg.possimerr = 0.871360426321;
    msg.converg = 0.0246749552748;
    msg.turbulence = 0.47546008449;
    msg.possimmon = 198U;
    msg.commmon = 188U;
    msg.convergmon = 113U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationState msg;
    msg.setTimeStamp(0.151816452702);
    msg.setSource(7424U);
    msg.setSourceEntity(195U);
    msg.setDestination(20169U);
    msg.setDestinationEntity(31U);
    msg.type = 18U;
    msg.op = 21U;
    msg.possimerr = 0.0277724986328;
    msg.converg = 0.797322408192;
    msg.turbulence = 0.954235061394;
    msg.possimmon = 74U;
    msg.commmon = 186U;
    msg.convergmon = 9U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.151856404921);
    msg.setSource(7132U);
    msg.setSourceEntity(246U);
    msg.setDestination(7488U);
    msg.setDestinationEntity(129U);
    msg.op = 128U;
    msg.comm_interface = 143U;
    msg.period = 8211U;
    msg.sys_dst.assign("JHZJLNTFDZRKRDRSOYGSTWKFCIVQAZUMIHDQKHEVQBMSNUPJDRPUTBIRGGPBLPMKPTYQANEOLWDQYZNUMEOYFXTBIAJMKEXIUHUSIEVINKGSFFKCCTHVPCGWFPLOLQNAEXSDJCWSTFKXOACQOQXNDCQPSVMVMA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.0737779138807);
    msg.setSource(20775U);
    msg.setSourceEntity(74U);
    msg.setDestination(26586U);
    msg.setDestinationEntity(219U);
    msg.op = 215U;
    msg.comm_interface = 33U;
    msg.period = 50023U;
    msg.sys_dst.assign("EVCEQNBCXJMJMIAUYIEKMFYNGQACCOKWSZAXCKXLULOUIHFDPVQSJCMJSZPCIRNPJDEIKHDGZFLUQAQVXZOYYYEXSHFPMUFPBYLDGWMNSKSOESDBKYHTELO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportControl msg;
    msg.setTimeStamp(0.237067569142);
    msg.setSource(17790U);
    msg.setSourceEntity(93U);
    msg.setDestination(47539U);
    msg.setDestinationEntity(245U);
    msg.op = 75U;
    msg.comm_interface = 252U;
    msg.period = 11833U;
    msg.sys_dst.assign("EADBHOMJZRPJVTDGMWZBEEVMUHYENTQSUQGEJOGQTXDFOOLXMLGIIQLRVLZJCYUDCVD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.646454362243);
    msg.setSource(39662U);
    msg.setSourceEntity(6U);
    msg.setDestination(14711U);
    msg.setDestinationEntity(46U);
    msg.stime = 2459917629U;
    msg.latitude = 0.200628311365;
    msg.longitude = 0.25919528796;
    msg.altitude = 25475U;
    msg.depth = 8326U;
    msg.heading = 11177U;
    msg.speed = -14910;
    msg.fuel = -93;
    msg.exec_state = -103;
    msg.plan_checksum = 16794U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.425406417678);
    msg.setSource(41165U);
    msg.setSourceEntity(18U);
    msg.setDestination(32715U);
    msg.setDestinationEntity(60U);
    msg.stime = 1329747630U;
    msg.latitude = 0.72821327771;
    msg.longitude = 0.878399456992;
    msg.altitude = 65325U;
    msg.depth = 30703U;
    msg.heading = 55953U;
    msg.speed = 25349;
    msg.fuel = 114;
    msg.exec_state = 47;
    msg.plan_checksum = 39349U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::StateReport msg;
    msg.setTimeStamp(0.99453333852);
    msg.setSource(23746U);
    msg.setSourceEntity(155U);
    msg.setDestination(37243U);
    msg.setDestinationEntity(115U);
    msg.stime = 778529530U;
    msg.latitude = 0.0569667035965;
    msg.longitude = 0.157615955484;
    msg.altitude = 52732U;
    msg.depth = 53955U;
    msg.heading = 16344U;
    msg.speed = 3620;
    msg.fuel = 123;
    msg.exec_state = 67;
    msg.plan_checksum = 30891U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("StateReport #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.325091353449);
    msg.setSource(62516U);
    msg.setSourceEntity(50U);
    msg.setDestination(53430U);
    msg.setDestinationEntity(245U);
    msg.req_id = 533U;
    msg.comm_mean = 17U;
    msg.destination.assign("EHGIACROFZBUXHRXZVVSBTGVQDCNFVGVHWKLAJGSLJDDEHKPUJOZLCSSBASKJAQRICXKAOIHMYVDVUTNMZGTOILMRLSDFUOLLC");
    msg.deadline = 0.366244753833;
    msg.range = 0.077707497742;
    msg.data_mode = 246U;
    IMC::TBRSensor tmp_msg_0;
    tmp_msg_0.serial_no = 1992606003U;
    tmp_msg_0.unix_timestamp = 1208393316U;
    tmp_msg_0.temperature = 0.618762732225;
    tmp_msg_0.avg_noise_level = 43U;
    tmp_msg_0.peak_noise_level = 6U;
    tmp_msg_0.recv_listen_freq = 96U;
    tmp_msg_0.recv_mem_addr = 21108U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("EMQVWSHHSQRFMOSGRDKZICCVXPWOPWRRRADOIJUOIHBTST");
    const char tmp_msg_1[] = {36, 106, -11, 119, -53, 89, 37, -93, -58, -56, -34, -55, -64, -98, -14, -31, -52, 30, -53, 107, 37, 74, -123, -3, 125, 23, -51, -63, -49, 59, -88, -108, 99, 96, 3, 93, -46, 16, -42, -56, -12, -24, -112, 107, -115, 61, 61, -76, -106, 68, 29, 9, 81, -80, -11, 66, 46, -28, -51, -4, 48, 66, -8, -75, 31, -37, -116, 74, -52, -115, -50, -100, -16, 47, -128, -73, -7, 0, 83, 100, 122, -1, -73, 109, 110, 83, 37, -52, -79, -22, -93, 9, -50, 122, -103, -55, -49, 106, 16, -89, 8, 73, -104, 19, -45, -101, 105, 122, -6, -42, -113, -25, -25, 47, 93, 52, -74, -12, -73, 13, 58};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.557342091206);
    msg.setSource(17173U);
    msg.setSourceEntity(112U);
    msg.setDestination(64501U);
    msg.setDestinationEntity(179U);
    msg.req_id = 49689U;
    msg.comm_mean = 155U;
    msg.destination.assign("VIOUWBDGXJFSPGOJXCAINCHSLNVGBCPTIVQVNARYXOLQXWKYABRGELFOTZBJEZSGVJAYNWFQXSKHDDTAURDIMZUAURAJTAQWCIKMCJYMHNBBEHCLYM");
    msg.deadline = 0.803834113249;
    msg.range = 0.303150622097;
    msg.data_mode = 155U;
    IMC::GpsFixRtk tmp_msg_0;
    tmp_msg_0.validity = 14550U;
    tmp_msg_0.type = 250U;
    tmp_msg_0.tow = 67566918U;
    tmp_msg_0.base_lat = 0.374594970977;
    tmp_msg_0.base_lon = 0.698550091912;
    tmp_msg_0.base_height = 0.805895888021;
    tmp_msg_0.n = 0.822421080627;
    tmp_msg_0.e = 0.228685669634;
    tmp_msg_0.d = 0.454736319164;
    tmp_msg_0.v_n = 0.018481918658;
    tmp_msg_0.v_e = 0.164269078854;
    tmp_msg_0.v_d = 0.571526927377;
    tmp_msg_0.satellites = 254U;
    tmp_msg_0.iar_hyp = 22068U;
    tmp_msg_0.iar_ratio = 0.945321105787;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("OGUXMLBUQQZGUYUIOSHIYKCFXJBTFYNSTWXAUXIOHUZEEDHFZZXDMPWNPPLDWFKLTBIPXDNEHKMHXMRPACRSMFESQUITMGKUKBEHPCLIFRZJGYVYLYOZTQWTOHFRGNRYJMBLYVMXWEIOVZHAQAXTFGISBUDFSRKSRWJENTKWWRDIDSVOGKMAJYFVSOHTZBEHRSGLLQCJNVANLJARBAMAYCDPGECQAQOJNCEDJXTVLGVCUQKZJPVVBI");
    const char tmp_msg_1[] = {57, -102, 30, 48, -128, -48, -13, -26, -11, -70, -7, 108, -96, 85, -38, 14, 110, 101, 21, 33, -32, 124, -52, -51, 36, 121, -54, -59, -7, -49, 19, 81, -73, 120, 17, 2, -19, -34, 78, 53, 64, -32, -34, 105, 122, -39, -110, 95, 108, 45, 103, -39, -49, -59, -44, 10, 77, -75, -109, -43, 20, -115, 3, -91, 3, -67, 109, -6, 50, 60, -74, 25, 36, -99, -3, -30, 69, 18, 18, -114, -50, 3, -86, 52, -92, -126, 39, 20, 105, 37, 36, -42, -102, -36, -11, -108, -32, -47, -39, 35, -126, -48, -109, 41, 32, 71, 56, 35, 49, -18, -18, -97, 16, 82, -117, -64, -17, 63, -3, -42};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionRequest msg;
    msg.setTimeStamp(0.604974902182);
    msg.setSource(38055U);
    msg.setSourceEntity(36U);
    msg.setDestination(11047U);
    msg.setDestinationEntity(59U);
    msg.req_id = 35076U;
    msg.comm_mean = 45U;
    msg.destination.assign("FWBUWLANCUHUUWYOEHRSXNHNKGKDJXLORLPOZXZHKPFLYANGMEQXRKKVFIZHCMCADBTAKEVCVJQPWTDDYZJFPAGNIXFHQDQYQFEFGTNYLJMLMRIGVCZSSSMDDOKUYCOGUJVABCZEFHBSSXUWLUV");
    msg.deadline = 0.606074745864;
    msg.range = 0.952982244933;
    msg.data_mode = 209U;
    IMC::VtolState tmp_msg_0;
    tmp_msg_0.state = 59U;
    msg.msg_data.set(tmp_msg_0);
    msg.txt_data.assign("TPMTKJLTRRBOPQBEABBTFEUAFXWKLDYDXUZ");
    const char tmp_msg_1[] = {44, -96, 109, -8, -11, 43, 125, -79, 22, -4, 30, 79, -39, 81, -101, 76, 22, 98, 46, 39, -90, 119, 6, -122, -81, 4, 11, 11, 45, -95, -22, 63, -90, -47, -36, 95, 63, 117, 91, -90, -33, -3, 56, 52, -25, 89, -18, -23, 80, 103, 56, 110, 24, 6, -118, -111, -128, 41, 82, 10, 114, 15, -80, -84, 67, 126, 104, -13, 94, -16, 4, 82, -31, -74, -95};
    msg.raw_data.assign(tmp_msg_1, tmp_msg_1 + sizeof(tmp_msg_1));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.714217793484);
    msg.setSource(51620U);
    msg.setSourceEntity(57U);
    msg.setDestination(17400U);
    msg.setDestinationEntity(63U);
    msg.req_id = 63717U;
    msg.status = 163U;
    msg.range = 0.40966412587;
    msg.info.assign("LFERJDKCZSJSQSBWMOOOCBCLPXXHNGXBZPQLFDICOKSYBGQVIDIDIFGEF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.346869031277);
    msg.setSource(11889U);
    msg.setSourceEntity(93U);
    msg.setDestination(33762U);
    msg.setDestinationEntity(248U);
    msg.req_id = 1602U;
    msg.status = 61U;
    msg.range = 0.842483833467;
    msg.info.assign("BZKNMOMFNRRPYJUSWQQRMSH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TransmissionStatus msg;
    msg.setTimeStamp(0.00474511595337);
    msg.setSource(54466U);
    msg.setSourceEntity(209U);
    msg.setDestination(2483U);
    msg.setDestinationEntity(42U);
    msg.req_id = 56656U;
    msg.status = 98U;
    msg.range = 0.752361696968;
    msg.info.assign("ZDNBQOAESJGTUMDBRLFCXPFGHVCCHHZTDVYTKFHIUAEAUYNERZGJAXIZQEIXORQCAYJEHZTOGXYKKHONOLGNNOMNTLKFOWMWSXLLOGJZARKIWBILFPXQUCSJICWQVFIDJSOGKBKTPVDFILJMAGDRUYVYSMZNRUQFAHNPEJDVS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TransmissionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.779500436028);
    msg.setSource(41879U);
    msg.setSourceEntity(36U);
    msg.setDestination(19931U);
    msg.setDestinationEntity(159U);
    msg.req_id = 53186U;
    msg.destination.assign("IYYYSLRKMMPIDXBWXYAMPRHWXSHGAEDQUGUOIHKJXBGFIGUNPZVRNANSTJFOVEWJUFFGPZDLDEQCTVGTBWXCAYERWWAVBZMYBNQVNEKPISZIHKUEQNIWNLXBDPPHCUOIFZBBXOCANASXVGGTSZFCRQQRC");
    msg.timeout = 0.379528461905;
    msg.sms_text.assign("YEZQVYPDPCZWEDYCLBYIUIXPSOMBHIJUHWFMQKDPGDVNAJSZOJVQNDZNSYGCWJEIAVTRYFXGTPKUNECOFVTTVRGXHNAQCNWIUMASRKANFNXMUMCUBXGQLVWNKABU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.878016023694);
    msg.setSource(12144U);
    msg.setSourceEntity(20U);
    msg.setDestination(37136U);
    msg.setDestinationEntity(242U);
    msg.req_id = 55665U;
    msg.destination.assign("JFZLXDNFIPEDAVJOINJMPUTDRBKTXYFVQQCUHTDBKGGBALIXJLAGMKFSLWBWPBWBEIFVYSOQNWTEEJZUUYRRQRBKOBHPPZQSVYWRENDLYQCVZNAMSJUHTMTIZCXHGHRAYRAJQBZGZOVSSLDNIDDWCVZSYPGKNQFGEZHUFHFPLFZWFQDSTUAGCOTKQKEKIRPDTNCUOAYVYMJJMCCPMCOYEWOOHEBPXIKXUORISL");
    msg.timeout = 0.358958216224;
    msg.sms_text.assign("UPWLSLXCIETFOVSQHNOSOJZMVXBUCHKDALVCOBNVREDTICZVZVNIKVFXQRAFUDZRJTJBUPHTFQRYUJFXKMRZBVHHMGWHUQXBXXDKZINVGKPLWIOQFFKXMDDMLMECPECRJDPLSUEWUBWERJIESWGYHMBWGYYCIEAMYNMAPTIAU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsRequest msg;
    msg.setTimeStamp(0.155770935692);
    msg.setSource(56332U);
    msg.setSourceEntity(224U);
    msg.setDestination(7642U);
    msg.setDestinationEntity(82U);
    msg.req_id = 22770U;
    msg.destination.assign("MBBVAQMLGAWHQNOMKOFJGTABUVHLKFHMIXLRVPSYTUYCMWGDCZNCVKWFOAHIMUXAVKHRSJQKBIOEROVPCFCBFUUXTRLGNPELOET");
    msg.timeout = 0.0249803535779;
    msg.sms_text.assign("IYIRSEPGSPODWUBOLRJSZYANBLMARGQEQQZSMIQPIRO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.312475957054);
    msg.setSource(34610U);
    msg.setSourceEntity(183U);
    msg.setDestination(58200U);
    msg.setDestinationEntity(184U);
    msg.req_id = 29570U;
    msg.status = 139U;
    msg.info.assign("ZMYFUZJZYWRJOFQNGAPUMTPOVIFTGLEIDNSMIKRPPFJBURDCIJCQSENZTOWTOOQTISGQTJPEDLBZAXRULHQHRGKEWZMRTSFBNPJMLFLYXKOPYCXDAJSLWASZCPVVOZKQFEGJARDTWQNEYXHKXOVNUFQSSJDAXMWCWXMIHLRIDGHLKBIDWKNBZCHMHGBZTVEETFYBPIV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.166270185202);
    msg.setSource(15621U);
    msg.setSourceEntity(77U);
    msg.setDestination(10945U);
    msg.setDestinationEntity(210U);
    msg.req_id = 35719U;
    msg.status = 186U;
    msg.info.assign("IVUNFCDAMVXBLLIIWJDEEPUQJBPIAEZLHNCGLVQTRZEKRDHLOEWICIKSMFBHRFROJVNPMHEBPTKVTHCDPFJHNDRGEVZNFCUZAXSSWBUTESJJQZUJYGFOPHTAXIWANAZYIDCDOMJSOQLUHLPZSGDAPTMUBXYKVSBUOXRVPBKQLHYUNWXOWGTYCQXZFFFTKCXIGTSWFAYEHUOWGARVKZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SmsStatus msg;
    msg.setTimeStamp(0.657768056783);
    msg.setSource(55476U);
    msg.setSourceEntity(52U);
    msg.setDestination(10666U);
    msg.setDestinationEntity(9U);
    msg.req_id = 50798U;
    msg.status = 56U;
    msg.info.assign("ONXIZFOYBIMTQYIHJDFQXONRTKAJLIGQXQKFFKNHCTHLVHPTOTEIWMYRVMHYSXCDWDUWAUGOADTCUSVU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SmsStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.424196964753);
    msg.setSource(43617U);
    msg.setSourceEntity(77U);
    msg.setDestination(60488U);
    msg.setDestinationEntity(51U);
    msg.state = 150U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.183483839483);
    msg.setSource(15159U);
    msg.setSourceEntity(173U);
    msg.setDestination(50629U);
    msg.setDestinationEntity(223U);
    msg.state = 214U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VtolState msg;
    msg.setTimeStamp(0.252260630822);
    msg.setSource(3132U);
    msg.setSourceEntity(181U);
    msg.setDestination(29960U);
    msg.setDestinationEntity(53U);
    msg.state = 83U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VtolState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.166951481651);
    msg.setSource(42492U);
    msg.setSourceEntity(44U);
    msg.setDestination(30119U);
    msg.setDestinationEntity(181U);
    msg.state = 90U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.659747411939);
    msg.setSource(3943U);
    msg.setSourceEntity(88U);
    msg.setDestination(38756U);
    msg.setDestinationEntity(34U);
    msg.state = 50U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ArmingState msg;
    msg.setTimeStamp(0.0628528334967);
    msg.setSource(64493U);
    msg.setSourceEntity(190U);
    msg.setDestination(11276U);
    msg.setDestinationEntity(229U);
    msg.state = 217U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ArmingState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.48941074744);
    msg.setSource(29706U);
    msg.setSourceEntity(220U);
    msg.setDestination(22096U);
    msg.setDestinationEntity(117U);
    msg.req_id = 56666U;
    msg.destination.assign("QBERFTYWDNBIBLHJNQWXJSGPZRNSJSMCGVHHCPYODZDEXBZKZNNJOXEIAQQSRBXEYVEMDHFPSRDTDLLTYIRFCIVYHUFSKBACFTEWAWUHXYROMPCKLLTSJGINUCXTXRVHAPOIYEGGKPFEQCCQJFYWAVUOSRXSCVNYOZUAVJAWFCOZIMNYLZZUMMOGFHHIOLWKNEOBWEKPSDUVPQRBGLQTPWAGABKMUAKZQDDXMJZGKVHPBGFQMDJLII");
    msg.timeout = 0.00446833298525;
    IMC::LblRange tmp_msg_0;
    tmp_msg_0.id = 38U;
    tmp_msg_0.range = 0.568347359082;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.407147821511);
    msg.setSource(57157U);
    msg.setSourceEntity(179U);
    msg.setDestination(62390U);
    msg.setDestinationEntity(250U);
    msg.req_id = 37620U;
    msg.destination.assign("MSYFUYYHJJVCMFRKJZHAXYPSNRMRMSLZPZVFERAKXISIELOGPFJZQRKXQEBWECCGYQTOEWQXPAPGG");
    msg.timeout = 0.517428269221;
    IMC::AnnounceService tmp_msg_0;
    tmp_msg_0.service.assign("TKQYJJOXKLJINDPUBLGOIXDJKLCOSYECTSZKSWZFVAFCFIPYHSQBVHRFES");
    tmp_msg_0.service_type = 92U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPRequest msg;
    msg.setTimeStamp(0.0456720640776);
    msg.setSource(9400U);
    msg.setSourceEntity(103U);
    msg.setDestination(24259U);
    msg.setDestinationEntity(145U);
    msg.req_id = 21851U;
    msg.destination.assign("QXHBTVNGASWRIBQPEQVAJQYEGSYIOQYUVFWDAWBHTNZGMUPXMZZSGRLAKUOPPQPSHYOKOMBCCCENKCXLWGTRFFLSWTTPICDAANZECEOGHVQHTHUVYMZBLRAJWVCDWJYIJTDXKZBBYURSXOPNDIBRD");
    msg.timeout = 0.799548893012;
    IMC::GetImageCoords tmp_msg_0;
    tmp_msg_0.camid = 26U;
    tmp_msg_0.x = 15515U;
    tmp_msg_0.y = 33788U;
    msg.msg_data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPRequest #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.930684541172);
    msg.setSource(1076U);
    msg.setSourceEntity(176U);
    msg.setDestination(30254U);
    msg.setDestinationEntity(22U);
    msg.req_id = 4856U;
    msg.status = 217U;
    msg.info.assign("HLWWFEGSECKULDMSGPVNTEQVPNFCKYTKWVJLTLFABPUKAQAYOCGBSUJJZNBMUDHMKECHMZDABNSLYGXSJGDXSYPVJAKTQYOJAXKRXWZUDXJUNEOMIBSYQNBSPNKADMNIRWEWCAKEYZTYZRYIIOOUKHIVJLEPHRZBGQIRLQHPTPGGTILQZWIZUBTPJRCRBVHFTOSDMQCMRZOMEUOFWMWNJXGFPELVZRDVYHXIVNQXFGVCT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.168807744337);
    msg.setSource(10207U);
    msg.setSourceEntity(225U);
    msg.setDestination(38671U);
    msg.setDestinationEntity(27U);
    msg.req_id = 7586U;
    msg.status = 179U;
    msg.info.assign("DCWARHNQCZHHPOPRTFQTJAGIORMPESWWSTFFHKMLDMGYAASZTNYEIAJQETCBFOESXLOKNRUUOKITILGPASUGPFDFDAJUWJFCJFBZNHULYRPHNPWJPORVNDLDVOXVNBNIXTGQYTZHQZIZVSLTLQCBXSYUVDNGEYXPXGCJXQWQOAVKOWRHALWSKKERMNHGIUCFMBZGJYYMDXMZZADXZKCUMMEEVIQLJEIBK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TCPStatus msg;
    msg.setTimeStamp(0.808141057644);
    msg.setSource(31877U);
    msg.setSourceEntity(206U);
    msg.setDestination(41322U);
    msg.setDestinationEntity(112U);
    msg.req_id = 23241U;
    msg.status = 30U;
    msg.info.assign("WJRSHSQFVFZYBBZNQLMGAUDJYCEOWDRFBRBXICHVAIDEEAVXCKEDEPWUAAHMTCWFLRQCTUKVODOLDKHBDTZMCVVYBWWPXGEKEIICWUSJHGJXGJLYTOQGINTSMZJKXYCKJBQFSROQRRXOSYFVPRSIIUEAXCMUUXPFKNPYDPVZFMWKUTOZITXNFMMPZNPEUHHJW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TCPStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.596822432527);
    msg.setSource(33518U);
    msg.setSourceEntity(228U);
    msg.setDestination(63745U);
    msg.setDestinationEntity(120U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.203431796585);
    msg.setSource(62569U);
    msg.setSourceEntity(189U);
    msg.setDestination(11038U);
    msg.setDestinationEntity(65U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Abort msg;
    msg.setTimeStamp(0.844575165004);
    msg.setSource(18147U);
    msg.setSourceEntity(94U);
    msg.setDestination(56168U);
    msg.setDestinationEntity(6U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Abort #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.00958709464068);
    msg.setSource(45807U);
    msg.setSourceEntity(165U);
    msg.setDestination(56178U);
    msg.setDestinationEntity(187U);
    msg.plan_id.assign("MVHGSWCFXISCTHAMYZIVKNEBKSERCTYKCJDCPUGVYYJIZLAOTZOHWCVICY");
    msg.description.assign("FSROCCWRBWBHPZOCPPYFQMIIIHXQMLNORQOJUZDFYNYVLGGESVPRJPABJCSSDJOPCCMSOLJHZHTNWXHZEEHRDQAPEDGQXS");
    msg.vnamespace.assign("KHLNEXIIHVDXUQETLCPQSMOWDNPCMRNYJOQKBLTGABQNIHSWXJPRRHDELEKMNVXBWSZQXJLZHKDUBEFIICNHSLCUZGJQPGKRIQUXOCGHXWITKMHZVAAAAOSYOCTUYOZAERDWYXPGEUGIVUTKDYSLDTLKBVLKFTAZFWUGITQZMSFFOYCYVPZNJSYHBJXUCYWJBPRPODRXMSFVVGQRQVONHAMJRMDIFEPZMTACPFBTNEFWNASVEYMDWJRZBWG");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TSEBYWQLNBPRBDYEAJRRADQNXLEWEGLJSICOQNFTFIWTGYKPKJWQGBOXNSTAGIBBORHCTQWZMYQDUOVPYIMFUOPGHEYFJSHTLHIXUKHIRAEUHJCNRNZPXVLYAKAXBVMDVXZJWJGZZNUIFODPVWLXKSZDCLJSPMHXLFDQDFBTDNKRHEPKZXQJADTGCTECMRSGTQFWCZAVLVUGHONOQMMZCOAEFVICBJVGBIYUNHXYRMPSWY");
    tmp_msg_0.value.assign("LFUUGHJHNZWSFNWOGZREBSNYYTWFARDHMMUHROWQHZQEITIPFJEWKJIBVNOSDWUQPEBRDLKAUKJXMVAWVLQOBDPXLBSTBVPQAHAEPTGYMVTLDEOKSPIZAOKLQIDAPXJFPJBIZXLNYVQWNCVGYCTZUAHUDMXMYIYSMRUUPRSXSYREQVRCZFVHEGBCJTSWLDNOTYHBYUOXTAXNWIHCGXXCGKEJ");
    tmp_msg_0.type = 139U;
    tmp_msg_0.access = 205U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("KWWLYKDCVTGIAEXHTXOEFTIPLPDPGNVQMZSSKBKVCBIBNBPUNTEXJUROAXTBPBZLCRSJBHMNCDRCDNORLIYCWUOGHDTAQXYBNUSULIFBSUYMYGAJXKUVHKQHFXWPREFMWSODFNRTKNFGLPMMIZACXYIIYMKQURDAFECQUPGZYTVVOHW");
    IMC::PlanManeuver tmp_msg_1;
    tmp_msg_1.maneuver_id.assign("BCBCHANJXBTSKWQSNCHVXKXSWOPAPBLC");
    IMC::ImageTracking tmp_tmp_msg_1_0;
    tmp_msg_1.data.set(tmp_tmp_msg_1_0);
    IMC::AcousticMessage tmp_tmp_msg_1_1;
    IMC::VSWR tmp_tmp_tmp_msg_1_1_0;
    tmp_tmp_tmp_msg_1_1_0.value = 0.406250543942;
    tmp_tmp_msg_1_1.message.set(tmp_tmp_tmp_msg_1_1_0);
    tmp_msg_1.start_actions.push_back(tmp_tmp_msg_1_1);
    msg.maneuvers.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.50300976247);
    msg.setSource(8194U);
    msg.setSourceEntity(152U);
    msg.setDestination(28066U);
    msg.setDestinationEntity(146U);
    msg.plan_id.assign("ICBNUXKJLPVVWCHPSSBEGLGRAMDLTMFZBTNTTJ");
    msg.description.assign("LWCKYKYRZVHSPSEFYUVVFZAENJBEUXMOXJDQHFJAVQGIVMYLJTZZNVVGSYYGNPRKEMJAQZPATKTHGNJOSOKXCLOMCPOPBO");
    msg.vnamespace.assign("NVJDKXZLLDBOXQMMDTOEBEFTUTNEWOZDZCGGDULHLJAXZVCQLXPAJYOGVPUXBYZIYOEBWGZPHDIWRHSWJLEHEVRFAAUDYBQNIVAMJMKSCQRYWHGRRTETBQMNGDUFNWSHUYFQBQTSKWAFKLILJQURKBIWOODJJHKZXMPFFTXSCJCSCVYHQKGRPAKIPHYTBMXAGGIRTNLFIFCVMVNSPUWEOS");
    msg.start_man_id.assign("RFTLBRKNHYPAVKZFPJVAGOOAGOUHKVSYYKTUDYRGGPULHFWOPRDBPJFBEXCMZ");
    IMC::PlanTransition tmp_msg_0;
    tmp_msg_0.source_man.assign("AFXNJSXGBHGYJERBHURRRMAKIBLOBOYKALQCUURVIGA");
    tmp_msg_0.dest_man.assign("JEMUBACSOTSMVQEQDXY");
    tmp_msg_0.conditions.assign("JAMIHAOAZEXJJFEIQKRNGITHNTXDILBVYJQGEZRCGEJSSPUXFMDCZMKQYYHETVQUWKTHDTUPIXDUUPABCCOKQRVYOLGCEA");
    msg.transitions.push_back(tmp_msg_0);
    IMC::DissolvedOrganicMatter tmp_msg_1;
    tmp_msg_1.value = 0.499975385121;
    tmp_msg_1.type = 147U;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanSpecification msg;
    msg.setTimeStamp(0.430231447478);
    msg.setSource(16288U);
    msg.setSourceEntity(28U);
    msg.setDestination(41128U);
    msg.setDestinationEntity(223U);
    msg.plan_id.assign("CAWVDFZRZYWDYZZOUNYXWSNSHMXXUTGXHSRNTSCLFTKKFVAFHCUTIANBCMYNNECXYRKHODMBBEFKADHFFPVSCSVTZROEBWYMBQCLOKWPWKGQQJIWTEMJRPVLEPPAJDCBJEMXZBZPGRDVTGNWJEVIIVGXHRGHATPEADEGKJLMYNSEIOGLLRNKAIUIIOBKOMUVWGXMSDYIZKUPJSRZURSFPHDYQJDQUCNLTOQVPUFLUHZXM");
    msg.description.assign("HWXVJUCXMQORTJMJRFETLZRIJVYQPZYSGBFJCDPGLSQCRQQDBREZPHIZPVDTNOYIBQNCRRIXUZTQHAMNSDOYNGZVKBLUDDLJCDZKOEVQYFXRBRTBBAGHCGPAWLEMJANNKOQYXUYXNTEXELGFCPIIFWAZHGOADUZAMM");
    msg.vnamespace.assign("PGNWECEBFZOMYYOWKSALAELTQJFPIOXBGDYRSDPVBXCPAIEZVCLTOHYUMSUOVKZELVAOERFHRMMXCURDIWQKSILQIVVSSXJMMOKIDUHEOINWBVX");
    IMC::PlanVariable tmp_msg_0;
    tmp_msg_0.name.assign("TQKIBELVWOIHCXDCWRBYXXRNZMGOLKGAYIPQEATTPUSQECLKNWGSOJZIWUEKUAYPNNYXDAJCZHFADQSDOMCIHPRZNXYOLMKHPZXDNBGLECPYYKQWWKOLFAFGDTJUHTEDIJEHFMZCJMVNVXOEMOCVDQSVVFBFHEXAOJXMUDJRKOTSN");
    tmp_msg_0.value.assign("QWTQQHZCSPANXKPLBNSDSIOISCTFFNUEHTLBRGATFTZEKSZTRLXKVPKCTUSKWRMEGWBXVXGJTIRMPM");
    tmp_msg_0.type = 26U;
    tmp_msg_0.access = 130U;
    msg.variables.push_back(tmp_msg_0);
    msg.start_man_id.assign("LHMBKEYOOTCNJHBLQBNMHUDAKFADQNTFZXCYBOIVNOCYIGSFQMURSRACVVEPGKSPZUDJBRBKLYXVNZOETFSPJDWXIBMFAXJUYPGUYULXPZMISQLRIULZZIGAXXWGNZICBGHTQSMHMWTKZHXZPCUPCONDIRMDTFWNFQLCDJAXEHGVCKOVJLZVWUKKQHWPKEYQETWVSWMSVOYNWRTBRJRYWLD");
    IMC::PlanTransition tmp_msg_1;
    tmp_msg_1.source_man.assign("BEFTRBGQERJDVWCHZGMAARLHUCVWYRIAEBWLWOCTHYHJNQBPKWYLMXRFUIQJOVNQEDMNPJVSKDLKGEERIFBQSXPGUFRKMBHOPYTKRUCFTKUDYTMFZIYKWICOWIANXTCSQSCFQGZXNVGSVOFNNHZBOZPXLKILXTUIEZSXUVDRYD");
    tmp_msg_1.dest_man.assign("VNPKVPOQEFGEDXRPZGBYBOYBNPSOCAASJPPWJRKGKWBKXIMNOTWQLGNETLULETCYSJRLDVCWQXGMWUYMYIJSVAABVFGTTNBVFLLGJANCVZIHXZMZMRILAWWNRHSAPIPFSKNAMDQDQMJWVEZWHSCLTJRMSGUYWXXLSAHQEOTCIYTQJRBXCOYBFVEGXVOHPZYDAOJUMIQDEEDFCNCBIIBOXLZKRXRDFT");
    tmp_msg_1.conditions.assign("TGUHYXLHOOILDCWPZYDYBZUIKEIKQQTWLBADZCEMEAUXFTVPPYVQVUFHIZOJHTRFHQMRWMKXNQDHMUKTDKPGZUXYILFETKRXCULWULNCLBDMXWIRNJOFNCSQCOBFJMTP");
    IMC::Teleoperation tmp_tmp_msg_1_0;
    tmp_tmp_msg_1_0.custom.assign("TCACBSBEWFYKADLMDFERHVIXRACOFYVVWUKPZSBFIFQTZMTQJSNLALZDXYPPCFWYTAEAVSXMRTRQSHJACOWTKHBUSOZRNJRQWUOFEQKOGLUYHMQCJPEKONGILQXVXXSLIPMCYERBNNKLSHENFFPCWJUWUYKPCZENTGZGXDGCLLJGEAZKMUIMRHED");
    tmp_msg_1.actions.push_back(tmp_tmp_msg_1_0);
    msg.transitions.push_back(tmp_msg_1);
    IMC::SmsRequest tmp_msg_2;
    tmp_msg_2.req_id = 17074U;
    tmp_msg_2.destination.assign("LZERWHNPIVMTQIGWQSQOIZLYSGZBCSVJCROPNLPQRXNBINTXUFMHPWYOLOEATBYAECPMIMHNEUCOGVLXRDNIJFZBABWLFBHVOSQCJTDGEVULUXKEQJNYCYBCBZLMHOSFYMSGDXTWUCZORKABXGPHZZIZQJLRMJUUYKQIFSYELDDAPTMWVQGPNSHGRXWDFTRANHFSUQVKGNVCZXFDVKEKEPFXJJWMUB");
    tmp_msg_2.timeout = 0.949694719669;
    tmp_msg_2.sms_text.assign("HYJOUWYAXWFQMRORZLJBYWKMKKXLACNMGPJBYCFEVRJWAUEHZVSOSMKJVIQHCZHBBFIOOALALOFTLIWSUNRLPFNEWTTTMFKCDRPXEORDELTPVNLBGWKXFNIFNYVPAYQXAUTSGSPDGWDQAUHNOOVIEXCGVQTBCQIFDHZMLSHAJIRMXXGJLKUDDKNNYVSBCWQJMIZPOETGGBQUHEPSUXJGXSMZPRBFRBDUTNZEIYCMKVVY");
    msg.start_actions.push_back(tmp_msg_2);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanSpecification #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.105695654576);
    msg.setSource(23077U);
    msg.setSourceEntity(7U);
    msg.setDestination(40120U);
    msg.setDestinationEntity(120U);
    msg.maneuver_id.assign("CLSWVKYKGXYTHORWIULDLJBKGRCABDCANUULPPJWEVDTRIXGGGMQNHVYFRJYYMWZWWRHVMFAXKJEFVJHSNNYBZSFITOQWYCEEEBQSURMOMQQGTBZIKCFNUPUCVFLTEPPEQMJEISPMUKWRTZDOZTZWALLBBNOHIPNADLMXKXXZXTDTDRHGMMAFCLRLQIVCCZZDGHGVPQJONHXPYOBSSPSIIJQSDWSRUNHHUVTAAOCAUEXKOKFBIV");
    IMC::FollowTrajectory tmp_msg_0;
    tmp_msg_0.timeout = 27591U;
    tmp_msg_0.lat = 0.0456185219507;
    tmp_msg_0.lon = 0.659382307408;
    tmp_msg_0.z = 0.941494507328;
    tmp_msg_0.z_units = 40U;
    tmp_msg_0.speed = 0.387494683733;
    tmp_msg_0.speed_units = 16U;
    tmp_msg_0.custom.assign("CYVYJYRGZRDQSPFZAMLAPCSIXAEVRMGGKXJVYRDHKDMZTWHYCVIGTZUSAUGHZEHWEWVUUT");
    msg.data.set(tmp_msg_0);
    IMC::LedBrightness tmp_msg_1;
    tmp_msg_1.name.assign("MEASWAGEMPZNUMOKXBVITCCYYRYYNSXPGQKFVPULZZXXIFHLSDLOVOPWHQRHEATQNAJECGVTCBKFZVLTKZEBWNJUMFJGPQUAXTVNQZJTVOIJGVXFGYNDLBDRSWDFLHEHZFFSLODIORJXKGIOQDQVBSWHDHNDPVAFCSMIHENCBJWMUWHWDXQBOPJXBALEKIUKWYNMJAZTYBRLKJQECTBQ");
    tmp_msg_1.value = 81U;
    msg.start_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.511767071728);
    msg.setSource(23347U);
    msg.setSourceEntity(151U);
    msg.setDestination(60484U);
    msg.setDestinationEntity(139U);
    msg.maneuver_id.assign("AZUSRTPNMZH");
    IMC::ScheduledGoto tmp_msg_0;
    tmp_msg_0.arrival_time = 0.53518938805;
    tmp_msg_0.lat = 0.490196958522;
    tmp_msg_0.lon = 0.788037548606;
    tmp_msg_0.z = 0.942520469714;
    tmp_msg_0.z_units = 18U;
    tmp_msg_0.travel_z = 0.967589735722;
    tmp_msg_0.travel_z_units = 89U;
    tmp_msg_0.delayed = 236U;
    msg.data.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanManeuver msg;
    msg.setTimeStamp(0.440964398148);
    msg.setSource(62676U);
    msg.setSourceEntity(185U);
    msg.setDestination(19958U);
    msg.setDestinationEntity(109U);
    msg.maneuver_id.assign("NUPQTPGWTVWCZXUIJBLDHHHQCHGKGSEAMYDLDISIFPQAUGKPRXFPVGBRDIFKXSITGRJRKYYCTZDQYPKXWUMOAQVJWVYJZFGHTSTKMRHIQBVLGBOFBVKFFOJDBLRXDRHUVEWSIJJNUOIBYCMNOCONRPOSWBSDLULCANBEYEZYCAIYSOZKDEEESFPTODWQPVJHBNRZWKCLWOKRGXAECLXWMMLZNXNXQJZHGZLUXMTHVSTIACVAEJMEMZN");
    IMC::CompassCalibration tmp_msg_0;
    tmp_msg_0.timeout = 10401U;
    tmp_msg_0.lat = 0.319095073576;
    tmp_msg_0.lon = 0.549964197676;
    tmp_msg_0.z = 0.462077914871;
    tmp_msg_0.z_units = 137U;
    tmp_msg_0.pitch = 0.529519030987;
    tmp_msg_0.amplitude = 0.686174596438;
    tmp_msg_0.duration = 5130U;
    tmp_msg_0.speed = 0.229164677415;
    tmp_msg_0.speed_units = 188U;
    tmp_msg_0.radius = 0.746372741701;
    tmp_msg_0.direction = 194U;
    tmp_msg_0.custom.assign("MWUCOXCKQFPXMPIRNW");
    msg.data.set(tmp_msg_0);
    IMC::ProfileSample tmp_msg_1;
    tmp_msg_1.depth = 11532U;
    tmp_msg_1.avg = 0.69927017484;
    msg.end_actions.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanManeuver #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.923196868537);
    msg.setSource(49780U);
    msg.setSourceEntity(43U);
    msg.setDestination(61113U);
    msg.setDestinationEntity(152U);
    msg.source_man.assign("LLRTDDTVDDTFEYDONRFFQQHZGOUCSMZPNUPXTNFWPWAEEZYJSSCEGKSZQMVEIWAUHDSXUREYQVDXJAGHRCIZWHYCNIHWKOSPXAVQYQHCJLBPGFBPULOCCIUOJOTRIAGCLAUGGMGBDTLONGZSERPFSLIXZVYSXPXWJLTWKOVDININBWNZIHWFRKBJQFXHXYGWQKMCCMKJRFRHKVKTYBQAMKMREAE");
    msg.dest_man.assign("TJSGWGDMPQPQUEQLVCLPYYZKJKITGNPZJKJJBMQBQXRYWNCRYILRWACHERU");
    msg.conditions.assign("CNIMERCLRUBCXKSQEVWPDAIRVYUCGJUXZHLB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.117917274914);
    msg.setSource(42838U);
    msg.setSourceEntity(9U);
    msg.setDestination(51193U);
    msg.setDestinationEntity(203U);
    msg.source_man.assign("VWFIYBWAJHKONRWPFBKZDNXWOJDRQSASFWVMPIZJNQWYWJTEWEKJOOZZGLVLDJIAEDKRGBMRCXEKLHRKGNPBXXHBDBDJIFQXTBONSVMOLXSHUMSTGHYEHXJPOXYSYDVMGIGUTAXYMQNTFYRIZPVDMIVENULYTUUCTAALQRPUKAREMLHLCAGHFNMZQBITPKQTKLUFAPMNVOCHNFCISRCPDCUHTFZUPJZKQGCBVLGJWEEGSQOIEAZYUZSD");
    msg.dest_man.assign("PYZOCUFAILJWCNHQCTVIETWFZQLOQSSANTBEZTMORKAJQTSJZOKRUANGGVHZLGEPPX");
    msg.conditions.assign("NNFBRBJLXCTJDFEIITITMXRDELTDLRZNOVZTKLJDSQVSZBQKYCQOVNFWJPSZUWGKASDAHYSTLFQUIHYJEKMDI");
    IMC::NavigationData tmp_msg_0;
    tmp_msg_0.bias_psi = 0.751294288633;
    tmp_msg_0.bias_r = 0.51286489629;
    tmp_msg_0.cog = 0.639022537457;
    tmp_msg_0.cyaw = 0.985856678605;
    tmp_msg_0.lbl_rej_level = 0.161066472348;
    tmp_msg_0.gps_rej_level = 0.710895703328;
    tmp_msg_0.custom_x = 0.604955922259;
    tmp_msg_0.custom_y = 0.0458870603681;
    tmp_msg_0.custom_z = 0.790665191018;
    msg.actions.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanTransition msg;
    msg.setTimeStamp(0.122391428683);
    msg.setSource(5640U);
    msg.setSourceEntity(116U);
    msg.setDestination(27883U);
    msg.setDestinationEntity(77U);
    msg.source_man.assign("QNRKGQZOPCHBNJUZOXCRTUFYVTKOAIVSYZTSDUPUPXGSMONZLLTXUXDJLGHFGEQKXQWNIZERVLCYVBMXBLASQFWUDOXWGDFKJIZAWEQEPVHZAJFCRFBRHTNUTIGSM");
    msg.dest_man.assign("TUWZYCBWEBHKOCIZWBQOOGQMGCZGCQMHTLEVYAIHDZDRBHHRMJBSCNLXQUYSDNWBQOHLDFOFROGCJQMFJPIEWSJWNEFBTJZLSNZAMXNXWJWRSBMMLPZKDILKUFIRVLG");
    msg.conditions.assign("PYHKRESAFWWMRFMGZANTZVVDYOPHYGCKTEPKNJIDH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanTransition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.153013053421);
    msg.setSource(62955U);
    msg.setSourceEntity(88U);
    msg.setDestination(10175U);
    msg.setDestinationEntity(23U);
    msg.command = 188U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("VGUACGGJLUNXFIXTNWTNYIQUGQYSVFELLANTAVIOEETZHJABTBUPCIWFFSIPRKKBINPGRZMKOCRWAKDRTAHFEXCXZSQDYMJDODMQVZBJBEHZZHTHBCMAOMNHMLMZWSWCLZOKWXCILFXMTSQRKPOYNAYOHUKKLMQVBWFKUVRIQVFJPEYGRZNAHDSDOTXJXHXVUUDZJSELWAQBMJFJHWPRRYSUCLOVGPBNOQGDRNPDKQIJGDVLFBCYEESYSYXGUW");
    tmp_msg_0.description.assign("AQJRTDMBZMJLZYRDBNMCJDGTFWCKKILHGRZEVPCCEUBTPATYPVSIFUWJPOUHIOZGEUGESMHVGASDGPNFWLDLFODVHAAFFNZGTHLKQGFXQYYUAEOWAEQWERSBNZFBTYAXLPXKGKLHMBDXXOJKSVITMNSSLCQRCRVIRRNVYTHWJKUVXUEREPMYISUISQPNJDLMCYBOOVOXHNALQOXJZKFIFEPQTGKCCPZQZ");
    tmp_msg_0.vnamespace.assign("DONYFNNRFWHPUZHOYMXEAADHMCRGBS");
    tmp_msg_0.start_man_id.assign("BRBIAKMLSNFJRIUEHWKURPFDWVONA");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GVMMRXVDWUQEMIZIQMARRNBOPQRHPGUZYVEGKYMUBOHPAYUIWNANWVIJKZRAOQQZAGKHHTQSDKXVLABTMAPOZGRZSCYNMWEYBCYUHUTFROLULFSAIFHWEJDFDZFLNMVVOBQLBATSKFRMJOZWJRCJHFWTKWPEJHBFVJJSGXBYYPUNICHCXTZFRDGSLEIIVG");
    IMC::StationKeepingExtended tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.865737561888;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.970208454718;
    tmp_tmp_tmp_msg_0_0_0.z = 0.104179432675;
    tmp_tmp_tmp_msg_0_0_0.z_units = 179U;
    tmp_tmp_tmp_msg_0_0_0.radius = 0.811364386171;
    tmp_tmp_tmp_msg_0_0_0.duration = 12733U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.167634728064;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 82U;
    tmp_tmp_tmp_msg_0_0_0.popup_period = 47136U;
    tmp_tmp_tmp_msg_0_0_0.popup_duration = 21701U;
    tmp_tmp_tmp_msg_0_0_0.flags = 236U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("HWGCZDKPKQBEKCKPRBONQFTFMGDCBHMGWXNSTMYPIWCMRMFYONESTJDCBVCGDSDHLTNWUBTPOMPLKGCEYMHZQBRXODZLCAUVGAVDEJIJJQYIABZKOYHIZWOX");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::TrexPlan tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.reactor.assign("OVYFCNIZXLUVXCHOTTRNBRPAJBFQZEHJGJWSNPMPAHXQQQMJBLNORKKITBUDLGHVYIWJXBSQMFVAQFKRGOIPGYFDPHEEWLXSCZCZGVANVXTRMRPICFUPBHAZWIPSHMWKUZUYRNLTQGVIZBTAEOYELDVYSADDJONMLJHYBOGGSMDZWCEXFNJKSIDQVFDWUEMTAKLIFRDZRIHEDTECFAECTGPOLUSJXWMSVXKTUOQSUPOWNNZBHJACYKYKKWB");
    IMC::TrexToken tmp_tmp_tmp_tmp_msg_0_0_1_0;
    tmp_tmp_tmp_tmp_msg_0_0_1_0.timeline.assign("WLNAMZLUBRRGG");
    tmp_tmp_tmp_tmp_msg_0_0_1_0.predicate.assign("BJSCFLKGJNWVXEFRFRCXSZZTCUIUCIMUJQTAYFBBOTUVNDHJTDQWVABYWDOCBDEAPUNRGNZPN");
    tmp_tmp_tmp_msg_0_0_1.tokens.push_back(tmp_tmp_tmp_tmp_msg_0_0_1_0);
    tmp_tmp_msg_0_0.start_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    IMC::OperationalLimits tmp_tmp_tmp_msg_0_0_2;
    tmp_tmp_tmp_msg_0_0_2.mask = 84U;
    tmp_tmp_tmp_msg_0_0_2.max_depth = 0.228691816686;
    tmp_tmp_tmp_msg_0_0_2.min_altitude = 0.73423937462;
    tmp_tmp_tmp_msg_0_0_2.max_altitude = 0.510434870542;
    tmp_tmp_tmp_msg_0_0_2.min_speed = 0.584355301779;
    tmp_tmp_tmp_msg_0_0_2.max_speed = 0.771320096835;
    tmp_tmp_tmp_msg_0_0_2.max_vrate = 0.746700762128;
    tmp_tmp_tmp_msg_0_0_2.lat = 0.0647423478865;
    tmp_tmp_tmp_msg_0_0_2.lon = 0.698219595176;
    tmp_tmp_tmp_msg_0_0_2.orientation = 0.996588359675;
    tmp_tmp_tmp_msg_0_0_2.width = 0.667290614117;
    tmp_tmp_tmp_msg_0_0_2.length = 0.0163992554448;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_2);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("RGTWDIKHLJQAVLNXXWXKPIUOTRKRDWNNIZZMWFZPRLXNRJGZH");
    tmp_tmp_msg_0_1.dest_man.assign("NDHJINFDAWOEAIBQTTOATCYCLJ");
    tmp_tmp_msg_0_1.conditions.assign("KYATNEWFLRUGYYUSTGGOXOQZBBFLDQCBHVMIDXDVPSOJPIOFVDXEZMRKIEWWLVACZNUONRHFVCQWTYLPHKXPLUBBUZSRERALGYDWMJAWVHZYCHYRBNHANZEMENERJWSNAJJKGFNHBOLMHCSUMDIWVYTYSDTRWSFSQBZAQGKJMQQVIDBOGYMEKFQIPTKORDCXUATLQOPDFCMVJTPSCXIGP");
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::RhodamineDye tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.value = 0.911811152266;
    tmp_msg_0.start_actions.push_back(tmp_tmp_msg_0_2);
    IMC::MonitorEntityState tmp_tmp_msg_0_3;
    tmp_tmp_msg_0_3.command = 103U;
    tmp_tmp_msg_0_3.entities.assign("QSWLDPDAPZOSDUFZJFVQOGXXTILWVMTUBWYJWOWYENAQBGKMUGILZXP");
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_3);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.46983497915);
    msg.setSource(32818U);
    msg.setSourceEntity(46U);
    msg.setDestination(38580U);
    msg.setDestinationEntity(6U);
    msg.command = 40U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("PLKGWATEQETRPZMIHJTKPZFQNUODKMLTULBTFDPCRHYELPHIBVFQMKAQONWWOXGBFNRDAGQHJDXLSEKOZWNJCQENXWVVWJXHROHYLMERBZJGDQPBGHSMXIBFMAFPARKVTIBEBGQLZCHKXFUUACRMAYOIJZYEUNETCGWUISCSUKHMDVENPSYYBTGVTDHXIFOZLOCBWSKQ");
    tmp_msg_0.description.assign("WDGBAKANRUHYNWMHGGIVZDDATLGAZHAVPCZJFQXRSLOXVCFWXWMJFQYJLYAWNEQLRVUCXVDMFIPRJPSVBKFTXUYMKETPKTCEYTREQIITKBWQOPRUGTCSMGHSLIXEFQPLJFYIDMUQSBHCNJHGLHKWEDXKNOLFMNCOUMHVOVQKCFMHJBNTUWZQAJGNNOMBEAFWLC");
    tmp_msg_0.vnamespace.assign("MODRYXUIEGTHSCUUFEVBGZWAQNATVWULPWDDODMJEALWRSKPEXZQVUWBZOADTBOQVRIRYTCLZFEGFHYFDCKMJHHGZTKJGNXUOCXBPZWXEYVWOWUKZERHPOVGCDWJJZYXJHEPCAGBBNOXZAASJPMHVFYQQSUSJJXATKNGBVILMSIERQXNNMARZMJIMDPGLFNU");
    IMC::PlanVariable tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("AJXRGMGSLYZHJHPOUNIRQVDZAMOAGUAMLDWLIIBXUQXMHCYLONFGGVBSJEGJSHARNVPQTWTBKMCEXSGTIQHAGZQQUYMOKEIPCFQIMGACJZABZDUSKQWDNKSLAVSRPZBCPEFJEWYVRIXCENTMPUCYLRHLNSJJOCTUDFTFJEMVPUWOFWKNKFYLXDIDLHIHEYMLFBYTHONDPGNXBQNKFZRWYZVOXQEEKCRVKDVTFBWB");
    tmp_tmp_msg_0_0.value.assign("KXBSZNQWRNUXNQHEISOOMOIVPETICUYGVRKFQHOBPRWAMXOLPEIDTJPUZRJDQRXDSEMHYUJKKLMFBDPJDHGNAWCDIVJTLIJUDFCLDGRBDAPMNANMXYWWPWSPSNXYUAZFYGFLSFLCDPCQZTMWTVPCNWLIYATRTGJZKRSXZBOMHEXKBEHEAYOIMYZXUNWJZJKUFITKGBCQGBOAYCSEFBHGUHHECOFNXQFBSLUQROEASTLGKZGZA");
    tmp_tmp_msg_0_0.type = 157U;
    tmp_tmp_msg_0_0.access = 211U;
    tmp_msg_0.variables.push_back(tmp_tmp_msg_0_0);
    tmp_msg_0.start_man_id.assign("MCGWTWWFGQYPFRFHESELCWUGZMNRUOEBZKYWDJYFSIBSKJWZTOHDFUXPTRUBVMODIAISTALAHUEOZHMESOZVSXYVCHKQIWSDXKYEHKYCUCZKOGHVMLXPRNAUBNRENVJFDQMGNQEBMQTLVCRLATQDYNIAOFTJJIXCFKPBIZKPCGJVQMVJAPQPWYRPTCLXJASELWIN");
    IMC::PlanManeuver tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.maneuver_id.assign("EVPIOWYHAHOVZOWTAE");
    IMC::YoYo tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.timeout = 12668U;
    tmp_tmp_tmp_msg_0_1_0.lat = 0.44520894555;
    tmp_tmp_tmp_msg_0_1_0.lon = 0.435404045251;
    tmp_tmp_tmp_msg_0_1_0.z = 0.153888661391;
    tmp_tmp_tmp_msg_0_1_0.z_units = 54U;
    tmp_tmp_tmp_msg_0_1_0.amplitude = 0.100210183368;
    tmp_tmp_tmp_msg_0_1_0.pitch = 0.21711107254;
    tmp_tmp_tmp_msg_0_1_0.speed = 0.541983245018;
    tmp_tmp_tmp_msg_0_1_0.speed_units = 238U;
    tmp_tmp_tmp_msg_0_1_0.custom.assign("KLTLTOLTGZOVUGHSDZWGILDRFZSXWJNMWACQNQYCJZHVNOMMXUPZEQFUXQUCKSRRILBYXNKUEICJGFCHGWKJUEWULLKXOJYBYVVJPPBCJKDWYDUYTGKJWTBRZVLJYNPMPSIXOZKDAXCGWDIEAVVTMHYMZHOTBKAFXTSUALCHMFMFIQQJDFPHWYQDTPKV");
    tmp_tmp_msg_0_1.data.set(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_1);
    IMC::PlanTransition tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.source_man.assign("RJCJEFJLSXPYLCEZXZCCEHMXUZPRHZSGHTWVPYPDGBODRJSRFYPNRAKWIYGUQLYVLQVTVALIXVZDTVHOKBWHBKIOZQNAFUSNXTBYUMIUPDNKSFOWFQOHGQBAMETQHAFCAXIUZUMEYSZCHWEOYMNSDXCFQHLQJBVGKTBOTKKOTFGLXEGAMIUIUPKWXBGTCNWSDPRTBGRRWFQLASIEUWNVEYIFJKOWEDAKRVHXMMLMZNPDJCRPNSDDYIQMJCVA");
    tmp_tmp_msg_0_2.dest_man.assign("RKVUNLFQOAZLDMEYQPKHFWMDRTGTULIARGWUHTIJVCBPJUIRAXSQNNBWOPYTCMECFWXJSQHEJBVZYSZNJEPDZIGPRNUZBVPAPXAIQDILYYXAJWLIXHHSARKIDCFKLWFCJNCXMCXGOSYMRZONUOAFUJFRZJPTVGBQYLYXWLEZWBHOGQSDKYOTFEFKEZNVLCBVRIJMLRKVFAKUSZPTSVHDGHSNCSPMWUXVKBWBQGXQMDQDOG");
    tmp_tmp_msg_0_2.conditions.assign("OASDTHKFTDZGKERDWMNUTQTMUPHWCXXVOUZAFNKWYBOVQCRNIVJMUOHZPYWPSNBTRYJTUGQPGOSBNGLZEPNORXFRJYRGADJRLAFYCJESMALGHTPYCSOMSXHLXUDDMYKKSQPFQNQAXVEYYSQBBFNQWOXNRIKIHTZMSNDTFCECBQACORGIMYCBOFBLEJCXHIXAZDSVBAMVVWHWIWWUZILVJJUIGTGVKLXUPKMKJRPLZFBF");
    IMC::DevDataText tmp_tmp_tmp_msg_0_2_0;
    tmp_tmp_tmp_msg_0_2_0.value.assign("LQLFNTZUOKOQFPJNNABJXSBRVPPQZQVUKWOOIKAGDLSWBETOQUBFBWJEDNMACOWYYLANVARLGKGDTXEVBVUZCRPGVKIJESGXRGVRHHDAXYSPFVIUTKGANDMINWRPLUQIFZHGLAWCEZABNJNFDXSYYHCODNFQHIBRWKZFQDPETZFRHQTCMYSYXEBCGOFOLWMHVGUTMBMXSLCHEEIPYLPJMJTCDKSZYJJXMRKEYUAZRWCUXI");
    tmp_tmp_msg_0_2.actions.push_back(tmp_tmp_tmp_msg_0_2_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControl msg;
    msg.setTimeStamp(0.0294263675434);
    msg.setSource(16160U);
    msg.setSourceEntity(82U);
    msg.setDestination(58538U);
    msg.setDestinationEntity(156U);
    msg.command = 21U;
    IMC::PlanSpecification tmp_msg_0;
    tmp_msg_0.plan_id.assign("WRZPLIIDATIEGNLZEOKWWHFWXNLPJTGMXKJYGVVPZFFZYNLGNVKJCYBTEQNXZANFIDFCCYZSKBURVDSHUYLWOIAHCGWORKUUETQVPFOHCRYLGYXTDOQVMTBEDIXLDAQTBF");
    tmp_msg_0.description.assign("RLUAUYJZDILTBOWIHKDGPLKAYPVJIIDOTEAACKCSLHJFWZNTWMJIADKYRWHRZDZRLOOYXBSNBVOVJVVLCGPAIDBRNSWPTJGONJQSOVHRQXMTHQZUKFNMFHNTKBEHLNXUMYFFUHDMLZAZQFRWSBTLEEHZYWAEZUQEGEBUDGMUQIWUYPGPSQSBKRVTFPCXCSOGSFCMNAIPMBNYVUKRYGANWJJXPMQITEGDWIYXVXOCKRMLGDXVXQZTFF");
    tmp_msg_0.vnamespace.assign("UEAWFDEZYMGNUNKWOOLBYXEVRUMVPFDKTDHIAWFU");
    tmp_msg_0.start_man_id.assign("JVETBCLGPCMXDLJPOGRTOGJFYOYIKJNWRCZKKMYWJASXVIYFANWRBTFGVTYVKAVEBLNYQGGSKSRBMRUXLZSSUBNHXRSOAFKEONSQMKMLQVPPCBMIDEUPXGMZCHIRQTVDOHOJFJFBUBUXOHBQAYDONHSDRWNWQVEGEFHUZOX");
    IMC::PlanManeuver tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.maneuver_id.assign("GVBDUSOFOIVHMRLDJQGXTZQWRIYLQNVPCFYGGVUFWLSBIMDCCYCINYDEADAYSFPFATNVZUGJTQOMYNWTSQNPJHZJKLGDLKKETNJPJPAVJRRUQZEHTWMBHZMJIDLYUHXBYKQPBKXKEEOXIYWCEQFNXDCUNXFUDZVIUMPAITWYIABPPLRLEVCLGIHQHXXGOMBRTPXOVSDZBGKTTAUZEORWECXKGSAUASWSFNOWCMFKJKONBOWFBJQHSHV");
    IMC::Drop tmp_tmp_tmp_msg_0_0_0;
    tmp_tmp_tmp_msg_0_0_0.timeout = 27491U;
    tmp_tmp_tmp_msg_0_0_0.lat = 0.29651631903;
    tmp_tmp_tmp_msg_0_0_0.lon = 0.69868434534;
    tmp_tmp_tmp_msg_0_0_0.z = 0.128304029465;
    tmp_tmp_tmp_msg_0_0_0.z_units = 47U;
    tmp_tmp_tmp_msg_0_0_0.speed = 0.304831645317;
    tmp_tmp_tmp_msg_0_0_0.speed_units = 223U;
    tmp_tmp_tmp_msg_0_0_0.custom.assign("JXQFGIUJYWBFDXVPAREVMWNNQGLHLPXGRRYHYSAOZPPAIZAHFHKPLGEEUDDFZGPNMBPVKFMNYTBUFFAXHFYZUKSCKKKBDSXWQTTGPVWJVDJAULMQQTIZWTVEOWLHNLLCTIXTUBIHNBDZCEKEVHOUHRIOJWYUCORMYAPNXSIJWXANQCGEEXZNRQJMF");
    tmp_tmp_msg_0_0.data.set(tmp_tmp_tmp_msg_0_0_0);
    IMC::WindSpeed tmp_tmp_tmp_msg_0_0_1;
    tmp_tmp_tmp_msg_0_0_1.direction = 0.208122442417;
    tmp_tmp_tmp_msg_0_0_1.speed = 0.503589895619;
    tmp_tmp_tmp_msg_0_0_1.turbulence = 0.968503403297;
    tmp_tmp_msg_0_0.end_actions.push_back(tmp_tmp_tmp_msg_0_0_1);
    tmp_msg_0.maneuvers.push_back(tmp_tmp_msg_0_0);
    IMC::PlanTransition tmp_tmp_msg_0_1;
    tmp_tmp_msg_0_1.source_man.assign("FEHVPGKKBBUWUOJGYIYQSIMFP");
    tmp_tmp_msg_0_1.dest_man.assign("XVQEGWUNZESXGPFDUQMGKMCDNPY");
    tmp_tmp_msg_0_1.conditions.assign("VJDXZLIXWUMYIHQRBKWQDNUSHWBNWYAHQBLZOTCVQGWWKWXBECCUKFQSCFAAEUOKDABRIRGPULVQSHPHZEIQPUMIGOKJRGVDDETIMS");
    IMC::VehicleFormationParticipant tmp_tmp_tmp_msg_0_1_0;
    tmp_tmp_tmp_msg_0_1_0.vid = 44532U;
    tmp_tmp_tmp_msg_0_1_0.off_x = 0.330617867057;
    tmp_tmp_tmp_msg_0_1_0.off_y = 0.529194817058;
    tmp_tmp_tmp_msg_0_1_0.off_z = 0.858967648182;
    tmp_tmp_msg_0_1.actions.push_back(tmp_tmp_tmp_msg_0_1_0);
    tmp_msg_0.transitions.push_back(tmp_tmp_msg_0_1);
    IMC::WaterVelocity tmp_tmp_msg_0_2;
    tmp_tmp_msg_0_2.validity = 230U;
    tmp_tmp_msg_0_2.x = 0.899082967751;
    tmp_tmp_msg_0_2.y = 0.528624363002;
    tmp_tmp_msg_0_2.z = 0.507244244465;
    tmp_msg_0.end_actions.push_back(tmp_tmp_msg_0_2);
    msg.plan.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.289188672167);
    msg.setSource(28981U);
    msg.setSourceEntity(242U);
    msg.setDestination(2331U);
    msg.setDestinationEntity(28U);
    msg.state = 72U;
    msg.plan_id.assign("TGMCOWBGMPRPSXHZWNTAIEIMAMONXQXTVJDTIXOIANWGUOFUKNMFLLSHWOYGMRXOPVJYWPBUUQTUDCLRABRDVEVRQMKFEPCDCWIANKVLEJDLJQRYVCKFMIZXRZQRGKSLEYBSIYFQIHMABWYWEQKLYUDNZKSAKPJYRKJYWUJHLGHUQSD");
    msg.comm_level = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.7576427645);
    msg.setSource(64456U);
    msg.setSourceEntity(204U);
    msg.setDestination(55239U);
    msg.setDestinationEntity(173U);
    msg.state = 68U;
    msg.plan_id.assign("HVMEKMAYNDLQQHANPDLUZF");
    msg.comm_level = 155U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EmergencyControlState msg;
    msg.setTimeStamp(0.149356057691);
    msg.setSource(38921U);
    msg.setSourceEntity(254U);
    msg.setDestination(14397U);
    msg.setDestinationEntity(32U);
    msg.state = 195U;
    msg.plan_id.assign("HSOBHXKKNQTHGTAUWGOURYQCKMFCMELTNZUTYRCLBONZUCRARPQWZHKDEVWPSUEUPEXBACWBLABWJSHPVMDMLNOAJUNOXSRMSOTGVVLIZXJYBNUPAKXJDSIMMKQZDHLEIVJCVETYGRHSCWXBWXXGTFIVPZWDFKQEYPKFNVMZGTIPQGGIDBJVXDCFLTOIPCFJYIOWIHQFMAUAFWNYRKRHQKLDYNASSQGXODARMS");
    msg.comm_level = 115U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EmergencyControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0623463098308);
    msg.setSource(47587U);
    msg.setSourceEntity(144U);
    msg.setDestination(27989U);
    msg.setDestinationEntity(168U);
    msg.type = 86U;
    msg.op = 162U;
    msg.request_id = 56839U;
    msg.plan_id.assign("SWWTMRWNBLMZEXWIJZUDORQAZLETDZCSHQCTKCNRQIFWDFUKYSQGNKBUTFUTVVIZPUAATMTGYIQFLDFXZKERAYSLDPFUGXOOMAPMHGSMVSSHCSLFIDHNQXUBCVPEKDIRDZJCNPBQBWJMWJWOCEVLODP");
    IMC::WindSpeed tmp_msg_0;
    tmp_msg_0.direction = 0.771146368974;
    tmp_msg_0.speed = 0.283465087418;
    tmp_msg_0.turbulence = 0.305098732362;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("KPPKYBEBJUGUTWXRQUHEFYLKACPWLATCOEFCRLNXRDTWDZLMBFMQWBCUVFWQJEZTKKUBAQIKDEFYYWDTQYHOOLZSNCGVFANAKMMVYONRJIIDCHCOSAODPSGCEGHKLTSRZSPMVWB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.324626380807);
    msg.setSource(3663U);
    msg.setSourceEntity(110U);
    msg.setDestination(17110U);
    msg.setDestinationEntity(195U);
    msg.type = 120U;
    msg.op = 14U;
    msg.request_id = 50685U;
    msg.plan_id.assign("KDVMSUPODWBRHVYGXBMJFFNELTTFJNWRFYSCL");
    IMC::DesiredThrottle tmp_msg_0;
    tmp_msg_0.value = 0.596493418361;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("TPAYWPDHTADEXBUXZRMUGIFUELHWCXIVCUUNMQIHGAEJDDKWWTSLXRRNJZFSVKPSLGFQSYBXNWALDELAPQEAFXHGTPZJUJIHPEOQRFRGQNMTZPKOJLHBCIVMYMAZZHCJJWGK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDB msg;
    msg.setTimeStamp(0.0741576762085);
    msg.setSource(20636U);
    msg.setSourceEntity(115U);
    msg.setDestination(51979U);
    msg.setDestinationEntity(98U);
    msg.type = 140U;
    msg.op = 152U;
    msg.request_id = 21612U;
    msg.plan_id.assign("HJKVPSOTZTLIZCXFRUEYGAFIRGJBONQUGKTQSQSODEEBYTMCOMAHNFKLQNKFFLLUBJSMHWUWPVROVBJZSMRKLVNMTFEUR");
    IMC::TeleoperationDone tmp_msg_0;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("IOIDZSRBMQUPQKBITWNSPRRLYLYXZKTAWUBJDMMJKYVEFKBJCYAQVAGIVNRLISTYXTDCWGXXXORKWZVBSLHGZMXWIUMSNJFCOBHOHHNSQCXUZGMGTHNJOAJUGQHOHPVKJHLDUEVEODKOEETWFPPWIIGJVLLRALZYKLRCFQQVPEAKHYPFDWIMWNARUQFEFTCSFOFKUYFTRDSPJOLIAZZSJPZEUDEHBYNAQMCDSXCXTCEVNXNBQGPTUNYGMDBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDB #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.515202936442);
    msg.setSource(18659U);
    msg.setSourceEntity(103U);
    msg.setDestination(26149U);
    msg.setDestinationEntity(95U);
    msg.plan_count = 15289U;
    msg.plan_size = 3974209611U;
    msg.change_time = 0.11579395283;
    msg.change_sid = 63236U;
    msg.change_sname.assign("REFDEWJPUBNIBOMXZSTICQMOWNYUWFVCTNINROJLSMMKWXFONOXQLEHVZZFDAIKIZRKBKNSVCGAFZHRTMGIMTHZAQWBVVZGRDSCXSUPUGTHKKCJMEFOMLHFLYBUCUYPGGKLJIHTPBYTDNASVDLYHLPYKWRAFWDXSNWJLNMGENRHHUCQPTJ");
    const char tmp_msg_0[] = {62, -9, 99, -76, -50, -104, -111, 88, 52, -58, -6, -109, -123, -48, 15, -98, 80, 73, 50, -91, 27, 69, -119, 56, 94, 36, -10, 15, 2, 83, 9, -74, -49};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("NLSKWJFIKTZCDUKXWZSMYYSWPRDVSWOYKIOJIWFJJQIOONXNRUOCJYXWMQGFTGLPEYLHFACVABNTFUCHKKVZTEBTHIRABTBYDPPQXOMZNLBWZDTUVFAXCRTSIYSNDLL");
    tmp_msg_1.plan_size = 54719U;
    tmp_msg_1.change_time = 0.984591225701;
    tmp_msg_1.change_sid = 104U;
    tmp_msg_1.change_sname.assign("FMEGZENXDFVTJWWIMBAXO");
    const char tmp_tmp_msg_1_0[] = {27, 3, 61, 39, -119, -98, 1, -25, -116, 20, 126, -13, 63, -10, -62, -15, -33, -50, 34, -7, 40, -33, -66, -57, -89, 16, 18, 41, 62, -73, -82, -33, 38, -71, -53, -92, 113, -76, 24, -106, -47, 28, -57, -112, 69, -53, 0, 2, 10, -50, -115, -83, 101, 58, -21, -116, 79, 67, 108, -76, -12, -56, 83, 81, -57, -35, -55, 68, -30, 13, -108, -71, -97, 4, 15, 40, -123, -16, 10, 55, -31, -16, -37, -75, -48, 69, -49, -121, -17, 31, 114, -65, -37, -111, -52, -57, 35, 83, 31, 99, 34, 75, -23, -107, 37, -112, 113, 90, -66, -20, 43, -127, 108, -11, -30, -126, -62, -88, -30, 89, 12, 104, 86, -15, -16, 97, -48, -3, 80};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.639728423226);
    msg.setSource(50971U);
    msg.setSourceEntity(23U);
    msg.setDestination(60240U);
    msg.setDestinationEntity(240U);
    msg.plan_count = 61722U;
    msg.plan_size = 1981713161U;
    msg.change_time = 0.484034549829;
    msg.change_sid = 31053U;
    msg.change_sname.assign("MLEGGYKNPFHCQXWLBXURKXIFIRHUALIOEOYPSOVAVTSLIUHOTZWFJVDUINBAJBMAUBPNKFLMFABTNRJZIQIHWVKOKHOLBUWFLDJXWIHDWSGOXCJHEODAASVYKQEZSJCCUWYEZECYXEJPCPUXNPVAPTPDJBTFYMVWTZQMMQTDRCABMPVGQGRGYDK");
    const char tmp_msg_0[] = {-22, -46, -88, 82, -50, 103, 72, -26, 31, 94, -57, -70, 113, -108, 98, 70, 14, -85, -45, -61, -56, 118, -100, -97, -43, 0, 91, -44, 23, -55, 5, -53, 122, 105, -5, 82, 14, -22, -2, 122, -120, 75, -62, -76, -80, 114, -3, -71, 80, 99, -99, -20, -56, 38, -75, -15, -20, -80, -99, -54, 61, 50, -106, 24, -30, -112, -89, 109, 98, -108, 39, -119, -71, 111, 24, 77, -90, -9, 100, -16, 55, 88, -103, 37, 115, -16, 115, -44, -68, 8};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("KEWYZDVJHLPXWEMKJAAZUVBGLXSMFXWTNCBPIBHNOFYGXUWYDJFWTSBCXJYGFUODTN");
    tmp_msg_1.plan_size = 9540U;
    tmp_msg_1.change_time = 0.99357424477;
    tmp_msg_1.change_sid = 58143U;
    tmp_msg_1.change_sname.assign("XLPMYVXZRVVCLGIBJREJGERTKHARWCLTMTLPEJMHOLKOUQXTQENXNUBYESHEOHJGTOWFPYRMDOKRPWGHHIAQUNKNWYSZNGHZLGZNYUZZSUYQPSQBJT");
    const char tmp_tmp_msg_1_0[] = {-42, 76, -61, 15, -29, -81, -57, -72, 91, 103, -65, -116, -70, 78, 103, 30, 62, 22, -11, 15, -127, 107, -47, 9, 22, -125, 36, 74, -19, 7, -98, 55, 29, 119, -114, -66, -5, 120, 45, 46, 14, 113, 35, -102, 104, -31, -87, 90, 63, -94, -53, -124, -38, -49, 32, -93, 52, 72, 110, -44, 68, 79, 70, -33, 4, -55, 23, 41, -113, 102, -65, 17, 115};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBState msg;
    msg.setTimeStamp(0.982052609683);
    msg.setSource(21115U);
    msg.setSourceEntity(233U);
    msg.setDestination(30070U);
    msg.setDestinationEntity(166U);
    msg.plan_count = 57287U;
    msg.plan_size = 1330751319U;
    msg.change_time = 0.213136734119;
    msg.change_sid = 50170U;
    msg.change_sname.assign("GNQKVSZZSUTUVHXQMTBIBLFSORDEMRRBJMGIKSEIAALUTJVFSPVMKHDGXKFIAOWVCBPFLQIYZBQDKJNJRPGCONCBEEFZIXSAMIDZUBPVOZWWIFEFVUFQVTWCXQWWWJOTROHTGHCJTAPRUVYZNJNDSTZTRLXESKWBOKZDFLADIKGXNMUPQWNKPYLCYMGU");
    const char tmp_msg_0[] = {-116, -23, -21, 22, 0, -35, 100, -25, 88, -65, 18, -122, 4, 37, -127, 57, 96, -127, -33, 86, -4, 61, 8, 5, 53, 30, -58, -37, 119, 26, 66, 84, -28, -15, -66, 45, 91, 47, -103, 35, -108, -72, 18, 67, 80, -98, -99, -73, -41, 26, -58, 92, -93, 16, 83, 122, -32, 112, -73, -49, -61, 29, -29, -24, -104, -2, 106, 80, -7, -26, 21, -85, 24, -20, 114, -104, 68, 69, -38, 76, -117, 73, -77, -73, 125, 15, -60, 42, -59, -105, 56, -102, -63, -28, 72, 99, -6, -6, 21, -117, -39, 55, -23, 86, 35, -115, 96, -111, -126, -26, -113, -25, 86, 54, 96, -42, -48, -110, 111, -84, -113, -83};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));
    IMC::PlanDBInformation tmp_msg_1;
    tmp_msg_1.plan_id.assign("YTNDWJKAPPNIWCNWTAVDHLBVUPOPWXBEBTWWEAQYVRNGBGMZSRFEHMQSIOCRUJTXBONDRLJYKNGMESRCOKLVJQDECBTPJZIZJLDGGHQIDVPLXPJTAHISOVQSXTDUPYWECRPXUMZYDFXJMKOYNUBK");
    tmp_msg_1.plan_size = 25686U;
    tmp_msg_1.change_time = 0.83989483706;
    tmp_msg_1.change_sid = 18264U;
    tmp_msg_1.change_sname.assign("MLMVBHGWVSHOSNDIGUKRZKVPBPZWJNMDJFVMBXMQLPGNKPQJXEAUJNIEJMQVTLOAKXUXPTDLBFQTWSCKHIRMNZNUVCXOILZKTMHYO");
    const char tmp_tmp_msg_1_0[] = {-80, -105, -112, 97, 32, 22, -9, 92, -94, 106, -65, 23, -61, -47, 11, 31, 100, 74, -44, -74, 29, -39, 101, -69, 33, 69, -103, 95, -118, -75, -117, 95, -62, 1, 63, -104, 28, 88, 56, 7, 58, 45, -108, 20, -19, -13, 125, 21, 30, -115, -73, -104, 64, 51, 63, -53, -19, -14, -97, 31, 34, -41, 15, -124, 68, 118, -120, 122, -106, 31, -42, 91, 95, -4, -59, 66, 60, 116, 83, -69, -70, 35, -42, -27, -31, -10, 7, 120, 80, 62, 51, -71, -113, 17, -44, 57, -57, 70, -96, -41, 11, -82, 44, -10, 66, 96, -25, -88, 97};
    tmp_msg_1.md5.assign(tmp_tmp_msg_1_0, tmp_tmp_msg_1_0 + sizeof(tmp_tmp_msg_1_0));
    msg.plans_info.push_back(tmp_msg_1);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.825995027475);
    msg.setSource(20074U);
    msg.setSourceEntity(197U);
    msg.setDestination(39342U);
    msg.setDestinationEntity(169U);
    msg.plan_id.assign("VUQGVJNFVJROAIOQZXOUOVCXIMJIILTYMCDGXCKPEIGZPKGDOBVGQBUFFHBQWSYNLJWFRNNXMKHLGRQWYTTAUEHWFVIDSHSGUSOMVPHCRSFIQXDHKVKZTVRCBAANVPQKXEBZCIBBDPXQUFEGWJYAXAYFECUEEDKMPMZTLWMUZHZASYTKLYWDCJHMFUCMKRKSTWDIEBHLUTN");
    msg.plan_size = 43494U;
    msg.change_time = 0.187128678831;
    msg.change_sid = 32632U;
    msg.change_sname.assign("MKROFNMOBFOQZMRNWOXDPVJIUYESRMATMLIVQHDTRVAHXNZMUYWUKXIKSCPBJLYQTPLSTFKQGUSWVYFRMBJJGSFHXCYUVQMACJLTRBDJOWXGOEIHECPZAHIWFWZXPOGWSTVYCMRGLNXPJLVKAGFTSCFCODLIPOUYEMEZDEFTVYYUKBZWBDWXPUXRZEZPRJNGLRUQBBDAOGAJ");
    const char tmp_msg_0[] = {-65, 50, 24, 20, 73, -82, 119, 31, -111, -94, 104, 54, 5, -21, -76, -20, -34, 92, -59, 53, -123, -121, 110, -8, 69, -126, 26, -68, 80, -125, -84, -76, -2, -100, 47, 120, 79, -29, 96, -123, -106, 1, 67, 88, 40, -41, -63, 23, -11, 82, -114, 73, -45, -104, -58, 57, -93, -18, 5, -104, 40, 34, -128, 117, -2, -50, -109, -100, -75, -40, -38, -109, -61, -58, 43, 62, 73, 62, -94, 99, -21, -68, 116, -11, 34, -111, -102, 44, -61, -127, 32, 91, 107, 3, 41, -37, 61, -102, -116, -85, 118, 49, -122, 37, 94, -106, -73, -36, 27, -104, -112, -13, -71, 23, -36, 63, -74, 53, -67, 22, 110, 87, 113, -99, -99, 75, 10, -49, 69, -23, 69, 36, 113, -13, 37, 42, -34, -5, -9, 84, -28, 97, 5, -112, 11, 37, 43, 103, 69, -30, -95, -103, -57, -112, 116, -71, -120, 35, -37, -28, 22, 117, 87, 9, -30, 44, -69, 108, -22, 39, 96, -55, 74, 7, -46, -3, -44, -80, -74, -102, -113, 116, -68, 80, -91, 106, 113, 41, 93, 26, 96, -128, -89, 38, 26, 107, 115, 97, -17, 116, -20, 88, 53, -85, 56, -53, 64, -94, -46, -29, -93, 112, 79, -94, 83, -81, -105, 19, -56, 66, -111, -33, -91, -102, -30, 113, 62, 33, 65, 94, -25, 41, 54, -6, -91, -29, -124, 5, 76, 74, -8, 28, 19, 115, -43, -45, -70, -118, -84, 107};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.0121488009606);
    msg.setSource(6298U);
    msg.setSourceEntity(253U);
    msg.setDestination(17489U);
    msg.setDestinationEntity(52U);
    msg.plan_id.assign("KXUIBCMHMZBHZDFEUKNPWRITLRSYJUGCZUCDLTFAVSEYLDUEBGJGSSQNPZIUMKIWPKBTROQVDQKCNZNANQQSPCTWKSLIFXGFMECLLEGSAMCMHJSHUZCRXXADK");
    msg.plan_size = 19994U;
    msg.change_time = 0.00638820014922;
    msg.change_sid = 64403U;
    msg.change_sname.assign("HTSIBFGADOIDELVUYIVKIAPMOJJQVFNGQJPMRFWYTPGMLRUUWKVJ");
    const char tmp_msg_0[] = {87, -64, -97, 73, 107, 62, 90, -13, 71, 9, 2, -71, -4, -124, -49, -91, -89, 101, 56, 125, 35, -24, -37, -1, 95, -86, 81, -13, 16, 76, 2, 92, 68, -122, 112, -109, 28, 77, 10, 60, 113, -91, 16, 87, -109, -3, 32, -49, 94, 71, 30, -38, 24, -109, 46, 10, 55, -48, -57, -99, 45, -75, -119, -114, 86, -10, 118, 76, -98, 24, 125, 109, -8, 70, -42, -78, -73, 110, 82, 108, 59, -74, -70, 117, -82, -99, 65, -26, 98, -77, -81, 3, 29, 86, -92, 40, -29};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanDBInformation msg;
    msg.setTimeStamp(0.93504650543);
    msg.setSource(24395U);
    msg.setSourceEntity(143U);
    msg.setDestination(38798U);
    msg.setDestinationEntity(181U);
    msg.plan_id.assign("AUNOLQDAQIUDWJTZCPJCBKXESICTLBVMJDVOZKMRUGQWYNFRBCMMIBTOGKSSOFWFPCTYEUMTMLSRHLWINDGRFIZPPLFRARHOCWUZTIPGHXHBYXDIYFCWWY");
    msg.plan_size = 1331U;
    msg.change_time = 0.354130156945;
    msg.change_sid = 5423U;
    msg.change_sname.assign("VDXRDCMBSGFPOYQNCMBXDEZTOPDUENGNYYHLHTRUYKBNLUJHQRGHWYZJTESIKPAXEUIATHDZQXAKDOSSBNKHPZCHQBCFHULSHDFFVRPYJXMCVMOLWKDMGBRNMKNJOVGVMWSCSPVIIAJRWZ");
    const char tmp_msg_0[] = {40, 82, 70, 110, 40, -38, -40, 105, -2, 81, -16, -113, 63, -104, 27, -109, -69, 25, 19, -119, 48, 13, 126, 63, -98, 23, -26, 65, -59, -111, 123, 91, 73, 37, 91, 62, -31, 124, -127, -73, -109, -122, 9, -127, 18, 18, -128, -8, 92, -90, 3, 114, -39, 95, -127, -69, -117, 31, 46, 30, 31, -86, 19, -100, -105, 33, 96};
    msg.md5.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanDBInformation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.587757048973);
    msg.setSource(64157U);
    msg.setSourceEntity(20U);
    msg.setDestination(6433U);
    msg.setDestinationEntity(95U);
    msg.type = 21U;
    msg.op = 35U;
    msg.request_id = 27747U;
    msg.plan_id.assign("FHSODBBGCUQSYTSVLPFKXIG");
    msg.flags = 32581U;
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.173914683981;
    tmp_msg_0.speed_units = 203U;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("JCFZHMGPDBPLKLWGTEZYXNNGBHTRVHKCYMBLVRWIRFTPQAJU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.714298199538);
    msg.setSource(57486U);
    msg.setSourceEntity(100U);
    msg.setDestination(55698U);
    msg.setDestinationEntity(110U);
    msg.type = 68U;
    msg.op = 63U;
    msg.request_id = 46997U;
    msg.plan_id.assign("YKVIFJFPVRCATWAHEUPCUVXTOLBXHDDZMRMKNJPKQCYMGDERTJOVXQIZYHEQDFBGYGUOWAHIZOTVBBUWHOZSFQIDSXYDEHZZQAZTEJYCLXQMWGXIMOIBLCOWOFVRSTZXKCNYHITXWFHIDGVOPSBIHBVFUBRBUPSGEDEYFMJNNLEJWYRAWJTAIAMSBGRUPDKJKGNMVWMNERYELCZM");
    msg.flags = 32111U;
    IMC::EstimatedStreamVelocity tmp_msg_0;
    tmp_msg_0.x = 0.151124741689;
    tmp_msg_0.y = 0.335379810937;
    tmp_msg_0.z = 0.900081724049;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("WFKHJUYQKGXLRHPTCXSNBMHBFNROEPWWPKWORKUKGBVEKFFQJVEBHTJNWKNVOROSVAAIVZVZDCYLPTVYQYPQEJCEHBTAADTXLHKGZJDKWMSPNCRRENARZGMFGDWJXCUFRJCQSDICUZDMIPSKOZFYXLZGYADIHEBNNJLOMBDVMUCILTCGMXMQLEUSUYABLMSVYXGQILLOUVDFFTUAYGWRMUJNXSPIR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControl msg;
    msg.setTimeStamp(0.221866523744);
    msg.setSource(34142U);
    msg.setSourceEntity(187U);
    msg.setDestination(8669U);
    msg.setDestinationEntity(32U);
    msg.type = 28U;
    msg.op = 146U;
    msg.request_id = 41783U;
    msg.plan_id.assign("PQBQEZEMBFXPPBCTJTMRRHHISNOAGIYIBKZAWCIYHGLTHTHKTNGSGPDJMEUZJAJXTBSFPSRHEVCKWLZGAGQXWMMBFVNLSUAYJKMNXFEQKVFDRJBFZLXUUBLPQTIYUGPLRHDICVIGSSIAWHOIAERFNFAQFKLBURSVCQDDLDHVSGTTUXZZJSCJLWOCOCXZZRPYWOJDEOUMVBUORYDNPYAHWNNPNDCMNJXXDLYMUYQVWYGTIVEOOCOFW");
    msg.flags = 38585U;
    IMC::CrudeOil tmp_msg_0;
    tmp_msg_0.value = 0.0724927910424;
    msg.arg.set(tmp_msg_0);
    msg.info.assign("DPPMQQUZGVUVEKKPOZAUFWLIRVPJLTXQLNMBKEOWBOEVDGOUWYJJBMDADGFZIBXHOWVSFRXXQLAOCEIOQVCQLBBUJGHVWHMLRJBJAKCYRGAEZIZSVZDWFTXVFAANSDIRLGZIMCRNJNIQJTCNMTUWRAVJYDLZTWJPFPBLKNCWERAFTPMBGSNSHSPUHIYHDMUPDBFTYDZLOYPTYWCXCQUNSFOZHQGIETHRFYH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControl #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.998189609125);
    msg.setSource(28172U);
    msg.setSourceEntity(181U);
    msg.setDestination(8058U);
    msg.setDestinationEntity(7U);
    msg.state = 76U;
    msg.plan_id.assign("DJXKAJXZVQVDCIIYTQMTFVRSPPBUWUPFOPTWDAGOWSGVLSMIXIECQHGFBGZAUXCGLBHNAKQVWJLHFLSHMQYARGHFQZEOXDWEUQIBPUQDSTILLJKVZPCONBBKRSCMNXWTNCYLKTXGMYJRJFZZILRDVSZKSGFZOCZLEORERAPUJZKEEMBUKVJWXDAXHETAGNGAIOYHLMHYNSEEJXYDHNPPNKNR");
    msg.plan_eta = 228318568;
    msg.plan_progress = 0.291570597209;
    msg.man_id.assign("FPRZQHNRRWNJWVIRXYWKOIJA");
    msg.man_type = 12453U;
    msg.man_eta = -112486494;
    msg.last_outcome = 166U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.0986347274887);
    msg.setSource(40803U);
    msg.setSourceEntity(71U);
    msg.setDestination(26383U);
    msg.setDestinationEntity(118U);
    msg.state = 238U;
    msg.plan_id.assign("YKNTDAPDVANEAWKLGOCEQDPVLUNUOBFFCGBZNKNULZCWXVAWCHDREMJTLMMMVJSHRIWTPSQOOXRGEANIAGGGJZLXNHRZQKNRUDERVYAMSLDFGMAFSXDLXOJZXIBJHSKFVOW");
    msg.plan_eta = 513193258;
    msg.plan_progress = 0.408660270715;
    msg.man_id.assign("VFZSQCLGMSHJYUJQHDQESTGQBLKHCIKTXPVDPB");
    msg.man_type = 5727U;
    msg.man_eta = 874076873;
    msg.last_outcome = 194U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanControlState msg;
    msg.setTimeStamp(0.630369626831);
    msg.setSource(54795U);
    msg.setSourceEntity(109U);
    msg.setDestination(9276U);
    msg.setDestinationEntity(30U);
    msg.state = 116U;
    msg.plan_id.assign("SAJTWGUWMELBYOGNYAUOLWCNVDWGLFZCOOHBXZRQWKUSSNQXHDAYNXELRWISKHE");
    msg.plan_eta = -1626085122;
    msg.plan_progress = 0.493602097272;
    msg.man_id.assign("OCBJIZRIGIANSUWENPFANAMORRLJLZRALFVEMXBSUUSFYEKYHDGCNHKBUDRXBBGZPUBYZZFMHGRYVAIKSBEETAVLRTYMIILTBCGTVMKDILHXFLJWQOKCUGIGGOYPETEOKBRSSKLOKJWWAQQXSADZHWFDVUQWQVDWQTFXQCQOSXNMXTVPREJCJXPPVPDMKFZJZAELYYLDONJHIDYNGTCPNTSWXU");
    msg.man_type = 49036U;
    msg.man_eta = -766239630;
    msg.last_outcome = 159U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanControlState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.154327987855);
    msg.setSource(8732U);
    msg.setSourceEntity(77U);
    msg.setDestination(1244U);
    msg.setDestinationEntity(22U);
    msg.name.assign("RBFXWHYLIULPMVLWIKRNJOW");
    msg.value.assign("VVNOSIMJRXEDZQIYLIFAMFSINAQFVCCHGHXJEUGTVDVIMKRRAXJEUFWUYVNMKIUFLOWCGEMKTOSLWZSVQJIGLFOORZWQZXJINCVLBYYOUTRKPPGQHORJUTMUPXLJHGDYEGNAYNKHZAUFWRNYXXYEDKHNZTLSCDFOTWTHMBIEZIOHLBQBBDJULPDHLKPSYAXAENMPSENDMRPMWCGKSC");
    msg.type = 133U;
    msg.access = 0U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.118896445672);
    msg.setSource(49538U);
    msg.setSourceEntity(150U);
    msg.setDestination(2592U);
    msg.setDestinationEntity(83U);
    msg.name.assign("PZKJSIQVRFAWAQTSRIFXPVEDZEHWYFHBTTZVCIBVMZTVRYVRRDPXWZEOSDSDYGLCQUGPKYRIHJAFXDKNJHRCVYTEGFBXKNEOONOAONJDKGTLIQBWDSCPSCXOKYCKNYOLGLFYKZAAAHMBYVJSQBUEEVBRSWHJEXMIZOPWJMHXOELUIIURDUDQLZTKFXFGYU");
    msg.value.assign("KIQVSZMCHUXWIWFMGLVDXKFTTIZOSVPVBIDYOUVNYADLRGIWEPJAONADWBPCVFXEJCHBNXHFHPHRTCQPSPCCQREYLMJRRNLKRTEPLDYKLVNFMWYZQHBTXJKOMAGXOTPQDMZEFUJEAFBEHPODSWAGIAZWWKSZQONTFDSCKZMGLQCPUEWNVFUJOHBUZXFYKNCBQAKLGRUTYJSXII");
    msg.type = 163U;
    msg.access = 203U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanVariable msg;
    msg.setTimeStamp(0.106419497334);
    msg.setSource(25464U);
    msg.setSourceEntity(122U);
    msg.setDestination(9210U);
    msg.setDestinationEntity(197U);
    msg.name.assign("CPJBQINFBTHTIJMKHLQVLHICLIRMECLWDUHLMQQPGOIUAKKFBHZPNQYNCBXTBJDUXYDOHKJZVZSKVKYLAG");
    msg.value.assign("DINVXWJJCCSHVSXPNDKMMJNCTZNCOHMOHRRTENGUPJLLXIFJFKZYWJCDDVWKOALBELAPTSWUWIHQBQWYLPUIADNBLOBPIKEQCFXMGTBFTBWROOCYASCASMKHHWXLFGAVXWQDDQJRNQTKBZXUYIRSZARURGBVLQ");
    msg.type = 5U;
    msg.access = 163U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanVariable #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.327436188328);
    msg.setSource(16984U);
    msg.setSourceEntity(24U);
    msg.setDestination(47291U);
    msg.setDestinationEntity(142U);
    msg.cmd = 196U;
    msg.op = 80U;
    msg.plan_id.assign("LWUWBZAGFOGHRMVMYOIEAGBWPMAWVJZBCAISTJZCZHQCQEQIXJPZHJGADYXNQOUBTZESORULPYLUKIYZTHWAKAXOVCCJRGIJNVVLDHKPZPEBGRRLFUXYAQZFWEIXGHNWHGDQENNXL");
    msg.params.assign("JLWBNZQSWIBMRDODWWXPZBZMFVLQBLFCEENMKWZJVVUAPTNOKUXNKQCSFGIYDMGIHOYJNNPJHWTSKXUCJFKJOUELQSTRCIRTSPVXMGOLPPAUZJZWHUADEHYRENKGRYOMCIAQKGRLREYKEFQDTJIXYO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.183727508338);
    msg.setSource(45718U);
    msg.setSourceEntity(101U);
    msg.setDestination(28913U);
    msg.setDestinationEntity(11U);
    msg.cmd = 45U;
    msg.op = 143U;
    msg.plan_id.assign("WQRYNVFUEMPNUTXKMCSWESMNKKOQPDJYTPLCXTRSUIPPYYXKAFEYNEWFYDCJZSLEXPUFCBLCVAPWJRVIAFBQSAXNFGXYTWTVSKOOIHZUJKZWH");
    msg.params.assign("XAXYKWZSZACNKCFIEMQKLKFVPSEPMCIAIXZOXMMJHRFOLJYMPOYNFCNIWNMHYENSQIGIRIIZHHLUDDPZQZYYCFCAWLLANGPZCJOTDESCBBRLDURMKDGVVTORHTZSBDVAWKGENRDGXDJZWWKPHSIWQEXUANCHJUJNZSOLLSYSEEM");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanGeneration msg;
    msg.setTimeStamp(0.437926119673);
    msg.setSource(56537U);
    msg.setSourceEntity(74U);
    msg.setDestination(38346U);
    msg.setDestinationEntity(94U);
    msg.cmd = 253U;
    msg.op = 158U;
    msg.plan_id.assign("ZMFSOCWKOHGEDXLYBODHKALJXWMETGFODHBFHSCDPTBUZEK");
    msg.params.assign("IPIPCZFYJICKTFSDFSMENYEWPCEXBGSWYVIEGEOKNHKMHQUIDBTSTKYLEBHDUHXWQYHOKVRMJUTQQZGULRPRJKRTNBTPNDZEPLVBCULBVVSWQVRFZUHNLFZMRYVGZYDQXUEMZSHPADTCZNDXUBAMWJATVPWBYJKXDXJCJYHNGOAOUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanGeneration #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.0140184960421);
    msg.setSource(43309U);
    msg.setSourceEntity(177U);
    msg.setDestination(5603U);
    msg.setDestinationEntity(32U);
    msg.group_name.assign("CDNRFSCLXPVDTBFYLZJCPWKIDJZPVOBBVJBBCRM");
    msg.op = 214U;
    msg.lat = 0.201056130423;
    msg.lon = 0.406524241468;
    msg.height = 0.520429303338;
    msg.x = 0.405927592419;
    msg.y = 0.252855825924;
    msg.z = 0.152627470735;
    msg.phi = 0.260012861035;
    msg.theta = 0.015374586849;
    msg.psi = 0.526497473089;
    msg.vx = 0.127610417126;
    msg.vy = 0.532991234668;
    msg.vz = 0.226257248609;
    msg.p = 0.37545367889;
    msg.q = 0.259202379089;
    msg.r = 0.758382754287;
    msg.svx = 0.271181344701;
    msg.svy = 0.580795027963;
    msg.svz = 0.922063930564;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.456104005017);
    msg.setSource(4429U);
    msg.setSourceEntity(2U);
    msg.setDestination(20692U);
    msg.setDestinationEntity(113U);
    msg.group_name.assign("TTHILDVSFHQDYJEGUHHKRXKGYCAPBJGRNGTKVTPTIWYKEMDRUHVVCGDXSBZJ");
    msg.op = 201U;
    msg.lat = 0.571814347228;
    msg.lon = 0.493712055848;
    msg.height = 0.0153607655226;
    msg.x = 0.429588822311;
    msg.y = 0.0439575993731;
    msg.z = 0.998099668802;
    msg.phi = 0.892783970319;
    msg.theta = 0.442177110626;
    msg.psi = 0.403572076162;
    msg.vx = 0.584754706892;
    msg.vy = 0.164906375331;
    msg.vz = 0.851258218635;
    msg.p = 0.856764426699;
    msg.q = 0.846872792174;
    msg.r = 0.751861641548;
    msg.svx = 0.527838989105;
    msg.svy = 0.592408950288;
    msg.svz = 0.487507793066;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::LeaderState msg;
    msg.setTimeStamp(0.643419747972);
    msg.setSource(52435U);
    msg.setSourceEntity(136U);
    msg.setDestination(52333U);
    msg.setDestinationEntity(236U);
    msg.group_name.assign("CSXFLTIGZTBZNEFHGCFJRBNSTQGTPXOCCASJJUZDQIYZEGDCJJVJXLCRKHKHULJSAJRSYMDRQNEURLMEQYLY");
    msg.op = 62U;
    msg.lat = 0.52329828016;
    msg.lon = 0.607459258209;
    msg.height = 0.75406281664;
    msg.x = 0.764175470225;
    msg.y = 0.058864787368;
    msg.z = 0.156902072547;
    msg.phi = 0.76230196425;
    msg.theta = 0.113849712891;
    msg.psi = 0.189313829496;
    msg.vx = 0.899652010808;
    msg.vy = 0.437413082041;
    msg.vz = 0.667898554935;
    msg.p = 0.462993017732;
    msg.q = 0.338000184684;
    msg.r = 0.0402913976668;
    msg.svx = 0.985096391731;
    msg.svy = 0.828866636936;
    msg.svz = 0.668143436922;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("LeaderState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.393335756826);
    msg.setSource(28482U);
    msg.setSourceEntity(18U);
    msg.setDestination(42095U);
    msg.setDestinationEntity(91U);
    msg.plan_id.assign("KZFDXQUIAYXHNVJCFLOIAKWSNJPWRNTFIYOTIPNKTSRDLCGOQGOMBJGUDWQCHWTYNEHQESLQBSPVHHCURDZJARAAAYPBDKLZHVLMKBKNISEWBUAZATGRZSFWCIDTDOCVANQJLFFLEBMBGLIVQGRKRMWFBUEZXWLWYWMHJUPOCMQXNBVGLXYPEHMUZAZEXQPOFOERTI");
    msg.type = 60U;
    msg.properties = 76U;
    msg.durations.assign("WNDOXGKLKZNSAAPJJOFFCJIUVZVFLW");
    msg.distances.assign("IUOWTJDRFWFQARINDJUALJVXKIJINTOGVQECDUJQOVEDRVTZGNGPQTMFHMYWCWPDDOSIYGMSBDCPRNALKVOESJBHTCGMUFARVJYINWGKHAWLXFZIAPKETSCDMNITARSQBWBTJKY");
    msg.actions.assign("IPMHHWROSVXJIKKQRWIMLHDZWRSZBBOGVGTEIJDURPFDQQUSBKIOHEABSBFCRCYWPJERODCMNJDYXGNEAHTVBCZEAHOFTJVRXFBGQGZFHPOFOJYFKQIMSQHQDMDSMTCUNAEPGHQFQEWLYYACXWJLLNUPBZUXTXDILUMRYFERGKVCONGLKKOVTZJXAWGANVEWSKSPCZBBPNWMTCNYJMXIPY");
    msg.fuel.assign("EGUKHBTFIBPURPUBITGMPHMGTTEIWGWBCPFPZZWRSVHRFMHEDXSKQKZOAYDMSA");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.846480429132);
    msg.setSource(10037U);
    msg.setSourceEntity(126U);
    msg.setDestination(52436U);
    msg.setDestinationEntity(245U);
    msg.plan_id.assign("WAZVHLNOIQIZTCLHHQMLHOWPDPRLUIRGBDNKTNHVCFIVQOXUHWJDXBDDILZIQNXWQACFXWVBYFLGSRGSLXFAITNNXGZJSMJOPEUKMJRQEYGBKPESAAQRCDNMOETJWWPVVTGYJOYUSOETATSDYSZFWUVMUJVVEUBEONEGDZJXRNZYMSKMCGYAEAIYXBJFKHAXPHKNFPHBOCMZPQCGUYRLKBRBKQJOAFTEFMGRWB");
    msg.type = 19U;
    msg.properties = 45U;
    msg.durations.assign("GPKTDNSDBVO");
    msg.distances.assign("PODNHMAWZKKPHCUAKZTDMLGEGJGTIISSLUXRQ");
    msg.actions.assign("VONXQXXBZPWOZFHUKQIKTMUFIPFJVRREQYIYUGCJFQTXALTUULZESHEFSQBKOLZWTDSZZTGPSMZYMULRNCHXPFV");
    msg.fuel.assign("ZUPDKBVITZXZQPZDBOFENSLCMHGOASULZHHQABBFUKNLKGEKFOQCAGCAGOMNFYRZSYSYCQYZSXFSPSGUYNEPJXYWAHZJXMWVWITNHXPPRDQHHWVMVGICJAZMOCRJDDEFUIXVLKLPBCNSBJXCFKLRHJMMDUASKEFI");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PlanStatistics msg;
    msg.setTimeStamp(0.0554466924213);
    msg.setSource(60587U);
    msg.setSourceEntity(160U);
    msg.setDestination(40345U);
    msg.setDestinationEntity(244U);
    msg.plan_id.assign("EXGALSQFGTVSECMUTZRBUIQOYKWOPUWUBIVEUQKRCUDVEJMKH");
    msg.type = 151U;
    msg.properties = 24U;
    msg.durations.assign("NNDXJVUXPVTCKEO");
    msg.distances.assign("LEHATSWCJUDYNQDBBVVXWFRARLBNSEEGGWZKMHFLLPYLHYWUNSKOMFJRHBAXTIOJVKZZXPMZIXHVXNLDUPWESDPVUSMYQIBGCPLQRVFZIGTOWYJNDRXMFZHPCOAKNJTWKZGZUTTOUCTIGZKIVBIPARQMMREDCYDQQSEKQNXOSSPHURPECMXBXUOBLATLCETRVUDFWOCWFCZPMVHFXJQRAKIVOMHHCJJWGJUTBFOLJIBNDNND");
    msg.actions.assign("JDETRQYYONIZCBVNKUTYTIUNXPRHYCEWVFVQUWQPSWPVSHGZJKECKFTRWYLFIVRUXASMEUFHFNIMQLJFOLRWUNHZMENJBJUFJGNMSAVTLJUFDWRRDGKHALCKTKYXSLIJQZMZHIMQGPXTBOPGFLSKYDGVWCBV");
    msg.fuel.assign("CHCVEXBMFPJANAHGIUYGTFIMCRZMXGUIFBOKJJKLHNXFQREEQCATWBRDGPBRIHAQRFMSUTWUAIXQZFAHSWPKTNVUJTXNTBTLTNVVKGBIJCOIYYSJNQYZVPVLOHZEWYEMPKKNAJHAGWMMODDDWCVNRSWYFFDQYPZQWVICXMKULYHZJVBQGPKMKEOW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PlanStatistics #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.1085645234);
    msg.setSource(9211U);
    msg.setSourceEntity(132U);
    msg.setDestination(10818U);
    msg.setDestinationEntity(237U);
    msg.lat = 0.722725624742;
    msg.lon = 0.243277426014;
    msg.depth = 0.842738477012;
    msg.roll = 0.533175608907;
    msg.pitch = 0.670090421192;
    msg.yaw = 0.699682708593;
    msg.rcp_time = 0.501216863909;
    msg.sid.assign("GNAUFMUMZVDWRFEBZULLIWMUZATASNQJTQDSJHZCBJWQXOKCVNRXFNGQHDZRLSVEHTEDRZUJWCPIYMXGEZIYIRTIJLPFRTIKVEYKTHOLBPYZQPGDYVWFYMPXUNIPGKGCCGQTQMZTXMKIEBBEHVRWVXKXAFXACVENFOKTBAFODLKVDAXIXFYHL");
    msg.s_type = 219U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.365603956685);
    msg.setSource(12974U);
    msg.setSourceEntity(243U);
    msg.setDestination(18758U);
    msg.setDestinationEntity(131U);
    msg.lat = 0.31738256844;
    msg.lon = 0.820319506977;
    msg.depth = 0.511737273333;
    msg.roll = 0.242299961345;
    msg.pitch = 0.704721845617;
    msg.yaw = 0.102882275246;
    msg.rcp_time = 0.704725648336;
    msg.sid.assign("ROHQRNUFIPBAFZMVNVZBJJPUZEWJQDFITVAGYGYNPPOYYVELKGZJJWTLXETURCBAJBNXMHEMAOPZMZDSFMZOCANMNFIKTKVNPCASTCAEXDCHOHBSLHWBCSBZAJURKXNQRHUWCUXAPLATKLHRGIWZRMOQSOEYZJCLRVWQETVCIFBKSSSYLDFDEGTYXDIIDPHFTQYEGJEMYBKKWLOU");
    msg.s_type = 167U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ReportedState msg;
    msg.setTimeStamp(0.0491622983809);
    msg.setSource(58902U);
    msg.setSourceEntity(197U);
    msg.setDestination(41873U);
    msg.setDestinationEntity(6U);
    msg.lat = 0.591874457173;
    msg.lon = 0.190753225199;
    msg.depth = 0.743263360446;
    msg.roll = 0.229846144674;
    msg.pitch = 0.896713223202;
    msg.yaw = 0.482941492252;
    msg.rcp_time = 0.232359970252;
    msg.sid.assign("FDISGLXZXGWM");
    msg.s_type = 188U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ReportedState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0478292273232);
    msg.setSource(44991U);
    msg.setSourceEntity(19U);
    msg.setDestination(38621U);
    msg.setDestinationEntity(167U);
    msg.id.assign("YQETHWKMBFIEVEYBUNCPPZDL");
    msg.sensor_class.assign("QJKYFLCTKHRXRGVEFMBXUDGHSBXTEENVCUAZICXKRYKECGZSNTHMYAFDVLMDPCFWCI");
    msg.lat = 0.678398399754;
    msg.lon = 0.422200320955;
    msg.alt = 0.953317234265;
    msg.heading = 0.864898231867;
    msg.data.assign("FNGNLPUQYLMJAHLZFECSAKKNKLLBEYRGGDQQCGWSJZFKLOYUBAJHGUAREVYPBGHZNASDTUMID");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.920975366502);
    msg.setSource(21043U);
    msg.setSourceEntity(156U);
    msg.setDestination(58085U);
    msg.setDestinationEntity(246U);
    msg.id.assign("ZIIPDVIMNOJMDJCFKBPXPCSGIOEOSTFPHEJSWUMNQFAYEHZOBUKLVTLRYEUFJLNUEQTXMDERCWGZVRYBHHZNDYNLATGZBOGAITOYHSKWUBYQODGTJZAWHPQVXMWEAINRYWNFQFKPDFELHKYRUSKVHILSUOWMBGHCXPMEWJFRLQQRFZGGZXYSVPVAGTBJXFBCSXLKZBDZMJMCXWQUOKPBXAEC");
    msg.sensor_class.assign("VQQZREUKYRZEQHBJIQZFSUSPGXAZAOBCYXNTZKMUVBLOELAAIHWSBXNUTHPJVFNTNSQU");
    msg.lat = 0.420553308999;
    msg.lon = 0.661020079317;
    msg.alt = 0.59524674497;
    msg.heading = 0.98157360753;
    msg.data.assign("QVTCISYSHJTSPKYOPGXRPXUGTRJOGDSHLQIFFPQQVUUXSDRCKKSDAXORLYMEXAENAHEJMFNJXRIFXITH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteSensorInfo msg;
    msg.setTimeStamp(0.0968520461632);
    msg.setSource(54818U);
    msg.setSourceEntity(118U);
    msg.setDestination(9515U);
    msg.setDestinationEntity(42U);
    msg.id.assign("DVJJAAABIQXGBGJYTPPSRDMLRTISVEMOHHCVXANZWKFHOJEHKIUVVZPEQVKORKALMUKUTNVKHRKTGGDUCTNXFEQPEOSVYIWNQMXRCJNAHRDPIJTLYEAOMIYFZCSP");
    msg.sensor_class.assign("KBCXHOWDIROHFOLCPRPVXFZDKYUJWCLSRYVPXVSCQBGOULLEZZUPIAGYEMWCYRLKDLXTHJNCDYVCNJBOQGQJSYMEZLDAHBFJEUOTEBUMJMAZVTNWYAMOSMQQWXGICTTUVWRUXMNBBWEXLFCZAPZPRFWCXHIHORGKNNLHAXKPLQUKEIAQSBJKXJIDFMIESJTJQTVHUEKAQNITIGPGD");
    msg.lat = 0.559041073231;
    msg.lon = 0.733438393501;
    msg.alt = 0.19299130213;
    msg.heading = 0.857474233232;
    msg.data.assign("HGYYIYIXTWIYXTFHPJVHOUDBLKWEGOSTMOPKKQIWXIVPYQCZFNCGRKPHZNZSOBRES");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteSensorInfo #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.765859068741);
    msg.setSource(20870U);
    msg.setSourceEntity(227U);
    msg.setDestination(13973U);
    msg.setDestinationEntity(155U);
    msg.id.assign("GLAFGAWZIBXYIQNOXYMOPJRJQMKDEAVYBUBNMCLKVFSVN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.253358795356);
    msg.setSource(27729U);
    msg.setSourceEntity(152U);
    msg.setDestination(58427U);
    msg.setDestinationEntity(147U);
    msg.id.assign("MZYCGTNZDYKUWZUBDRPJRAJQPHFZRMXGLUKARHYJNEBVQWFCSYOMTSNDKKGVXKTEGICSHFCXIZIPNXGKFUQPEPICHZHPGOTJWKBDDQCNRMMZPAJNAGEAZOHHOXTFQAVILESWDHXRLYZQXYQVLAGDUMFIAHDCFTJIN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Map msg;
    msg.setTimeStamp(0.503211216142);
    msg.setSource(49623U);
    msg.setSourceEntity(31U);
    msg.setDestination(22130U);
    msg.setDestinationEntity(200U);
    msg.id.assign("PFYPUGRSUQSDRJLCWUXBBMYWNTVTGFZTBKYLIIYMNBJXCGTOLWFELGUFFHUCGXWJMOFRQQVAEXOIVONJWKHDBKNFZVNZKKJNOWEMHAKPHPLIRCFZCIPPUADNDQSQHMAAYUBUEDPR");
    IMC::MapFeature tmp_msg_0;
    tmp_msg_0.id.assign("PXWAKXKUYSCGYFVRDUUPRFNUICRNBTCGNOHDXIPRSYBABRJFVQZVNGADLEJGGTPZHXXFMMZZSSUNOCNECPYYIJUCEDQEHDHMHBELMFCXAFDPVAMIOPNDALTXTDJGSGMLQKWKMQKHOQABZIGTBCEXCCBRZUWSQIVKQEME");
    tmp_msg_0.feature_type = 248U;
    tmp_msg_0.rgb_red = 83U;
    tmp_msg_0.rgb_green = 53U;
    tmp_msg_0.rgb_blue = 182U;
    msg.features.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Map #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.639212273996);
    msg.setSource(60177U);
    msg.setSourceEntity(180U);
    msg.setDestination(59350U);
    msg.setDestinationEntity(148U);
    msg.id.assign("DFCXDSZLCKLDRMZWXDKIKQSNHOCOFTAWUGTGDAFUBPBVSRJWOYLKNYEZPZECIXHCHYKWWERPUFDBNTQRVMYGVAVJGQUOANBPXVHZEYIEWJSYFGBTMLMHCVFDOMQRONWBSRFUNWDOVKTPTIGYLPITIBYQJSIQFAYQDGUHVZBKQTLMICBGKARZGJEMWUMHMOOCHJSODSQLRPQRPHGFXXLUEZVIBHFAAACELSUXXNZUJAJYVPMZPJ");
    msg.feature_type = 144U;
    msg.rgb_red = 175U;
    msg.rgb_green = 170U;
    msg.rgb_blue = 185U;
    IMC::MapPoint tmp_msg_0;
    tmp_msg_0.lat = 0.65299738288;
    tmp_msg_0.lon = 0.677405382499;
    tmp_msg_0.alt = 0.0641947676021;
    msg.feature.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.353067020393);
    msg.setSource(29805U);
    msg.setSourceEntity(122U);
    msg.setDestination(48093U);
    msg.setDestinationEntity(104U);
    msg.id.assign("VOKYUUSDMKQBIXQKONSATKGFCTMQLZMLTSCZDEIRHLENTEGKDIBFIAZWAQFQUDFVWGYIVCBCPVQLOBXRORLMGQHPAJEZXIALAQAAHHTDYGNHKNJLBTMHZSXZJCWNCNUKDTSVEVXZLUYWYPJHFOMWXTSKFEQJSJPBYECSHCAMFLHWCWPBWGRDPMIAYVJUOWNZEIXVOITESYGKKXGBCJUBUERRTOVMGDPMNWRNDXPQXLJOJFZYFSNURRIPHPBFG");
    msg.feature_type = 105U;
    msg.rgb_red = 17U;
    msg.rgb_green = 18U;
    msg.rgb_blue = 223U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapFeature msg;
    msg.setTimeStamp(0.306570435697);
    msg.setSource(23850U);
    msg.setSourceEntity(76U);
    msg.setDestination(4525U);
    msg.setDestinationEntity(38U);
    msg.id.assign("MQYGHFIREFNZTTXJXPJIFPXMINVDBOJHSHXUYAYLU");
    msg.feature_type = 97U;
    msg.rgb_red = 219U;
    msg.rgb_green = 153U;
    msg.rgb_blue = 169U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapFeature #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.504104864392);
    msg.setSource(12872U);
    msg.setSourceEntity(104U);
    msg.setDestination(47576U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.228145454157;
    msg.lon = 0.889513676024;
    msg.alt = 0.717274594028;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.455901605135);
    msg.setSource(30071U);
    msg.setSourceEntity(46U);
    msg.setDestination(54254U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.476647413536;
    msg.lon = 0.694199921913;
    msg.alt = 0.687825846041;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MapPoint msg;
    msg.setTimeStamp(0.665829824527);
    msg.setSource(34490U);
    msg.setSourceEntity(48U);
    msg.setDestination(20394U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.749303760707;
    msg.lon = 0.266104415165;
    msg.alt = 0.372686200406;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MapPoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.101003685699);
    msg.setSource(20053U);
    msg.setSourceEntity(204U);
    msg.setDestination(54334U);
    msg.setDestinationEntity(97U);
    msg.type = 22U;
    msg.id.assign("MIAQRBIMFUBJQSVRUNEWNPFHKTFURHXOLPBSFNWBQHOEGCGDQ");
    IMC::ProfileSample tmp_msg_0;
    tmp_msg_0.depth = 40868U;
    tmp_msg_0.avg = 0.0606308440375;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.653057756313);
    msg.setSource(5672U);
    msg.setSourceEntity(169U);
    msg.setDestination(40327U);
    msg.setDestinationEntity(253U);
    msg.type = 50U;
    msg.id.assign("VGZHEAPFUDLZWPXZVTRRGUBPZDKHCVRPBMMRIGOWXSJWRSLRDZHDIBMFXALEKSDYGEKDGKEYDIWLSXMJQBPXSJEVRWBQSQLWFTJJYNBLSSIGCFBTXUQOENMCQTEAYCKEUXTVQOWENNGUHHWYOICNTCDUNNBT");
    IMC::DesiredSpeed tmp_msg_0;
    tmp_msg_0.value = 0.181290333632;
    tmp_msg_0.speed_units = 150U;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CcuEvent msg;
    msg.setTimeStamp(0.553828968933);
    msg.setSource(53555U);
    msg.setSourceEntity(245U);
    msg.setDestination(41539U);
    msg.setDestinationEntity(27U);
    msg.type = 147U;
    msg.id.assign("XXVBFNLFCRNZDZFJUJPKXCZ");
    IMC::Depth tmp_msg_0;
    tmp_msg_0.value = 0.788105868699;
    msg.arg.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CcuEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.349332967361);
    msg.setSource(40945U);
    msg.setSourceEntity(226U);
    msg.setDestination(11245U);
    msg.setDestinationEntity(254U);
    msg.localname.assign("DJOAKWIHPGHICSTWXGVWUMPTFBI");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("GVULKBKJBGOLFONNBDVRQQJHOURASVJUEZQXKYCXXGTETNLARCCJBYFJDDZWGQKGKJOXPTDMGZMGVODCPGAXCHREBCRBBDHIPMGNPAEFUHMYEMMPNKBZHBKQISAKELHOGSIZYBIWODFVLCOMO");
    tmp_msg_0.sys_type = 2U;
    tmp_msg_0.owner = 43487U;
    tmp_msg_0.lat = 0.437603339054;
    tmp_msg_0.lon = 0.966402945971;
    tmp_msg_0.height = 0.0893949716444;
    tmp_msg_0.services.assign("SRLUYJPAXEZNKSDYYOPLTSACGVGNTTKWPANXRAWHAXEBIYSZUVSG");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.978469520488);
    msg.setSource(30444U);
    msg.setSourceEntity(169U);
    msg.setDestination(32194U);
    msg.setDestinationEntity(156U);
    msg.localname.assign("SQKYLZJJMMHVUIOYENTOCBIKDTJILSECFQEYPNHYLRTGFDVMFJUIIZONBRNAHYDMGCXCALAQWEUPDDWBXVOHRDKBWSBVLSJJKPVRXHDTIZDPVQZRBLGAEZVCZIROSTXBYPEWQHLOSBIQDLWYRJZXKWGPBCSL");
    IMC::Announce tmp_msg_0;
    tmp_msg_0.sys_name.assign("WNKULMLIKLDZTMYIDDAEUWSTCNSEFWUDOUPJQIYWGWBDEFXYNMZQJJRBQHVDKYICBQOVOHGBXRVABFJWFTDSTMMKVCOPEOQOZYNCERMNEJXTJPMTRDFXVFYILAJRCRLXLIIKNJOISHIGGNSZBBMRAHKCTFFXKMUUQZAJJGPQVQABPXUSSZHZIRZCUTSCKVLZXNAVHGNEPHABGYAYDLFDVQQSHPTXSWXANPBEYZL");
    tmp_msg_0.sys_type = 114U;
    tmp_msg_0.owner = 4662U;
    tmp_msg_0.lat = 0.275122969231;
    tmp_msg_0.lon = 0.891826565664;
    tmp_msg_0.height = 0.385805399452;
    tmp_msg_0.services.assign("PZUKVMUTGIHSJGPIAXHBFTLOVOOEJBPFUJYWTZPNXQFRMYQDXIUYURNZTXBZYSVIGHURIZLJIDCYSJQZYQARGYVQXYAOPNCOWKQEBWZKEVHVUOSSWDNVRFDWOCNUMPEYWRMQKQSBPOAKXTAQTGQILVZAMMEKLLFFDJVHBFBKTNCMOHDWXHBEBEOKEDKCNUHFSSIMJACGWCXJPGLCSHDEFTNWXZBGEANXKNIDYFMAHJSU");
    msg.links.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::VehicleLinks msg;
    msg.setTimeStamp(0.0454720801537);
    msg.setSource(7241U);
    msg.setSourceEntity(192U);
    msg.setDestination(60493U);
    msg.setDestinationEntity(252U);
    msg.localname.assign("MWLNZTZYLHIXG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("VehicleLinks #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.565891974478);
    msg.setSource(41774U);
    msg.setSourceEntity(159U);
    msg.setDestination(16767U);
    msg.setDestinationEntity(186U);
    msg.timeline.assign("GSOKYNPAVTCXLITOUJZPQDMQUHVJZPHIYSPGWSMEJEEPNMUWUVOZQRPDNKUJLWBMUSLXNLRHCLKCGYAUHPDGFWBACMBSDBXNLYWOFFDGLGMMFVDQHKAYNGNTVZETIHXSOWVKEFXAUQHLBFZNQIYTDIRJTZBAWXATXHCRKYOHCKMPNTWRGRDNMBYXFBQIRGOGCQYVCXQJVO");
    msg.predicate.assign("NIFFAOOAXRUCKWDXSBJMHDSYICPYXFMUEWRSZJDPZBAUUFTACVCZPEXBBQM");
    msg.attributes.assign("WBLNJMDAOKSBXELDWNVYTMWMXXLNGYYIQHIVUXCPCOGTCEPHDBXVRWMEZLYPQQQCIKSHABRZTFECONQIKSGJHRNVCDKFWNCMIRKRTEZNAHZYWREUAZGVFBXGXFAPHLPBVLEYITLGATUDIPJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.0308444790004);
    msg.setSource(43311U);
    msg.setSourceEntity(103U);
    msg.setDestination(26319U);
    msg.setDestinationEntity(122U);
    msg.timeline.assign("AEJTRTMBEXZFHSGXALDJYJKKMLSWSLOLPVIQADKDNQJFDQZTDSGBLDW");
    msg.predicate.assign("QWPGKIVHAYLDJEJGFXOKCSOTIDQNHAHTDGYQGSYMZULEXIYWGYKVGAEJSOOUBEDPIZCHFQAXRNKQJTZFQUWYBSPAOHETCNFMEZAU");
    msg.attributes.assign("WPFCUHVJQJCNAMEZAMFOSAHUKVYRSSEKTWXGICYQSDNPTGRUGBZNHTWERMHLFNEIOQNEBPCCHIVXEXHOXSIDYCLZWDJGSBWRLFRJFUKZOZMYKTKXACEPBGUGVITOUNHVAFZDVYLJGPZLMUMESXTWNIHIWSKOJYSLUEMNAXQITOGKFQYYYGTBXQAJNBDKFXCPCUVPJRBWMBFDZLTLZAEGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexObservation msg;
    msg.setTimeStamp(0.350132942447);
    msg.setSource(32414U);
    msg.setSourceEntity(38U);
    msg.setDestination(8120U);
    msg.setDestinationEntity(187U);
    msg.timeline.assign("UYAMYNDYWXCWNIJHWMZVORRNWEXFCXPQPGRPLKIWXTCZZZVEJNLUNOEIWGDJIHBWRDSEQRYCQPSNHFASCBLNLPKAUAEA");
    msg.predicate.assign("MEFNTAEYISWIRTLRVJYGAUHGPJRDBUTKXWJDLNLXHRWDICYNTLYPUAZCDGKFZSCPTOIJOPUSDMBOLCHZVKCGVQYAKDWPHEQOMXXXADRMAHWEKJXZSUNORESUOQSMYLQFTSFNTKIZQVNYGMAMRBBXFZGPUEQBQPEWJDKKHSVHRFFUAMN");
    msg.attributes.assign("ZLKTWXBQBLTXSBBCFTIQRYAXILMUGCRQIWPPUZYOEZIHCGNSPYRQXGMKDIDHCPMMANZYQIWSHWNUKLAWVHVWGFIRRMZAMJQJLDVMCFXSQNRVNDYWSZYTEUHE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexObservation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.437433413472);
    msg.setSource(59442U);
    msg.setSourceEntity(159U);
    msg.setDestination(37392U);
    msg.setDestinationEntity(72U);
    msg.command = 174U;
    msg.goal_id.assign("EHUVNZJCMELZDGKROWJNUBJFSMBSSTSXYEYMNNEDJRPAFTZKEGPMMSQBAGHEAJIECLAIVYTUXZOZCODWQMSAJICDTWJLFQBIGXWOLQUYGCGVFSFVITQZXQPTKKKYDXDGGHPPKZTNXLZYVWTYWSOHQAFCAGYBHEPWNHHPVCWY");
    msg.goal_xml.assign("ZTNPQUZLHPJEVLGUSFXQTSXKMCLBTYGYGBHPRDDXJRKNLGVBLEETQMCDHQUTDBJPGIKEMFWNHSSFBATOKNIMJNXSZNSVNEOACFXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.751239598346);
    msg.setSource(462U);
    msg.setSourceEntity(253U);
    msg.setDestination(60770U);
    msg.setDestinationEntity(17U);
    msg.command = 182U;
    msg.goal_id.assign("SUPBSEFNBVAR");
    msg.goal_xml.assign("LYHKOXGZJCXKBTHSKVWUEOWTNNBCBWVPSXLUISPOVPAGCRNPPDTFYPSHHHKMNJLRGZBXFEFYEMZDKMHBQISYMEARSDLMIOJKACRJRDGVSEQIVXTQIXRJGKSFDVUAGBAOPTLJBNHJDGIQIMFEVYXNNGQALG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexCommand msg;
    msg.setTimeStamp(0.543322058864);
    msg.setSource(54489U);
    msg.setSourceEntity(125U);
    msg.setDestination(39515U);
    msg.setDestinationEntity(207U);
    msg.command = 9U;
    msg.goal_id.assign("OKNUYOFVSUHRNSPXGBXAERMZIFXUUMJXGWHCSQAKFTTHKXMCMZDCZBUSGGDJIKAXEBWLIVFBLRQVWCXQHTEJPVYZHLQWEDSPOJHEOLSPZBFNNOJIQYABGWPUZKIKESSCHDRDLJBMWUZFAGCLEVZRXMHMJJURJWCYDFVYEVGTATTFOHLONNHYRNMYBBDXYUVKQGZORCMRAZKWJNDDPPFDOGQYTWRIGTCNXAUQCIWVA");
    msg.goal_xml.assign("FAFCRPHVHVOWEMNWJQJYXUJNDSDNLSCGEDLGXXKNTIGNPVYDWYSHITANZKSAXTYOBLKGST");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.0172711082193);
    msg.setSource(18790U);
    msg.setSourceEntity(205U);
    msg.setDestination(58060U);
    msg.setDestinationEntity(54U);
    msg.op = 7U;
    msg.goal_id.assign("CKVUOTTNVAGFDNTIHFOYZMSYIEJSBGHUDVPJHFLEAAFXJTXDQZCOSREKZFEVLPPIDJGZXLGLCEOYDTVTUJKWRMVBYVJBQZAAYBPKRAEUWQXZLEJCWHIFPZPCVSEXSBTHIKQWUXSHROUQMUGDCSDKPIIMRATFGWQTMFOYRMVLWZUIHXABEIWPWHQYRKYNPKKRQI");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("UFPPFNNRYFHGWL");
    tmp_msg_0.predicate.assign("WFPLWTEFNEVHIOEPSMWUUGJCCRINHFOQFPTMXVQKEDOTLNMMEAFZAXYVMJPBPXQVZCFRNHJES");
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.434175318842);
    msg.setSource(55337U);
    msg.setSourceEntity(212U);
    msg.setDestination(38255U);
    msg.setDestinationEntity(8U);
    msg.op = 168U;
    msg.goal_id.assign("UROKEALXILLAMTNQWOSHTGNWHUOPZGPXBBYKAWVKQOMRCQTFDGACOPUGRVFAZHYYTQWSWYZQLBIWG");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("RVPKASODVIOBKSOMUGMJDLWIMCQUMWXGKKXJQAUYKYFANLGZCHAODRQWNWWNNT");
    tmp_msg_0.predicate.assign("KPFZGMPJEGMNPLRHKONTWLFDNDETPWSOYRYHWMM");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QAXLTFVAHXBBEIWGJYHTJCABSVWESNFDGPZQZOEYXCDGVBOECXEFVOPWOCSLFWJNHIRFQDFPOOMIACSMLKKXQRWYMZKVZLMQVVNSFWWZEJMKRUOHKLEDLSTLDKLZAIPBIQLIPSOD");
    tmp_tmp_msg_0_0.attr_type = 35U;
    tmp_tmp_msg_0_0.min.assign("OPXYQYCYASRHNJTDRWXHFYBZULSUTMDUWMUKVKQSYWEZSHJHGGTVGHZSAZIPFSJZKVBNBQNRGXPSXY");
    tmp_tmp_msg_0_0.max.assign("UBIJKHURFKVXOHVDRPWAYFYLTJCPASNSWJMVHKVYRDAEXQTITSCKRGVXLPAHIBHDMOJOSQEFUQ");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexOperation msg;
    msg.setTimeStamp(0.315495421488);
    msg.setSource(37839U);
    msg.setSourceEntity(119U);
    msg.setDestination(30670U);
    msg.setDestinationEntity(244U);
    msg.op = 253U;
    msg.goal_id.assign("OJUXPIEQQWWCYLYOJGTXYBBNBPZLEUMQJNCHQRJKCXGGLURAKRABJTSNILYZDKEUHKORHSFJICZIIVWFXZORYARPEFUAZONKCEWBLWGYXSVMOWPGAYDTRFYQEAJBXOWBKXSNHVSHVSUITRLQQZAPBSIHUHDIFTHCTQDMKTCPFJANGKOWVRDVGXEOJEEDAVZGVUQTVPCNPLMZVNTPUKYT");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("CTIPRLGRFJFGLCGCEEXUQSQRCKDSKEZGUINTOMKOYNDITXSIZZXWXVYPRDLGBENZYAGXAADWQKOBEAPAXMTYVPGSKXNZAZRUFIUKUQNKTUDLLHTDNDTXYMCSSQENJCVHHWVWVQEGVLFRJDFVHZSQBPMCHQHWKHJIWMWHABATIZWIYMBYBFTOPMCISPOMUVDPNRBOBEPHQPFVYFAYHJJERSLRLGIFOLJSRONOWKZMZVWCBNGQUOLXYMEX");
    tmp_msg_0.predicate.assign("RSVZASARSXB");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("UMDDNGAZAUPOMQDAREFVDFVHYDJJIFZEXEMTBVVLTRITNADBPIGHDFJBEYBIUHMQFYKSRSESOYRQPCCTFLYKWUTLAGMFAPIXKAZJVNCBVOUKXWIDQXCSBKBPPTYRNSMQOWKJRAHHPWZIEPHZMKNXXGSVOZNHKSADLGCQMWWFLQESWWTANRFKRHPZZQZLYS");
    tmp_tmp_msg_0_0.attr_type = 49U;
    tmp_tmp_msg_0_0.min.assign("VEFDPPHWFRYYLUIFZNDFBTGUAUKVOSYIYVEKJHWSDXRUUNFIOXYIPVJRPAMGHWTANLDDJHNWPYQLWIWSXMQBVCIQAZXVJYRRQIBGJKQZGCMAPTESVLMZPEKWNUXDOQBOIWRGENSBRCHZCDOERKZOSCAZNOMCFCOCLGAKTLBAZBACMKDDGGMHAJUHELH");
    tmp_tmp_msg_0_0.max.assign("JAWYQDBUYMFHNHDNYATHPOFFDSUCFALVBHSKYAJJDNDJGUZZWHOYVXGAHKXGGTVRMUCIDLPKJKZZBNMFHEEQKQZHREZYTORCVIOUHXTOSAXCLVDVIVXPFIRTZCNZDBWEGSXBZXQCSIPEJDGHLDWCSLPKTFEXGMBOUOGAPIOWCTSTYFNJGACFBPZBVMOQYCXKNGJEPSVWKLMVNPURMWMIAKKWIPRIBONWWMELLSTUSB");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.token.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexOperation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.972684226962);
    msg.setSource(33993U);
    msg.setSourceEntity(235U);
    msg.setDestination(29774U);
    msg.setDestinationEntity(175U);
    msg.name.assign("MTQXBQDSPFXLJZKGHYXBOJEEQDEEFZCKFBOTAZFSFTNLGWOIMUUYTIZIMXHSBDTLRXMQ");
    msg.attr_type = 87U;
    msg.min.assign("BYSZHUGFDELIDRVQWVLSLXUQXVSIKNUKHNBZSLOUJCJBKC");
    msg.max.assign("SYBGYCEPUWTAZJTNNXQEAFIMAUTDZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.927139655041);
    msg.setSource(64645U);
    msg.setSourceEntity(38U);
    msg.setDestination(47053U);
    msg.setDestinationEntity(110U);
    msg.name.assign("YFAQTTCTJYOEFMCLRFJKUAWWAIDLJTXTHGQZLUFAWBIKLMQGHPYUOCVPILVRXVPHQSZSFYODXMUMYKSVZXBONFHLILKGHODXSSZDEKZEIPKEMRSPGDXEYMDNZMUXWXHNOURBVCTVWTYDQNEOPGBKBAKBEWZGRTCMOVNTISWMIJRHBVNLDNCWQHJLYBFUISZZAACNEGQCPRHIIMKRPNJXJVLJUAQKUDJFAWBCZSFCDYQQNSHEP");
    msg.attr_type = 102U;
    msg.min.assign("FVCUVWWOKXWPOHCSGFOIFFILSMODTMMQXHBVXVXFUYABLNSQHRMJZSZBYOZDWKKAZPWEGIQRZQTCRHXJNJWRIELKMYRGPQPCSTGOZNLFUFKMBJINSHYZNUWLIDAATT");
    msg.max.assign("PNSDBDYFYLKZWYLABLIONMYKSVRGVOEOQHEZFFZHKTMKSGRNUYXXQCCDRSHICWHILICHZXCRETMRTTQXYBKQUFKUNSIBGSPLKFUWBATUPZNUEJNWNDUWBJUPHSUOGQERME");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexAttribute msg;
    msg.setTimeStamp(0.511184686215);
    msg.setSource(56403U);
    msg.setSourceEntity(220U);
    msg.setDestination(20707U);
    msg.setDestinationEntity(159U);
    msg.name.assign("SHVMKJDRGGIOQUOHB");
    msg.attr_type = 78U;
    msg.min.assign("DGSMGTNBIFMPZUCWVHFDSWEIYIUUCFLCOQSVPKZAXKZQGJXHCBFDIPNYKJQOIQERZOGYDNL");
    msg.max.assign("RWFODRFOSRYLLDEIKNNRADECGAZWRZUXBVCBWNPRIVBKOPBPHKXSGAHTIQUJGMLBOPBUZXMVLQGFJRDZZYPVLTHENKRKAMDOTTWGBXCK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexAttribute #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.330191243267);
    msg.setSource(33300U);
    msg.setSourceEntity(202U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(207U);
    msg.timeline.assign("SCIEBSJVVJETTUANMGOEIFTTYCZRUOWFGWVPTSPHEXWXFWALIRMMPPLVUAAQPPILUNATUYJJXEEQOTKKHVXCDMBXYSSPQQHMRXJCOMLIAAELSGVGUAPSAOIZEBDDVBQFOMJWHQKYYWZJGRMWOCTCQPRXPCDQOYWDLUMFCOBVNKOGXFZFHGLBHRN");
    msg.predicate.assign("VSAPTUODFUSUGTGWQLNMDIFVQRQHXKPABDAUCIEHIXIMOPSGYNYJBXCVUNSRLVBUEXQJWLTEJDLPDAMRKRMIONHZYKLMVEVUPLFYFSTANAECVFKBFHEHJULPHFPOZTMYEQKANOTZG");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("XVUKCKMATRVIUNZHWPMWSWZCFGTJVEYJJEOW");
    tmp_msg_0.attr_type = 151U;
    tmp_msg_0.min.assign("ZPIIFHUJZCDTVJBQISQUVULLAADQMKWVKRXQQNBOTSDNPYBDHGBLSZSDNGROKKWKYMUVHUAOORJVCNBXRZHWCDMONFRUCRDDNIBCHGTVNAWG");
    tmp_msg_0.max.assign("QIPJGWAEZPSHKSZYNZLHZHTRMNPZDWUTTWLNM");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.241461400115);
    msg.setSource(32165U);
    msg.setSourceEntity(137U);
    msg.setDestination(50742U);
    msg.setDestinationEntity(231U);
    msg.timeline.assign("BDULJLIZDOBOGYEDLBXWPWWMJKGPSVZNWJDDUTJMNQBMQPSKZVLEFIBFJGYKOHBUAALFSLWVTMZCBDJSCIAIXAMPFMCPYCURLCVRGPKHNDXFTUBITMNYTGBISEUZJFPMTEAWDARWUXJNRVTNE");
    msg.predicate.assign("YQCDSQUOQGYEPWWSHQWPYICJANRGJBKFLPENNZMNLIVMIPYNMDUEVLAXQBILFYOHQTC");
    IMC::TrexAttribute tmp_msg_0;
    tmp_msg_0.name.assign("JVEYJPRYBENQMJVHFSGXSTNDNDKHXOGBALDXIKGLMHTFFVCBIGCCNGWZNYSDYWZPEOSZJMRCLCJTAUWAEFXEUVZOXAJOLQXCSQYKRTRCBIOIMQIBJZBBFEVCAMQUVQQHNMTULURQZBEKRPFDHGSLWPFZIHTAHTXEDCWAOEWKYRIVIFSFYTLMVASWQADNDMLBWOYNKPLUPKWPIDOJPURPGOUKVXMSTVNXRKRHTH");
    tmp_msg_0.attr_type = 56U;
    tmp_msg_0.min.assign("KKXPKUMFODPQDHPIWYSYROKWXJMLHPJQMFCZGSGSMQLGAXPIEZSTQIHISJAYMCEVQIUMNOEFSBSMAJWJNOCYRWANBMEYRLCBAWNGEJVGLKWHBKLUCDHVREKDIFAIZHYZVPDVRBERYTLUMQNHWXDTAZVSXXUXUXTHONTVYCDFDUASCXGJOPXJSC");
    tmp_msg_0.max.assign("MXLNSAIMXPBVMFXZQITUUPYIFSZQOOKBLOOPJLOCLIWXDVLCZNGHMVHEXYTSY");
    msg.attributes.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexToken msg;
    msg.setTimeStamp(0.907467207063);
    msg.setSource(46864U);
    msg.setSourceEntity(214U);
    msg.setDestination(15626U);
    msg.setDestinationEntity(69U);
    msg.timeline.assign("GMWXMFTEAKKRHNMJURSSNYGZEOJXMPHSPKMNYXCLZNWKITIGQYYVAVJSCSUDBPJFUTRDRBPZFFVYABLBDPZNPWBYMT");
    msg.predicate.assign("BGFELHCXDZMWGVPCIAGLCSGAAGRZHWMVFAUMVNJBXDK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexToken #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.305740507735);
    msg.setSource(7154U);
    msg.setSourceEntity(91U);
    msg.setDestination(64938U);
    msg.setDestinationEntity(204U);
    msg.reactor.assign("HQYAIMBASIGCJUCZCLMYCBEFOOTBWJCGQCOFTITLPZAKZUUTMQRTYXTUYUNLRGHWINVPIVYZDDVWGOYTUMDJSBFXSBIZWDKRTGSXUEROWELIDCBLUODPVKGYGZPFFENEGNEXODVKUMOXKKILHMHSHDZVLYATWMRUJWABDNNMEQKXBKAEOWGJFHGXR");
    IMC::TrexToken tmp_msg_0;
    tmp_msg_0.timeline.assign("JSYOWWQWRZPRBJYOUDQTGFNEMLMGVTGNENZRCDXVOALLJSJEDRZHABIYSXTIZNIVNRKHHQQUTBHEUFMEKUEBBSZHXAKOBYFNXPRIDLWKIPXEFCMJVQXMAZMKSPUTHOFOWBITRAMVAJXZKDIPLQIBUWGMXPXYNMATRYKVFTZLYWFVORDEFVLUBCERZAOMCLNJTKIHCCDUKCJQDQDUUSSNPIVWHZLCASYWYSGJLNGAPQKTSFPPQOB");
    tmp_msg_0.predicate.assign("XFPSFALWNYKQIHNEBZHJNVGVTHZMQOXCFUVHWYNAHMRYLMLBBDCAZSGZTDZVENPDYWEDMOFKCIPDVXEVMQJJ");
    IMC::TrexAttribute tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.name.assign("QHPRFSAWMLQJBPHBATGQFUODHHWGYJGZGENIVLZNFFXSFBKRYDTSIORWRXMUXIPXOGFLNRWSYKKJXTUJOVZNMMZDVELYXSECNKIMUGWQCQVCYUPVNWKQCJKHCBJWEDVQEMZRRNNFQPKQAPDABSZWUZXEEI");
    tmp_tmp_msg_0_0.attr_type = 41U;
    tmp_tmp_msg_0_0.min.assign("IEMTAJWNQJEQQKPVNILFOMPCIFJSUPOBDYFJCEOTFLVXFPRLEKQGPQENGVYZGMUHFBTHXZRJDENPUXNZVGMVTCYKADNMCJJDHRSLUWSBYSWVXFFCLTKJEZPAPLOODSVXXIZDNXIKFYYWZRLHNYWSWTSIOHBHNBYDABKSSBQKXZIJZZLUMPBQKSDGVOUTCPRQHQA");
    tmp_tmp_msg_0_0.max.assign("WMXQDDBNVLZRWSQYHKGRJWWULAUVAMMYMMHDPXTMJKQSWCNEGUZIYQNCFKICLVFPVDGFQUZGJUBINTKEAHBCPFZPNIECADWYADPPRTNAQNCKCTWGKTFVDUTVFRHTRHFQKUJWCGASOLJPJKMWKBDOBPHYBGHOLSBHVXWMSSERLQZHYXOOSIEASIAXYKEJRMPENXTZHIJXOXOZTIQFFSECJRLMLIZYBGLPALXNJRCVVGDTUYZEOUOYVOGFZBE");
    tmp_msg_0.attributes.push_back(tmp_tmp_msg_0_0);
    msg.tokens.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.932468129801);
    msg.setSource(64624U);
    msg.setSourceEntity(199U);
    msg.setDestination(35283U);
    msg.setDestinationEntity(51U);
    msg.reactor.assign("TLWSYVZQLUBGBEQXNAEQAZULXRAKFVNAPEHKSYGQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TrexPlan msg;
    msg.setTimeStamp(0.124511256399);
    msg.setSource(46206U);
    msg.setSourceEntity(170U);
    msg.setDestination(1997U);
    msg.setDestinationEntity(21U);
    msg.reactor.assign("WMMZEYWVOTQQFJPBMRJTGDNYXOPLTWAYAKMTJDYQLRAWBCSX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TrexPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.458099647415);
    msg.setSource(47230U);
    msg.setSourceEntity(9U);
    msg.setDestination(54149U);
    msg.setDestinationEntity(183U);
    msg.topic.assign("LJVROKGFDZGWBZRKAYAMQPOKIRMJIVQZANPHVLVOUVCJ");
    msg.data.assign("SNEJCMDWCNKCEFIRPYAUGUWWQNHVQDBXEXPOVMREBGKECOVDUFTJBLRCPAHZMLXVADFJYSBXGMDXRPSPTAGNANIOEHZWFSOTHZFSMURLHEZRAKCZRKSUWHQJDWBIQCHLIZIXEZLJRVJAYMVWWFKHCNPYOTDFZLGFSQPNXT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.807714419203);
    msg.setSource(9749U);
    msg.setSourceEntity(133U);
    msg.setDestination(41740U);
    msg.setDestinationEntity(200U);
    msg.topic.assign("EPMUFNAFSNTZWXGIXQBEZDQRKHJIERRILXGDLKOIBGAFODLCMBKUPACDTDTNVXDYTHPQWMNTOAPNJ");
    msg.data.assign("PSUZDWFSLSAYXUQONGHKNHEUZGJORZTMZIMWLHCLZONOKBEIUIQXGFISAYNRUDDYEUNZSSHWPJCJVR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Event msg;
    msg.setTimeStamp(0.431737802581);
    msg.setSource(35853U);
    msg.setSourceEntity(74U);
    msg.setDestination(10121U);
    msg.setDestinationEntity(182U);
    msg.topic.assign("PRCASZTUWJDYNLYPUBMYCCHQXWSHZNBYADWUFHWKKWOYAUGEMQTKOTSBNSJBXUWGHTCIVQGMFJUCDMMZVXQDIKZLUTIYNMVTDMBOGVBQVGCRKRVOBAKFAQRALFILTDWPEXJXISJVJKRGCHWZFKFISQLPOROLARUOQCPXSPZHWSPRICEGZBPLFSJDZEJTKHYRGWVHJEGGUFXMQAYLKAIZLYSDUTZOEBNDQNLOF");
    msg.data.assign("ROZCFDCVIFOWXRZUKKMDQSISOEFBNZZRWUGBVTPARONZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Event #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.924916875277);
    msg.setSource(10322U);
    msg.setSourceEntity(178U);
    msg.setDestination(35212U);
    msg.setDestinationEntity(219U);
    msg.frameid = 35U;
    const char tmp_msg_0[] = {-46, -111, -118, -90, 5, -34, 112, 77, -31, 14, -86, 96, 123, 95, -34, -94, -63, -56, 112, -65, -31, 59, -16, -89, -126, 105, -128, -39, -14, 2, -90, 100, 103, 84, -60, 95, 73, -109, -77, -80, -41, 105, 110, 50, -115, 111, 121, 16, 125, 56, 90, -14, 12, -53, -83, 45, 92, -100, 51, -21, 44, -52, 55, -113, -76, -1, -123, -113, -1, -80, -118, 96, 42, 36, -45, -62, -78, -59, 97, 105, 95, 20, -81, 98, 100, -109, -36, -3, 55, 21, -57, 124, -99, 122, -128, -34, -121, 105, -10, -52, 108, -23, -49, 13, 125, -85, 61, 35, -53, -61, 51, 80, 74, -26, 51, -14, -76, -119, 61, -45, 62, 53, -51, 69, -70, -3, 19, 32, -67, 88, 4, 6, 94, -5, -54, -34, -112, -28, 46, -119, -91, -61, -63, 123, 47, -61, -29, -68, -108};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.845040170499);
    msg.setSource(1151U);
    msg.setSourceEntity(235U);
    msg.setDestination(59661U);
    msg.setDestinationEntity(89U);
    msg.frameid = 171U;
    const char tmp_msg_0[] = {12, 102, 48, 70, 62, 15, 30, -7, -7, -113, -88, -57, 92, -109, 104, -20, 44, -29, 86, -69, 40, 69, 96, -72, -120, -19, -46, -111, -70, 93, -34, -51, -74, -14, -2, -66, 28, 86, 23, 46, 59, 100, 125, -102, 94, -24, -78, 61, -16, 114, 120, -76, 22, 42, -85, -88, 50, 50, 93, 57, -92, -68, -99, -95, 63, 104, -59, 76, 27, -46, 29, 124, 32, 44, 32, -120, 97, 109, 28, 11, 32, -68, 17, -96, -59, -102, 19, 126, 27, 97, 3, 93, 6, -104, -5, -34, 72, 90, 73, 24, 3, -47, -103, -58, -108, -19, 79, -77, 38, -67, -100, 100, -3, -108, -83, 101, -27, -55, 44, -80, 34, 103, 113, -24, 86, 49, 33, 42, -45, -49, -63, 126, 64, -125, -76, 122, -50, 118, 54, 120, 112, 46, -56, -85, -44, 79, -51, 83, -106, -10, -117, -89, -46, -49, 104, 19, -6, -115, -86, -116, 69, 126, -118, 4, 38, -122, 106, 85, 8, -76, 15, 101, -112, 43, 24, 45, -57, -13, -34, -113};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CompressedImage msg;
    msg.setTimeStamp(0.687648618127);
    msg.setSource(48949U);
    msg.setSourceEntity(94U);
    msg.setDestination(47610U);
    msg.setDestinationEntity(23U);
    msg.frameid = 41U;
    const char tmp_msg_0[] = {-51, 14, -4, -35, 38, -95, -87, 48, 31, 103, -117, -13, -104, -116, -19, 23, 86, -4, 100, 47, -70, -81, 5, -11, -100, 94, -19, 83, -6, -95, 91, 80, 27, 18, 70, 64, 98, -63, 83, -57, 19, -71, -124, -125, -106, -107, 41, 13, 103, -4, -122, 78, 65, 15, 19, -24, -64, 5, 8, 124, 9, -69, -64, -84, -121, -13, 49, -37, 96, -89, 53, -95, -29, -34, -106, -121, 117, -71, -73, -40, 71, 66, 13, -127, 13, 66, -113, 110, -107, 64, -27, -88, 124, 32, -82, 65, -44, -90, 13, -62, -98, -36, 47, 86, -9, -108, -80, -107, 45, -71, -83, -84, -122, 93, 81, -75, -48, -103, -106, -94, -18, 119, 2, 81, -72, 74, 47, -38, -77, 38, 4, -114, -76, -123, 75, 58, -88, -85, 8, -96, 81, -44, 63, 13, 23, 19, -126, 8, 12, -73, -111, -24, 69, -25, -70, 81, 103, 83, 57, 70, -115, -31, 72, -17, 23, 121, 30, -66, 68, -47, -105, -25};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CompressedImage #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.0616190958932);
    msg.setSource(64013U);
    msg.setSourceEntity(148U);
    msg.setDestination(47407U);
    msg.setDestinationEntity(29U);
    msg.fps = 62U;
    msg.quality = 80U;
    msg.reps = 146U;
    msg.tsize = 142U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.317948524467);
    msg.setSource(37251U);
    msg.setSourceEntity(146U);
    msg.setDestination(57476U);
    msg.setDestinationEntity(49U);
    msg.fps = 210U;
    msg.quality = 164U;
    msg.reps = 179U;
    msg.tsize = 168U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ImageTxSettings msg;
    msg.setTimeStamp(0.293849891283);
    msg.setSource(10685U);
    msg.setSourceEntity(174U);
    msg.setDestination(18856U);
    msg.setDestinationEntity(23U);
    msg.fps = 135U;
    msg.quality = 96U;
    msg.reps = 177U;
    msg.tsize = 55U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ImageTxSettings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.280928954423);
    msg.setSource(24666U);
    msg.setSourceEntity(233U);
    msg.setDestination(13406U);
    msg.setDestinationEntity(126U);
    msg.lat = 0.727890129544;
    msg.lon = 0.239358048677;
    msg.depth = 139U;
    msg.speed = 0.711614721829;
    msg.psi = 0.340675403979;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.302312192537);
    msg.setSource(39242U);
    msg.setSourceEntity(182U);
    msg.setDestination(59538U);
    msg.setDestinationEntity(166U);
    msg.lat = 0.241389993755;
    msg.lon = 0.219902054754;
    msg.depth = 16U;
    msg.speed = 0.393204739054;
    msg.psi = 0.547625120084;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::RemoteState msg;
    msg.setTimeStamp(0.842961188551);
    msg.setSource(41968U);
    msg.setSourceEntity(232U);
    msg.setDestination(4024U);
    msg.setDestinationEntity(244U);
    msg.lat = 0.390068631477;
    msg.lon = 0.147331169521;
    msg.depth = 159U;
    msg.speed = 0.954258070191;
    msg.psi = 0.322379112949;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("RemoteState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.267430703163);
    msg.setSource(41217U);
    msg.setSourceEntity(6U);
    msg.setDestination(59003U);
    msg.setDestinationEntity(58U);
    msg.label.assign("UHXBUHNIQBOKJJAYRWFPGCMUSLMCBIHUKRCQYPVBSVMANJOTQRUOLNBSOSPNPTZKVAACYNTFHDWQYANIOTBYUHGGMHLUGLHRWJZUUXWUSDKJEDLTTCTGACRKQAFFDGKYQOEKZYLDWLPIDYGFWEIMEGESFGXVXLZRTJBHXEEVKXRPVGNJOOZIPXISRXYZSV");
    msg.lat = 0.690069949896;
    msg.lon = 0.529284528039;
    msg.z = 0.739085063598;
    msg.z_units = 72U;
    msg.cog = 0.427935678742;
    msg.sog = 0.528740002544;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.241226354039);
    msg.setSource(65U);
    msg.setSourceEntity(189U);
    msg.setDestination(60653U);
    msg.setDestinationEntity(52U);
    msg.label.assign("EGQETVDKJWXFOCVQEJGQOKOKBMWQRSBYGOJUCQUIGGRBKZOYCXSLHERUYAQSXLHIRA");
    msg.lat = 0.986575557391;
    msg.lon = 0.938106047342;
    msg.z = 0.0501704569981;
    msg.z_units = 202U;
    msg.cog = 0.686656715499;
    msg.sog = 0.52853161975;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Target msg;
    msg.setTimeStamp(0.0911826589349);
    msg.setSource(25724U);
    msg.setSourceEntity(112U);
    msg.setDestination(11270U);
    msg.setDestinationEntity(153U);
    msg.label.assign("EVQVZLKSNGKCPAYVOSDEZGCHOBTFWPRPUZQIQSOZOITWNWBQDTGTDWEORWUNIHBPZGBBDRWUBLQII");
    msg.lat = 0.0672506352621;
    msg.lon = 0.85206057636;
    msg.z = 0.315347047156;
    msg.z_units = 30U;
    msg.cog = 0.320804519447;
    msg.sog = 0.762827005935;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Target #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.681440263286);
    msg.setSource(44856U);
    msg.setSourceEntity(187U);
    msg.setDestination(27576U);
    msg.setDestinationEntity(190U);
    msg.name.assign("QLLZQLEVJJH");
    msg.value.assign("WSKMEHZINYCAK");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.0264960437586);
    msg.setSource(13042U);
    msg.setSourceEntity(210U);
    msg.setDestination(23871U);
    msg.setDestinationEntity(76U);
    msg.name.assign("MCMVFUVXZQKVMUEGXSEXLVRWIBXBNCUFGTIQIAYHCWULUSXVOQFJFHSOIJFDOYXFICNRQAJIYELDVTZEPLBPSANKCWPIXBXTSENNIEHGTQKOEDJLTTZVBWRZRMWYAQEKZWYHZWKMPTZXPSBBCKYVZPUNGDAIOPEHGSZDDKUYOAHULVDWASGOCFGMPXHYNYLQTRRJCALTBGMLRMHJWBSNUKHQCKJPAM");
    msg.value.assign("IEQOVXBVHICSCSKXIIWCUAVVETSIQPZAGXKLJLMWLDMCXKAJGVPEOMLYOUSNEYMEGENZRCAJURBTYGOLFGCDOJBLORWSRCIDXUBACCQLHPXJPRVFZSQJMQUYNUWUXPGIDZHHDFHTTSRHMSDVZIHKNDAJNIJWGYJKAUIPFYKCKBGEFRHBFNKYKOLVDHYVWAKPUYWZHWQBGTMOQPLGFPYALBTTANTZXERFQWNRTXEZMEBQVMTZO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameter msg;
    msg.setTimeStamp(0.954380709298);
    msg.setSource(54306U);
    msg.setSourceEntity(180U);
    msg.setDestination(42012U);
    msg.setDestinationEntity(228U);
    msg.name.assign("VQAFHVXGBYRUNWSFKWTSXNOYRMFLCLVDBWHJKCQDIBJBYEEMPPMABCAPEQZGKUJHRWQAFZGQCCZIGATOEHLEVVUJNIWZAYSDYFVRJANSWUXNUZDRNPXGATXKVYGFGQCXMLKPJVSMDALXUYQMGTLETKMKYRHSPOTHKNLTDPYIFBNLZGEESOFOZBXTDLRWRRLIAFNBOCHCBMEDHOIQGQTJPIRSNIYXMOKDXUQHUZZTKOPVFCZWISDJVCSEWBUI");
    msg.value.assign("YBLAPYLIMQYARNKUBONGOQXKKAGFFDKHAYCONMGTDQUCPVZWBYMXSWIJHCXJHFQRMWJETYOAUZGVKSLXCDUYUQKGLRQTOPELCSQEKDIFOFPMLSWSTLIGHTFPBCSIZCEVJJEVYUFARHPJPHJFFJNRTWMSRDEUQMDVVLRPOPVHTGBCSNDXGXZWANTDRCOBGSALTIKBHJNBPMUF");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.484190069404);
    msg.setSource(16757U);
    msg.setSourceEntity(34U);
    msg.setDestination(10208U);
    msg.setDestinationEntity(165U);
    msg.name.assign("BCLINHUPQXVADSIGEDBDXXYTAFWWACVMANZVWIRPWFJYCAFGTPDHDJSNQOWPNLIEOOEPMHPJIUBHMNVTKNDSUCQQPXAOIRZKLXUJLFTJNBFGNEVKTQZOLHRESAXYQLAFFUVGJETKMZEODVWRNGCHUFHDQFEBZRWTGJLJOYOAXGLYQUMGJSTUTQVURSYGSPHWKCXRMNCYCTPXKBHGZCIDSLIRSBKMYYMEBSHKZRWPBFAMLKZDOYZJBVWMZIIQ");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("LRFWEIDZTDDQINUNCEGKRKBNYCFXHFKEGWSSQBNOKOXSOKPIGVLFAETMCTQXDCEJBPDOJPHUIHW");
    tmp_msg_0.value.assign("RONIDJGWKCUTYUYQFZVVXMFAPPSNCHRVFFWVREVCOMTMCMOCTTYJYQSHMANMWETAHAEQZSUUAILMAPIXHDMKLFBUOOKLPSCDCVUGKLGYBYASXQFJKZLYNFZZUCODWSNGOKZPQBKDUHXYPDMOJXQKGPEVRHFIMLSYBWXODUVHIGNHVQJZWDSXWJNQEPJBEILIZBDISPWRKKTFQYRUZTBHTJQFGLXISWWDTEOLANBJGIRE");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.714371403381);
    msg.setSource(34684U);
    msg.setSourceEntity(48U);
    msg.setDestination(12962U);
    msg.setDestinationEntity(97U);
    msg.name.assign("MQKKAGPTZFLNIJUABIDNVPXVXFRKIRKVIPSIEZSCMXLCMECTDLHKAJGTDHQOICVDQLAWOFYGSKNGHCMIPLBZBWYRTZGQCGEZTSKPJXCNRARZYCTAUGFOLSWAKTUEOXFPJUPSYDOHYT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::EntityParameters msg;
    msg.setTimeStamp(0.256342274785);
    msg.setSource(23058U);
    msg.setSourceEntity(202U);
    msg.setDestination(1558U);
    msg.setDestinationEntity(138U);
    msg.name.assign("XYLYYQXOPMBVCCEOCSSFJOJVLMBXPKMTTBWWVJRMPEHTPKORNSZRHJEKHFKDRBGNUMHZLHXSNIWUPDEGARZYAXLLQFBEJCZFORNNGAJLYNKIGUOWOVDHUDLIIXJWTZXQYNSKTNHVIGLGLTZCSONVHDVMCWEZTRJKVBZY");
    IMC::EntityParameter tmp_msg_0;
    tmp_msg_0.name.assign("NKNOXOIKAZQIIAUDQMTBKVPQCDBATULUSHQVWZFEBQELLMVRYPNXAOZSJTUFOJMJSYXBDIDAHEIMKDXQBURNHXUZMIWHOZGIYMIPTBVQUOPFREKDQLLNSUGFRWDTRKTOCGVEFYEMXFQHEXGFCLCJWAVDRNHVRAWFLGKZCCDPSZRLJZKUABYOWVYHABR");
    tmp_msg_0.value.assign("ACCGSXQEPEKPUYBLXLYRRSQZJSCNOOXRBCLYAEMTYPNVLSBJKTOVALRABLCNDMTHIUTQDJTYSFXROWFFNDARFZMCQVHJ");
    msg.params.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("EntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.768645576314);
    msg.setSource(60547U);
    msg.setSourceEntity(82U);
    msg.setDestination(55069U);
    msg.setDestinationEntity(173U);
    msg.name.assign("RTIYVYZAXFAUEMQHWNCUNDZGSMXNCUPFPXHNKOFNHRBLFVCMEETACBCUJKQGAMELKJIAUSKECQOLRYJDISIWTHMYQJCVZWSHZBHLRPYDQRLGYCUAXGDPZDKNDGFIZBHPFWLVETTUEYDZBOGVRQUUNOLJAQGDIYOSMVXPQFNSVBNILKFEXCMXXKVYJPWSOJHZOTAXONVJTBKURKDAJIPZTBGSQFGORWMBOLC");
    msg.visibility.assign("DDXWYQCDAYFIOOEKBMLLCAOUAHVVIXWTQMOKGJAZGBVZQTUIOLLWGXUCPSEXYIBUSFKPTHNSNLBRRMHRPYCBPGHRJCWMNJWTDUCDZSUOIRSKMHGLLXNNCQJTCKKVCBMNOWQFVLXWPVRYEFXXKQJIUECMIRRAEROGPWPQHZDTTKZXEJFVZNGAHZBIUWDSFYSEPZYAFKUMOJFWTEH");
    msg.scope.assign("FRNEXMEUPZUWJXYUIMMAPX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.151373917182);
    msg.setSource(7956U);
    msg.setSourceEntity(110U);
    msg.setDestination(53081U);
    msg.setDestinationEntity(65U);
    msg.name.assign("GIRRJQFMHUBKEVXCLOBKHWHUSGTFALDWWYYSFCOESZQJZGVBKWBZOZFLXRCPGUZHWQGPXNHDSYUFOOPJKATNAXZMWUUAFJETPAISLOBTNDVXVIRRR");
    msg.visibility.assign("JGERYUWTQCXPAWVZCQNICPOVEDUIBFSMKZEHTYZJAUNCUHOZHZWODXHRPYFBZGUTSICGEFPOGFOCDOLZJMPBKHBSLHRKYJNTIQDPFVLWGEBNHQOTDONHGQFWJRWBJAUXUF");
    msg.scope.assign("SIUMXRTHGBBFKOHMPWXPASJQZEJBYQDWEYGVIDEKGWDBPTLEQQITXRKQEZJJSQVKAPNDTKITR");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::QueryEntityParameters msg;
    msg.setTimeStamp(0.570157251368);
    msg.setSource(10778U);
    msg.setSourceEntity(148U);
    msg.setDestination(26575U);
    msg.setDestinationEntity(203U);
    msg.name.assign("TNDDBTGNNFJUBECODLSINQECHIYQQIQPEDKELKMBVGQPRJU");
    msg.visibility.assign("QIWIFQVWAAXPCQLHSXHMNTDTAIVOHTROEVAUHKJLDIHVBCDMJTGPMJMQORHTBMSAEWWQKVCIZSWZIYICTCFBEAZEUYLJQFWPJZHNGGPNOXEXGKIRKPJYLZSXIQQEKXUTHFZVYGMLYFSGFCKKOVLKOXAVFTXTYPBUHOSYYJBFUZUMNOLSUTGELRF");
    msg.scope.assign("WRRQXNRJHHFPDCJTHVRGCSZGOQDU");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("QueryEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.833906392823);
    msg.setSource(4698U);
    msg.setSourceEntity(142U);
    msg.setDestination(24751U);
    msg.setDestinationEntity(76U);
    msg.name.assign("TNHBNVQAPFFQJLPHRVTLPZARAWHNMOMYEEJXYORSZMGLASEWBJFFMVIHUPZAMYIXJLIQIMUTWFUJKNGOIGMDKGWCXZLKPCYRYVTKFCVLCHZDKWPHTFSDGB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.840615082064);
    msg.setSource(10598U);
    msg.setSourceEntity(181U);
    msg.setDestination(19013U);
    msg.setDestinationEntity(116U);
    msg.name.assign("RRFWFMIGTXZYLVDDUGNNOMHDZUOFSSKIGFRMVVSQUKPNEZBTTXJTSKKQDJFZMALRMFRTCAPZNQJEOOYBRHKOAHFZVHYJOBCEZKYQOQSYOAVEGWZMYNUWZPGWFWJATHUWS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetEntityParameters msg;
    msg.setTimeStamp(0.8506970967);
    msg.setSource(57305U);
    msg.setSourceEntity(182U);
    msg.setDestination(6743U);
    msg.setDestinationEntity(54U);
    msg.name.assign("ADRFKSPWBPMHLSRJRTBYVTLLMQXCIKUIRWMUUKVBCTJXXNTGQWUQGTAVCFZRVNLPPXTMYDTEDJBOQRYHDICEACOFYOZVOCWPXJQOMHHHXYFCJWUGBLONWSVPNIOKFJBWYIHWRZNNZKWSSDBEZPCFPSDVPMBLRXNLMVNQQYMFKZQEAAJRBIUHTSKX");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.223533828371);
    msg.setSource(13655U);
    msg.setSourceEntity(212U);
    msg.setDestination(4460U);
    msg.setDestinationEntity(28U);
    msg.name.assign("XUXCIMFLMPFSBINPCWEFYYPAWTIUJSYLAYPCEJHSYPQXKEBKZRGCZISCTVAQJGOPRKDGBXDXHOTUGUSMDLEOKFHYDAKKVLSFXHIDNQTONRAQZFWJVYQLOHXBMVJGJQINMTNCTZQDXFLQYWLKIOVSFTTNCAVSBLMTNHAZLPKWIRCBADRDNZCHEEWVEGYBRGUHDHRMQCQNTRZNUYWAWJWEMUSOVEOFVKRIBPXKSAUJ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.613554103504);
    msg.setSource(29499U);
    msg.setSourceEntity(243U);
    msg.setDestination(18763U);
    msg.setDestinationEntity(46U);
    msg.name.assign("LVJOZXCTUHQQGUMURGOWGOYHBIJMGNLLOTQATDBFRVMQYKUFDOHNIT");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SaveEntityParameters msg;
    msg.setTimeStamp(0.276063076572);
    msg.setSource(2991U);
    msg.setSourceEntity(91U);
    msg.setDestination(30506U);
    msg.setDestinationEntity(71U);
    msg.name.assign("CEYFKVYKKCKHNJMEUXDTJNCJZVWOFLJXXDOHSRYBAVCPSIMTKPTJRCHWMHEHFQHEIVGDBDIRWFGVGZPIYGWGYVQPOXQZJONSWUBEKDLJIMFYFNXAGTMSMHRAQPCLOBNVBWGZMLNHLQZSTWXIKUYANEKCIJZXUGLAIPATSMDULUCCNZIRMSBBAQMBXDSZDLHYUXRBQUVZPFTYOAEALDEWZRITSPSOPEHOUTWUFRWNKBRORV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SaveEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.765175908273);
    msg.setSource(52969U);
    msg.setSourceEntity(212U);
    msg.setDestination(41178U);
    msg.setDestinationEntity(4U);
    msg.timeout = 3009127095U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.327596851278);
    msg.setSource(64288U);
    msg.setSourceEntity(224U);
    msg.setDestination(22708U);
    msg.setDestinationEntity(130U);
    msg.timeout = 3746429570U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CreateSession msg;
    msg.setTimeStamp(0.455232466268);
    msg.setSource(34086U);
    msg.setSourceEntity(133U);
    msg.setDestination(7015U);
    msg.setDestinationEntity(181U);
    msg.timeout = 2942808996U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CreateSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.197372868935);
    msg.setSource(12551U);
    msg.setSourceEntity(135U);
    msg.setDestination(53191U);
    msg.setDestinationEntity(15U);
    msg.sessid = 3640269980U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.316775170667);
    msg.setSource(46338U);
    msg.setSourceEntity(225U);
    msg.setDestination(57676U);
    msg.setDestinationEntity(57U);
    msg.sessid = 2169939519U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::CloseSession msg;
    msg.setTimeStamp(0.0493543342951);
    msg.setSource(15178U);
    msg.setSourceEntity(1U);
    msg.setDestination(3328U);
    msg.setDestinationEntity(112U);
    msg.sessid = 2537199282U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("CloseSession #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.37853722739);
    msg.setSource(34269U);
    msg.setSourceEntity(191U);
    msg.setDestination(19742U);
    msg.setDestinationEntity(90U);
    msg.sessid = 2023700439U;
    msg.messages.assign("LGNIZETURNRBZDWUOXHAPHKFORLHCHJETNSBDSPSNUTRHMGXURVIMUPVTEWQBZHFTYQTWPZQECOMCFKHAASBXTNTGUPSRWYQDPLJUFSODDDXZSXAVEKOILGTNJCRFLSLYBMPJSEIWHHFCWRFICXNYYEJFCKFWMWCDMQMYNTWGYDVAMLGCBIJLKKYXZOBDEAJLDPMWKSQNXGZGAVNPH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.0800542581619);
    msg.setSource(3052U);
    msg.setSourceEntity(15U);
    msg.setDestination(4926U);
    msg.setDestinationEntity(223U);
    msg.sessid = 3162968915U;
    msg.messages.assign("MLRFKYCEIZTUVTDNYBJCAFTQQOEFCLCGJRCPAVWLISGXKZSIVJVESROKOPCCSWGYRDUKGSQJNXNDAKBYPGHQTWYGQHWMJQBOHJOZXYQIPNMHIAAEPEDNBZRLNAFYLXPEASPTZWXIBRDUKZFMJNMWFFYKNUIZJKIVYCRHQJLZDSPFS");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionSubscription msg;
    msg.setTimeStamp(0.566623103019);
    msg.setSource(16749U);
    msg.setSourceEntity(238U);
    msg.setDestination(15908U);
    msg.setDestinationEntity(67U);
    msg.sessid = 3875640339U;
    msg.messages.assign("VFAWBGQIIZUMCPEFWLIPDBEYAAKPVNDLUBXQINTERPUPHTOZITQLYGKDOJJXEHXUSTLQGYOOVOSBMCYKWUCMWHMDNMRCVMUTGXFKOZHNTSIYFVQYVVCHNSMJZNWQRAMPMGERUE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionSubscription #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.0501114474721);
    msg.setSource(49722U);
    msg.setSourceEntity(21U);
    msg.setDestination(54768U);
    msg.setDestinationEntity(137U);
    msg.sessid = 2140346015U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.15785026689);
    msg.setSource(50230U);
    msg.setSourceEntity(132U);
    msg.setDestination(4275U);
    msg.setDestinationEntity(180U);
    msg.sessid = 3020861050U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionKeepAlive msg;
    msg.setTimeStamp(0.576859027912);
    msg.setSource(20577U);
    msg.setSourceEntity(143U);
    msg.setDestination(37908U);
    msg.setDestinationEntity(214U);
    msg.sessid = 234684089U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionKeepAlive #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.0473392686398);
    msg.setSource(23249U);
    msg.setSourceEntity(77U);
    msg.setDestination(39734U);
    msg.setDestinationEntity(111U);
    msg.sessid = 3209599511U;
    msg.status = 216U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.434105614914);
    msg.setSource(59025U);
    msg.setSourceEntity(2U);
    msg.setDestination(26243U);
    msg.setDestinationEntity(183U);
    msg.sessid = 3643303824U;
    msg.status = 26U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SessionStatus msg;
    msg.setTimeStamp(0.911604161746);
    msg.setSource(19034U);
    msg.setSourceEntity(93U);
    msg.setDestination(56946U);
    msg.setDestinationEntity(128U);
    msg.sessid = 3843990675U;
    msg.status = 31U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SessionStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.22133860901);
    msg.setSource(63495U);
    msg.setSourceEntity(130U);
    msg.setDestination(62402U);
    msg.setDestinationEntity(142U);
    msg.name.assign("CDXKJLGEMSZGAGOIAZKRHTHHCYAAYHY");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.742170956629);
    msg.setSource(11571U);
    msg.setSourceEntity(146U);
    msg.setDestination(65199U);
    msg.setDestinationEntity(34U);
    msg.name.assign("BYJQIKPHZTOTLPQOXWMOVCEPWRITZONTTAKXVYAEPNEDOIIGRWDANHHGVVGZRUQJFHXBNAMMDKXDRLCCGTBUUXUDKMGYDGAJJABJBHZEINQWIMENSSCSIHFZEWPB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PushEntityParameters msg;
    msg.setTimeStamp(0.599564677036);
    msg.setSource(7003U);
    msg.setSourceEntity(173U);
    msg.setDestination(21798U);
    msg.setDestinationEntity(63U);
    msg.name.assign("ELSCSYFAMWXVXBELMCNJRFAQCUGVMKZVPPTQVRZNYBMXKBFCZFFWHROCWIPUVSGVHBBQLCFRIAQQLOWLBVOTEPFTUBTKONRKIPMAJGYMZIDJUCOHEIPSANXSUDMLSRSXCWXEQNUBDHAIWQNGOYODKUIMHCWDEJRVPJGGZGPBUUDRGFKFJVRSZLYL");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PushEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.813183722038);
    msg.setSource(38954U);
    msg.setSourceEntity(244U);
    msg.setDestination(57523U);
    msg.setDestinationEntity(207U);
    msg.name.assign("KSFHEFNOWCUJDCDJMJHATTNXLQBZGOQZAIESKCEGJPWEVUMPQVPXIDGFFHHCMUNNISSLKFLXAIXRRKFNQOIXRIKADRW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.771033871918);
    msg.setSource(40388U);
    msg.setSourceEntity(58U);
    msg.setDestination(40891U);
    msg.setDestinationEntity(90U);
    msg.name.assign("HMEUHLMROHOIZZGAMMKSUVPWQUOBAVKDBSZGOZSBBAEQRUCICPHMVTOSCLTJKWGEYBPRBLLAYYXZXQCFQDEGQUIWNNKIBFLTGTCKMTUKJTXTORN");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::PopEntityParameters msg;
    msg.setTimeStamp(0.37769326219);
    msg.setSource(23614U);
    msg.setSourceEntity(19U);
    msg.setDestination(57778U);
    msg.setDestinationEntity(127U);
    msg.name.assign("LVSPWRAPIGQDUKBZ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("PopEntityParameters #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.688028929372);
    msg.setSource(48964U);
    msg.setSourceEntity(148U);
    msg.setDestination(60661U);
    msg.setDestinationEntity(176U);
    msg.type = 185U;
    msg.error.assign("QBVOROYDCLKLUWLLSGXRTTKXJZTZFIHUDFFCAGXXONQTVYPEEAUCMUWSJHZIPYJNEBKACBHPTCKZJGAIRRQCIVEFLFWXYDDSFBJOODNESVABNLYDMYVMWMRKFYSNMUGNVHJVJEYKVDHITZHLONUZXGXGQTKXWAZFBQZNELIYPNRSGJEUMKMTLJARZPBKWQENMQIDHRLURCFSIKSDIPUFCROXC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.583386290016);
    msg.setSource(63941U);
    msg.setSourceEntity(242U);
    msg.setDestination(22644U);
    msg.setDestinationEntity(75U);
    msg.type = 44U;
    msg.error.assign("DCEEFGFXJHWJXXRZGATAPSOODBUVGHGNOSDHKCZKKDPNBNCEEYRXXPYFQXXETDUMRSHXKTMUJHCLEFKMIBUFVRB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::IoEvent msg;
    msg.setTimeStamp(0.390850581329);
    msg.setSource(17934U);
    msg.setSourceEntity(183U);
    msg.setDestination(7504U);
    msg.setDestinationEntity(205U);
    msg.type = 205U;
    msg.error.assign("NKNBYIYCHGOLTSQBFPGDYVCQCVXZNHSKWTEQEWEXPOLUWRFAWTWCELEMQOETMIAZBNDLDHCOWFAKHNRTCZRSUDZFRGDKFWTLNULTJGQCAWEOZSVHVMFLKKXUASPHNKQKVBYHWJGPJXDEAKPRZWACHDPOIJKSGULIVSBYVBBEXDIMFICOJMMXLYNJXNJVVZZYUXOZJG");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("IoEvent #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.395478633634);
    msg.setSource(63180U);
    msg.setSourceEntity(111U);
    msg.setDestination(47101U);
    msg.setDestinationEntity(6U);
    msg.seq = 46542U;
    msg.sys_dst.assign("HBAPMQSJBYXUMWQSXGKPQMKKXTVNCROHGUFIYPUKGFELTZIZDFVRENPRYLPM");
    msg.flags = 37U;
    const char tmp_msg_0[] = {-41, -73, -27, -44, -17, 6, 88, -22, -57, -63, -44, -16, 109, 66, 26, -14, -71, 89, -102, 91, -61, 65, 34, 102, -112, 64, 124, -96, 7, -81, -71, -84, -53, -44, -56, -45, -88, 82, -28, 40, 101, -99, -119, -25, 40, 51, -23, -72, 48, -23, -79, -94, 66, 92, -47, 80, 45, -38, -126, 55, -14, 38, 100, 16, -24, 53, -9, -109, -28, -38, -14, -113, 33, 107, -23, -4, 107, -78, -121, -102, -5, 77, -83, 20, -34, -21, -72};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.976465253398);
    msg.setSource(18153U);
    msg.setSourceEntity(186U);
    msg.setDestination(10853U);
    msg.setDestinationEntity(233U);
    msg.seq = 4129U;
    msg.sys_dst.assign("EXLXWTSNNXXGJOPTWYELZSNNDSKHPCHYQFREPGCCRAUVGITWFYSIUXMKJHQJIOBCRFULABEWVQKMZVHZLWRDBLAZHOJAENBLGVSVLIGLRCVCOZSQKPHSITQEBHSNWILNMJSZLGMQCRRYFKTXJTUARPPGQFQOFBAUBMBDOOKCADZYA");
    msg.flags = 22U;
    const char tmp_msg_0[] = {-121, 77, -126, 84, 42, 121, -110, 87, 58, -117, 16, 23, 17, 29, -11, -48, -32, 51, -73, 106, 50, 119, -30, -94, -97, 63, 46, 121, -39, 94, -46, 13, 23, 41, -125, 90, 125, 84, -109, -108, 113, -107, 90, 0, 8, 125, 103, -60, 107, 101, 124, 112, -2, -118, 78, 100, -35, 65, -54, 72, -77, -98, 68, 114, 64, -59, -36, -44, -36, -88, -9, 51, -28, 22, -77, 1, 34, -73, -24, -20, 104, 13, -115, 54, -123, 124, 22, -39, 113, 38, -82, -59, 16, -115, 40, 92, 70, 115, -98, 94, -81, -37, -43, -95, -124, -103, -94, 56, 75, -37, 54, -113, -55, 92, 3, 10, -101, 79, -117, -73, -36, -53, 122, -52, 117, 26, -58, 92, -70, -108, 36, -81, 95, 46, 88, -28, -89, -119, 6, -31, 83, 89, 9, -36, 81, -89, 37, 47, -46, -23, 64, -103, -23, 19, 120, 30, -33, -118, 55, -56, -79, -50, 117, 66, -100, 38, -25, 37, 100, 31, -106, 36, -117, 37, -112, 89, 124, 31, 83, 32, -82, -97, 55, 50, 89, 33};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxFrame msg;
    msg.setTimeStamp(0.0943740860486);
    msg.setSource(44589U);
    msg.setSourceEntity(231U);
    msg.setDestination(62831U);
    msg.setDestinationEntity(227U);
    msg.seq = 52404U;
    msg.sys_dst.assign("OMBJRWICXLTKHTRKHNEFBKQNCLNPGZDEMNWLLYLTMJRBHRKGYKSJZVCYJKXFUVXXCDSAKZNVSQTZTTMVEGSPFMEABMPUDXWGCQNQYPYIWIS");
    msg.flags = 52U;
    const char tmp_msg_0[] = {47, 42, -78, -37, 126, 54, -91, -67, -65, -68, -88, 78, 107, -75, 26, 8, -64, -40, -111, 5, -9, -125, -16, -70, 41, -40, -100, -115, -19, -59, 66, 113, -13, 2, -98, 92, -17, 25, 115, 114, -90, 95, 3, 54, 9, -103, -44, -96, 22, 109, 48, -29, 7, -108, 70};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.115761491277);
    msg.setSource(56780U);
    msg.setSourceEntity(83U);
    msg.setDestination(25837U);
    msg.setDestinationEntity(185U);
    msg.sys_src.assign("OTRLXJWPVJUIHGOPFZWCHSKWNFMKFHUZHKURYZRZFMOLNLJSNKDDEOIRDZYXTERMUEIKGYAQYLITPBCJNEMVNJXVZUTKIOSWWYQHVIYKYLWZRVAMBTCRQWHTGHAUHREBTSQLTPYUW");
    msg.sys_dst.assign("MCSLUCOKXWIFPSFOTYWVUAWNJWIQBMWLXXDAEGQEZNLOYKRHOBHNCDTBNVXOSNLRQFRDLRJE");
    msg.flags = 126U;
    const char tmp_msg_0[] = {36, 106, -48, -19, 90, 16, 32, 63, 59, 21, 95, 118, -125, -22, -25, -63, -43, 124, 101, -51, 46, -110, -29, 112, -62, 115, -3, -106, 67, -45, -87, -92, -31, 118, 98, -114, -113, 116, -52, -31, -76, -51, -85, -31, -88, 121, 25, -119, 6, 25, 95, -124, -26, -29, -17, 50, -62, 1, 43, 5, 53, 54, -110, -118, 72, -78, -5, 68, -121, -103, -121, -117, -1, 61, -41, -88, 36, -106, -63, -69, -82, -79, -28, 60, 50, 120, -119, 111, 91, -102, -16, 14, 4, 79, -56, 84, 45, -104, -7, 21, -109, -4, -121, -86, 16, -74, -110, -7, 29, -48, -85, -112, -60};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.77577767647);
    msg.setSource(40824U);
    msg.setSourceEntity(236U);
    msg.setDestination(52810U);
    msg.setDestinationEntity(210U);
    msg.sys_src.assign("XFGGYVEZZACPTQCSSZHMQZFTOJOHEQKKRRKEYIWOAEIKAXYWFVPODAAUJDCHSMSCWNOGFXRWPYHZKUBNWCMINOTUAKMKTSEXASNXVPNEPIIPGOBXTZPDRTAMQAJBEVKRPGJOLQEHVNFBBCLUHQNLMUHWFDVISQLRMQBLGMIWJKAXSLMYTCLBWJLRPEIVXQNJVDRSGGITXMBOFRB");
    msg.sys_dst.assign("EATTMODRRGKXBTDQLOYOAFLVEJVDKOJNZJSJCNXWRMVAJYCZMQHRZZGHISEYCXSSBGGXVTBXVCIFOXRIWYGKMWFCVMEXMHKUOVILNFWDFHPHPDCLVUFRAVBPYKJZCPJYZJSGEOHWWSITEDNSBZADAIMTLEUHNFWEYKDQGTRUGQPANQQDNPYSSXC");
    msg.flags = 120U;
    const char tmp_msg_0[] = {45, 89, -63, -2, 35, 69, -94, -8, -59, -33, 4, -96, 34, 124, 105, -109, 1, 35, 76, -43, 108, 85, 1, -93, 42, -95, 59, -87, 81, 17, -73, 65, 20, -88, -42, 32, -97, -13, 39, -102, -76, -42, -126, -8, -85, 88, 37, -22, -16, 81, -25, 42, 41, 103, 25, -1, 88, -67, -128, 64, 37, -26, -64, -36, -21, -64, -74, -16, -67, -58, 88, -20, 72, 26, -62, -123, 117, -44, -59, -80, 104, 60, 54, 54, -75, -74, 115, 101, 15, -69, -43, 66, 46, 38, -39, 38, 49, -44, 50, 63, -14, -6, 79, 40, -78, -38, -21, -69, 111, -78, 14, 68, -17, -69, -8, -90, 21, -49, -10, -106, 10, 31, 94, -52, -63, -101, 33, -110, -102, -103, 43, -82, -118, -59, 55};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxFrame msg;
    msg.setTimeStamp(0.0312039031141);
    msg.setSource(4840U);
    msg.setSourceEntity(238U);
    msg.setDestination(14596U);
    msg.setDestinationEntity(75U);
    msg.sys_src.assign("EAYDGFVODTYWMOWYDZJBYHALRHYSCJQQCZRXTLXCOIFSMGHHKPDFOZXPKNBLEGQJFWINBZBLJYMEKBGNOUXQVSNGCKTQXUODNVAMFLHTQJPCIHIEWKQFVDWBSUERAUXHHIAFYDMKDWTNYZZKMUGZEVNQLICMTJKOPCYBFJERXMSRRRVFCNOCLATNWIRYDWBBGHNALCXVRALXQIOSTVLZWGPPIXVGQF");
    msg.sys_dst.assign("HAKWZQRQBX");
    msg.flags = 249U;
    const char tmp_msg_0[] = {-124, 37, 89, 75, 77, 71, 42, 54, 108, -60, -85, 110, -59, -77, 8, -50, -9, -90, 82, 16, 25, 124, -117, -126, 117, -109, 89, -60, -30, -22, 19, 97, -46, 96, 69, 69, -34, 115, 42, -23, 111, -109, -95, -112, 43, -91, 85, -53, -90, -75, -13, -19, -107, 113, 73, -125, 102, 6, -102, -63, 71, -77, 85, 120, -53, -2, -77, 31, 34, 37, -87, 82, 84, -77, 123, 63, 82, -51, 44, 59, 56, -25, 120, 37, -88, 103, 108, -25, -102, 125, 60, -116, -49, -122, 36, 8, 64, -89, -88, -71, 58, 14, -113, 81, 3, 80, -41, 95, -113, 71, -29, -14, -98, -117, 70, 7, 123, 64, -18, 44, 91, -54, 83, 2, 105, -106, 23, -50, -23, -71, 75, 74, -12, -83, -51, -58, 117, -112, -125, 7, 30, 77, -29, 77, -67, 102, 97, -42, -93, 47, -60, -114, 80, 97, -72, 2, 86, -75, -109, 54, -43, 115, 116, -62, 84, -70, 73, -83, -88, 54, -73, 107, -31, -23, -119, -30, 92, -67, -20, 122, -112, -9, 14, 64, -31, -45, 47, -37, -30, -45, -59, -93, -109, 7, 75, 80, 72, -27, 113, 53, -61, 38, 11, -38, 41, -53, 0, -89, -103, -120, -60, 12, 85, -65, 14, -49, -118, -86, 99, 1, -110, 93, -4, -31, -2, -119, 46, -83, 58, -29, -13, -96, -8, 104, -85};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxFrame #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.25520120093);
    msg.setSource(32915U);
    msg.setSourceEntity(23U);
    msg.setDestination(51038U);
    msg.setDestinationEntity(159U);
    msg.seq = 60536U;
    msg.value = 216U;
    msg.error.assign("FNUCZAQBAMHCHOJUVIULGGMRWASRGVBFBYUUJTUJAYKNOLTWDZNRTEFQCGLBNYTFWZYXSNMEFIPEXFZTJDKVDRJWUFIKDMCPKVHOWKNEOZHNOGLPANZVUVJBSIKCASYJOQCELQQJUPSQLRLAKBRVBKDMLMJZSIEYGYAIATYSSGGWDZEHEPXEXNYHCKTSBAVWOQXXOIXITCMGDKXQDBFHGWPUMW");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.734098822185);
    msg.setSource(15209U);
    msg.setSourceEntity(125U);
    msg.setDestination(61289U);
    msg.setDestinationEntity(190U);
    msg.seq = 3587U;
    msg.value = 181U;
    msg.error.assign("BMYWJFUJSREPIDJXPWBKJGVHSYVVBAXJKZXKCVLWEAZPANLTUFMROWVKFLRECACAIFJGHMJLMQSRGRLQMSYJIKKIZOFXFWQIBTYRISRCWYOUBGNHAVXXMZSKJTWPFNDDLETCBFVQIKHWXONZIGGUDVYPQIDSUEO");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamTxStatus msg;
    msg.setTimeStamp(0.80201123107);
    msg.setSource(19731U);
    msg.setSourceEntity(18U);
    msg.setDestination(16323U);
    msg.setDestinationEntity(53U);
    msg.seq = 49526U;
    msg.value = 169U;
    msg.error.assign("OQUSXPEIAWYIODKPSRNGHPRKLYOKYOWILEZXNTNIMTEUOJCAYFVESMESBDVPLOHBQYVZVZMBNKQUPKQCEXHKSSWROSMKUZJSQTGNTEADRZWGFWBKBHLFQORIGDUMJSJDJRJUWBHXLUAWRYTIUNWEFTAWZIZCCANLEZLBMHD");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamTxStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.361254952652);
    msg.setSource(29418U);
    msg.setSourceEntity(60U);
    msg.setDestination(14307U);
    msg.setDestinationEntity(101U);
    msg.seq = 31146U;
    msg.sys.assign("GITIVXQCPYYSSWTBTNLKWMRHEPNQTGRKLBFXYEDDZJPVFKFCRISAVHEWKEKMSOPUGQAWEJJUEIVHCFYENMKOCBRHSFHKWRBXHOQETYVHIUIRZTJQXXDAAXAONMQCJMUWTFZQLWPGGZENRLQVCZUVLYDTHHJXRRLUTXWYJOGBGJYSRBIBDBLSFDXBUUI");
    msg.value = 0.475200682274;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.0632564077635);
    msg.setSource(15032U);
    msg.setSourceEntity(53U);
    msg.setDestination(28049U);
    msg.setDestinationEntity(30U);
    msg.seq = 11108U;
    msg.sys.assign("HNVZUWZIVNHSHGDPJMENLHOOOTCCRKBSXFXYIHLOPVXENMFWWJKAATTUSFWPBJMRVMPPLYQFXWDPFOLBHQMDFXUUHPCDJUZCGKORXKWJGCSNBUIDJYSFBYQQWYBOXWISPNEUJNNHUATREEAALZGVLTHVFYEWZSSYYYGXFGDTDGOIEEKNXXIKCLLHSGILISBTJBLREBGRRZFRA");
    msg.value = 0.675179741298;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UamRxRange msg;
    msg.setTimeStamp(0.35633483835);
    msg.setSource(20967U);
    msg.setSourceEntity(170U);
    msg.setDestination(30552U);
    msg.setDestinationEntity(217U);
    msg.seq = 49962U;
    msg.sys.assign("CIDQZOIHJVVLPPRMQSSZGYCQHYNUBWCFIDPYWJEOWQULFAYOEASDWRMAGMZYAFWRGXOMIWYLFZYQVKJYGBWQNJTJBZZLVMVTCAUVTRKJWAQBKGKXGZLAUETMFAFSCHSHYOTQRBNBICFCXFS");
    msg.value = 0.134874020953;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UamRxRange #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.777684332731);
    msg.setSource(25659U);
    msg.setSourceEntity(222U);
    msg.setDestination(40615U);
    msg.setDestinationEntity(236U);
    msg.action = 21U;
    msg.longain = 0.333135356849;
    msg.latgain = 0.271123716275;
    msg.bondthick = 3708655877U;
    msg.leadgain = 0.703228949011;
    msg.deconflgain = 0.895113950432;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.346878731555);
    msg.setSource(5944U);
    msg.setSourceEntity(215U);
    msg.setDestination(32076U);
    msg.setDestinationEntity(189U);
    msg.action = 56U;
    msg.longain = 0.058969722674;
    msg.latgain = 0.77991775603;
    msg.bondthick = 510247651U;
    msg.leadgain = 0.0628832224593;
    msg.deconflgain = 0.176022906764;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormCtrlParam msg;
    msg.setTimeStamp(0.862457356411);
    msg.setSource(311U);
    msg.setSourceEntity(84U);
    msg.setDestination(43971U);
    msg.setDestinationEntity(79U);
    msg.action = 177U;
    msg.longain = 0.0200976651897;
    msg.latgain = 0.870244277686;
    msg.bondthick = 4290759735U;
    msg.leadgain = 0.536026597498;
    msg.deconflgain = 0.288183921587;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormCtrlParam #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.215106191346);
    msg.setSource(24368U);
    msg.setSourceEntity(175U);
    msg.setDestination(57788U);
    msg.setDestinationEntity(140U);
    msg.err_mean = 0.218821349451;
    msg.dist_min_abs = 0.516627076421;
    msg.dist_min_mean = 0.0248327582316;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.251987082813);
    msg.setSource(48809U);
    msg.setSourceEntity(119U);
    msg.setDestination(46331U);
    msg.setDestinationEntity(11U);
    msg.err_mean = 0.858698825951;
    msg.dist_min_abs = 0.852652887468;
    msg.dist_min_mean = 0.449690006102;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEval msg;
    msg.setTimeStamp(0.805931578732);
    msg.setSource(34530U);
    msg.setSourceEntity(67U);
    msg.setDestination(7502U);
    msg.setDestinationEntity(144U);
    msg.err_mean = 0.684475820638;
    msg.dist_min_abs = 0.864289660127;
    msg.dist_min_mean = 0.375270520699;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEval #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.537834945328);
    msg.setSource(1673U);
    msg.setSourceEntity(25U);
    msg.setDestination(25362U);
    msg.setDestinationEntity(178U);
    msg.action = 36U;
    msg.lon_gain = 0.0360198983897;
    msg.lat_gain = 0.243045377188;
    msg.bond_thick = 0.798897874563;
    msg.lead_gain = 0.222385997652;
    msg.deconfl_gain = 0.617029841511;
    msg.accel_switch_gain = 0.913411008377;
    msg.safe_dist = 0.847315867237;
    msg.deconflict_offset = 0.51915061531;
    msg.accel_safe_margin = 0.711772401232;
    msg.accel_lim_x = 0.304418935561;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.0098463758528);
    msg.setSource(42501U);
    msg.setSourceEntity(128U);
    msg.setDestination(5643U);
    msg.setDestinationEntity(108U);
    msg.action = 231U;
    msg.lon_gain = 0.0112268424699;
    msg.lat_gain = 0.727091412951;
    msg.bond_thick = 0.639558829481;
    msg.lead_gain = 0.644860776385;
    msg.deconfl_gain = 0.880802905879;
    msg.accel_switch_gain = 0.301753773948;
    msg.safe_dist = 0.700304692544;
    msg.deconflict_offset = 0.905500548487;
    msg.accel_safe_margin = 0.224700770791;
    msg.accel_lim_x = 0.130497796493;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationControlParams msg;
    msg.setTimeStamp(0.181329160533);
    msg.setSource(998U);
    msg.setSourceEntity(246U);
    msg.setDestination(7252U);
    msg.setDestinationEntity(111U);
    msg.action = 163U;
    msg.lon_gain = 0.09975530931;
    msg.lat_gain = 0.478022262512;
    msg.bond_thick = 0.498574933733;
    msg.lead_gain = 0.102290073248;
    msg.deconfl_gain = 0.417689622651;
    msg.accel_switch_gain = 0.581815742803;
    msg.safe_dist = 0.571585011349;
    msg.deconflict_offset = 0.803699675298;
    msg.accel_safe_margin = 0.918250859321;
    msg.accel_lim_x = 0.113447625426;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationControlParams #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.52886968936);
    msg.setSource(64823U);
    msg.setSourceEntity(130U);
    msg.setDestination(45084U);
    msg.setDestinationEntity(11U);
    msg.type = 7U;
    msg.op = 213U;
    msg.err_mean = 0.919746199521;
    msg.dist_min_abs = 0.305997575461;
    msg.dist_min_mean = 0.102033932478;
    msg.roll_rate_mean = 0.987684939226;
    msg.time = 0.472082343318;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 15U;
    tmp_msg_0.lon_gain = 0.141588212896;
    tmp_msg_0.lat_gain = 0.629469891899;
    tmp_msg_0.bond_thick = 0.659221869374;
    tmp_msg_0.lead_gain = 0.242645825336;
    tmp_msg_0.deconfl_gain = 0.655211972146;
    tmp_msg_0.accel_switch_gain = 0.41719481308;
    tmp_msg_0.safe_dist = 0.110302534483;
    tmp_msg_0.deconflict_offset = 0.881667155838;
    tmp_msg_0.accel_safe_margin = 0.132938886102;
    tmp_msg_0.accel_lim_x = 0.268758999797;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.134060787568);
    msg.setSource(10584U);
    msg.setSourceEntity(55U);
    msg.setDestination(22953U);
    msg.setDestinationEntity(94U);
    msg.type = 66U;
    msg.op = 68U;
    msg.err_mean = 0.786765628037;
    msg.dist_min_abs = 0.924290614309;
    msg.dist_min_mean = 0.366837879961;
    msg.roll_rate_mean = 0.586656288341;
    msg.time = 0.142432215787;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 209U;
    tmp_msg_0.lon_gain = 0.209765632842;
    tmp_msg_0.lat_gain = 0.740800172325;
    tmp_msg_0.bond_thick = 0.123954980597;
    tmp_msg_0.lead_gain = 0.19220144561;
    tmp_msg_0.deconfl_gain = 0.710690112495;
    tmp_msg_0.accel_switch_gain = 0.252255857292;
    tmp_msg_0.safe_dist = 0.734903814533;
    tmp_msg_0.deconflict_offset = 0.567906694191;
    tmp_msg_0.accel_safe_margin = 0.0419259365431;
    tmp_msg_0.accel_lim_x = 0.875235718494;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::FormationEvaluation msg;
    msg.setTimeStamp(0.90640716868);
    msg.setSource(51939U);
    msg.setSourceEntity(136U);
    msg.setDestination(54855U);
    msg.setDestinationEntity(232U);
    msg.type = 218U;
    msg.op = 234U;
    msg.err_mean = 0.104541281796;
    msg.dist_min_abs = 0.309555959963;
    msg.dist_min_mean = 0.935109731779;
    msg.roll_rate_mean = 0.472157823056;
    msg.time = 0.942811767225;
    IMC::FormationControlParams tmp_msg_0;
    tmp_msg_0.action = 36U;
    tmp_msg_0.lon_gain = 0.308239932365;
    tmp_msg_0.lat_gain = 0.406343465778;
    tmp_msg_0.bond_thick = 0.590008164485;
    tmp_msg_0.lead_gain = 0.192611683299;
    tmp_msg_0.deconfl_gain = 0.112449128319;
    tmp_msg_0.accel_switch_gain = 0.285628280044;
    tmp_msg_0.safe_dist = 0.0858563948914;
    tmp_msg_0.deconflict_offset = 0.220419363055;
    tmp_msg_0.accel_safe_margin = 0.152212432242;
    tmp_msg_0.accel_lim_x = 0.48816151367;
    msg.controlparams.set(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("FormationEvaluation #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.885421360857);
    msg.setSource(21190U);
    msg.setSourceEntity(47U);
    msg.setDestination(42188U);
    msg.setDestinationEntity(246U);
    msg.lat = 0.892773054604;
    msg.lon = 0.369845348339;
    msg.eta = 3706535852U;
    msg.duration = 57316U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.235414136232);
    msg.setSource(16660U);
    msg.setSourceEntity(240U);
    msg.setDestination(1910U);
    msg.setDestinationEntity(231U);
    msg.lat = 0.484196473316;
    msg.lon = 0.0556457380251;
    msg.eta = 2437919320U;
    msg.duration = 32529U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiWaypoint msg;
    msg.setTimeStamp(0.87960934301);
    msg.setSource(49492U);
    msg.setSourceEntity(30U);
    msg.setDestination(17504U);
    msg.setDestinationEntity(33U);
    msg.lat = 0.626906393731;
    msg.lon = 0.0957936823572;
    msg.eta = 2176804468U;
    msg.duration = 64060U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiWaypoint #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.838898085179);
    msg.setSource(12991U);
    msg.setSourceEntity(177U);
    msg.setDestination(53820U);
    msg.setDestinationEntity(194U);
    msg.plan_id = 52979U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.393877929276);
    msg.setSource(13163U);
    msg.setSourceEntity(139U);
    msg.setDestination(20413U);
    msg.setDestinationEntity(110U);
    msg.plan_id = 26998U;
    IMC::SoiWaypoint tmp_msg_0;
    tmp_msg_0.lat = 0.433259462833;
    tmp_msg_0.lon = 0.732372934872;
    tmp_msg_0.eta = 3756362368U;
    tmp_msg_0.duration = 49569U;
    msg.waypoints.push_back(tmp_msg_0);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiPlan msg;
    msg.setTimeStamp(0.779830404286);
    msg.setSource(41778U);
    msg.setSourceEntity(212U);
    msg.setDestination(55049U);
    msg.setDestinationEntity(118U);
    msg.plan_id = 1147U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiPlan #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.567825520735);
    msg.setSource(17861U);
    msg.setSourceEntity(144U);
    msg.setDestination(18687U);
    msg.setDestinationEntity(219U);
    msg.type = 143U;
    msg.command = 32U;
    msg.settings.assign("RZVMRSZBZMYRMWQBKEXJRIODVFUXTOUJDLVBVWFFZZXGYOIGZCXPLCPAYIHEKQUHIEE");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 27202U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.828551621771;
    tmp_tmp_msg_0_0.lon = 0.237639549681;
    tmp_tmp_msg_0_0.eta = 3917952287U;
    tmp_tmp_msg_0_0.duration = 58515U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TBJUHMCQITLISBHQTKGOZYSPGCJHRQQVSOELSLYPXJJDAWZHRDWOWEUGQNYSBTNWZHKOTAZNXYFXILNHBIYBCIXXZKYAIRHUTMNRCFAYODWFAEOPVBTFFJJGZPKVTWDODFJYOCACWXINDAAJVSKPESFQBVYOKESFRPMRFZGDXNQFSLEKNBGCEAKHGDBUUMEDUMNYBMDGWIPQQISEPE");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.765192589687);
    msg.setSource(10856U);
    msg.setSourceEntity(49U);
    msg.setDestination(50853U);
    msg.setDestinationEntity(140U);
    msg.type = 155U;
    msg.command = 172U;
    msg.settings.assign("TFLQUTBQOSMBMVTOSHUNIOJZAEESKWSSAPEPYXVCXIQMLAFWKWMIHFIGAGJKAJGFVXUUKVIVUOGNFDVSPCNQDJEFTNHBFPYYDIPLAZHZPPXZNYCWMMWBLFLDQGGUUVNJMIJRJDJQTXSTOQLROBAMYMIDGZRTCCTCYYKEETCDRHPBWHUANUOBLZYVNXZEFHOZCXIGQRRHSKOGBLNDQEWVABCGZXWUJKRPRAKPNEWFEODJWKCTLXIKYRZLSHBRX");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 40960U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.804832887438;
    tmp_tmp_msg_0_0.lon = 0.315749122357;
    tmp_tmp_msg_0_0.eta = 778441123U;
    tmp_tmp_msg_0_0.duration = 36921U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("WFEFGDHGACQCNUOTIITCYFHSRUJQWKXTHNRFUSLAIMQSDETRPIAPJXACAIEZCTPJXHGZCXTVOSKMILZHOVUPFXURCLWKUOJKPQDMOKIXABZHGGAYOXDLSHNOPFVVTNC");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiCommand msg;
    msg.setTimeStamp(0.951375732011);
    msg.setSource(13448U);
    msg.setSourceEntity(32U);
    msg.setDestination(41273U);
    msg.setDestinationEntity(118U);
    msg.type = 147U;
    msg.command = 135U;
    msg.settings.assign("TUQPOPZNVDJAARZTJIAGDMTMCHTPJTMLXWBBUBGWBEPDVSAAKTYNGHXDUHNHZINSZUXYIETEKTVSOZMQXHNELERZEQCCVCPOIITCEXGKLQXJJCUNLURHKROLBCFIIZSOFXWTKFEKMWUKFJOUSNMLHQHYDFYJOKKAOPOSGLSMNYUJW");
    IMC::SoiPlan tmp_msg_0;
    tmp_msg_0.plan_id = 5621U;
    IMC::SoiWaypoint tmp_tmp_msg_0_0;
    tmp_tmp_msg_0_0.lat = 0.121126104374;
    tmp_tmp_msg_0_0.lon = 0.951971368688;
    tmp_tmp_msg_0_0.eta = 3726453053U;
    tmp_tmp_msg_0_0.duration = 62490U;
    tmp_msg_0.waypoints.push_back(tmp_tmp_msg_0_0);
    msg.plan.set(tmp_msg_0);
    msg.info.assign("TIUYEOQYNRKJGKTYVPTZENTPGBPKLAVRWQCJOJRZSXMEIHCNUJLWSYKFQZLPPMWYTHXEARZWZCGHHSDFZDLHOIPCMWVOZDEMGGQBWUUTNJKISXAASMHODKSPNRGBYFIVQKAKGBGNHRAXCKXSOJVLTSHMOJNUCLDACQUEFB");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiCommand #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.351454434977);
    msg.setSource(8329U);
    msg.setSourceEntity(34U);
    msg.setDestination(40797U);
    msg.setDestinationEntity(190U);
    msg.state = 87U;
    msg.plan_id = 16680U;
    msg.wpt_id = 215U;
    msg.settings_chk = 28687U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.845057907687);
    msg.setSource(27124U);
    msg.setSourceEntity(248U);
    msg.setDestination(45371U);
    msg.setDestinationEntity(90U);
    msg.state = 47U;
    msg.plan_id = 20935U;
    msg.wpt_id = 110U;
    msg.settings_chk = 11628U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SoiState msg;
    msg.setTimeStamp(0.492734118098);
    msg.setSource(4310U);
    msg.setSourceEntity(79U);
    msg.setDestination(18352U);
    msg.setDestinationEntity(2U);
    msg.state = 5U;
    msg.plan_id = 1720U;
    msg.wpt_id = 126U;
    msg.settings_chk = 42869U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SoiState #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.4669904491);
    msg.setSource(26704U);
    msg.setSourceEntity(29U);
    msg.setDestination(58055U);
    msg.setDestinationEntity(86U);
    msg.uid = 40U;
    msg.frag_number = 46U;
    msg.num_frags = 168U;
    const char tmp_msg_0[] = {-64, 108, -4, 30, 86, -55, 62, 112, -48, 118, -36, 30, 69, 77, 60, -107, 9, 102, 93, 53, 4, 120, 80, -87, 123, -119, 83, -52, 18, -28, -112, 29, 37, 49, -72, -49, 80, -125, -38, 55, -65, -110, -84, -26, 49, 95, 71, 62, 122, 92, 58, -28, -70, 81, -117, -55, -39, -99, -64, 9, 114, -32, 67, -14, -24, -123, -18, -25, -4, -45, 69, -42, 123, 53, -106, 98, 107, 122, -107, -47, -18, -1, 18, 60, -24, 3, 58, -117, 79, -59, 42, 79, -96, 71, -116, 81, -35, -115, -34, 122, 49, -64, 85, -127, -73, 60, -75, -27, 72, -85, -39, 36, -9, 23, 48, -40, 58, -21, 61, 56, -60, -106, -9, 36, -55, -82, 28, -1, -47, 72, -97, -54, -32, 45, 24, -91, -2, 21, -29, -76, 31, 77, -115, -126, 1, 112, -35, 125, -120, -42, -45, 11, -46, 123, 102, 78, -32, 42, -39, -123, -76, 43, -93, -93, -98, -61, 11, 125, 30, -21, 80, 35, -58, -43, -76, -95, 80, -38, 98, -108, -46, 71, -96, 116, -95, -81, -44, -49, 102, 41, -25, 16, -41, 2, -28, 27, -42, 106, 60, -78, -27, 2, -6, 96, 15, 55, 51, 46, -123, -85, 96, -19, 88, 19, -8, 9, -46, 49, 62, 88, 27, -9, 104, 104};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.226983667224);
    msg.setSource(11961U);
    msg.setSourceEntity(158U);
    msg.setDestination(2986U);
    msg.setDestinationEntity(134U);
    msg.uid = 10U;
    msg.frag_number = 54U;
    msg.num_frags = 204U;
    const char tmp_msg_0[] = {-94, 110, -86, 89, 102, -52, 55, -30, 59, -70, -6, -48, 2, 68, -67, 25, -66, 51, 24, 105, 88, 68, -76, -59, -70, -83, 40, 52, 54, -76, 37, 95, -18, -95, -33, 113, -21, -51, 12, -86, -28, 102, 99, 51, 64, 82, -79, -85, -8, -78, -2, -126, -9, -89, 13, 126, -125, -25, -53, -2, -113, 80, 28, -75, 59, -106, -40, -15, 18, -18, 78, 58, -127, 64, 6, 115, -30, 13, 104, 114, 28, -22, 28, 60, 90, 86, -75, 99, 118, 75, 39, -52, -98, -42, 96, -53, 86, 54, 89, 114, -5, 17, 81, 16, -84, -96, -72, 54, -67, 59, 37, -18, -83, -47, 74, -72, -83, -11, -85, -38, 84, 56, -98, 118, 107, 52, 19, -45, -101, -89, 95, -67, -8, -124, 66, -42, -61, -45, -112, -76, -96, 123, -44, -79, 58, -125, 58, -38, -40, -66, -98, -23, -85, -3, 98, -28, -64, -76, 32, -13, -39, -67, 109, -96, -73, -29, 120, -9, -114, 75, -9, 89, -105, -80, 21, 2, -121, -36, -9, -1, 43, 78, 8, 35, 16, 85, 86, 85, -51, -12, 95, -23, -29, -112, 9, 109, -24, 45, -80, -28, 68, 48, 115, -11, 66, 98, 116, -32, -117, -17, -9, -57, -124, 48, -23, 54, 1, -103, -37, -95, -47, -57, 89, -78, 114, 102, 27, 122, 68, -124, -91, -70, -19, -90, 126, -35, 117, -67, -23, -56, 83, 101, -112, 107, 90, -39};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::MessagePart msg;
    msg.setTimeStamp(0.567555806533);
    msg.setSource(20030U);
    msg.setSourceEntity(239U);
    msg.setDestination(58209U);
    msg.setDestinationEntity(119U);
    msg.uid = 45U;
    msg.frag_number = 147U;
    msg.num_frags = 124U;
    const char tmp_msg_0[] = {33, -14, 49, 78, -85, -65, -1, 29, -13, -1, 43, 100, -97, 10, -11, -63, 76, -102, -8, 123, -7, 85, -59, 105, -119, 101, 31, -116, 20, -85, 60, 59, -12, 51, -68, -91, -78, -80, -63, 13, -52, -1, 112, -103, 124, 69, 88, 91, 12, 71, 44, 37, 32, -8, 44, 29, -10, -107, -56, 48, 39, -47, 20, 37, 60, -104, 50, -13, -127, 41, 90, 68, -69, 10, -110, 20, 49, 22, 89, 3, 114, -39, 115, 56, -2, -120, -115, -116, -34, -58, 26, -42};
    msg.data.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("MessagePart #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.683721962745);
    msg.setSource(28552U);
    msg.setSourceEntity(204U);
    msg.setDestination(36040U);
    msg.setDestinationEntity(34U);
    msg.content_type.assign("HEVZUNPZHWFBDBFUYDJXIZVRNQGQIEGGIROHPUUOSMCCYVLUHANSMXPYOIQRLTJBQNUQKJYYJWFSFTJPDBDHXLKQODNQZGQBZNSWKXVWRJURIKKHIADLKBBSEFYZPITFAYCVVVGLLRCXPAQPJWTXWTCRKHDECRHNXWHJBNZGRBJHPT");
    const char tmp_msg_0[] = {-85, 23, -10, -89, -37, -125, 29, 34, -12, 101, 67, 21, 67, -45, 123, -109, 115, -19, -76, -3, 115, 27, -42, -82, 32, -127, 52, 62, -114, 1, 48, 54, -113, -3, 101, -101, -48, 108, 10, 118, 35, -4, -124, -69, 73, 35, -11, 124, 119, -2, 94, -115, -122, -90, -47, 59, -46, 78, 112, -110, 59, 81, 41, -61, -33, -51, 125, 27, 56, 61, 56, -100, -72, -80, -101, -97, -64, 19, 13, -93, 3, -60, -113, -66, -115, -121, -17, -51, 65, -103, 109, -88, 72, 62, -9, 14, 47, -69, -111, 60, -8, -104, -112, 37, -19, -14, 53, -38, 31, 34, -75, 104, 3, 77, -88, -47, 21, 55, 119, -118, 22, 105, -57, 83, -113, 83, -100, 58, 109, 90, 15, -4, -54, -60, 1, 5, 108, 93, 43, -47, -35, -67, -102, 75, -27, 88, 110, -59, 66, -78, 82};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.471945226687);
    msg.setSource(56854U);
    msg.setSourceEntity(116U);
    msg.setDestination(5815U);
    msg.setDestinationEntity(84U);
    msg.content_type.assign("QGLZXIBQLZDGWGKENTZOFFAJCTRPDPSJMAJIECPMW");
    const char tmp_msg_0[] = {-78, 79, -22, -108, -123, -122, 121, -126, -122, 80, -98, 21, -33, -40, 23, 97, 73, -8, 25, 122, -69, -80, -49, -59, -48, 32, 51, 4, 73, -38, 25, -110, -1, -90, -75, -109, 18, 14, -41, 102, 41, -45, 11, 123, 72, -61, 122, 55, -106, 63, 40, 83, -5, 4, -106, -109, 14, -55, -102, 119, -128, 26, -49, 15, 118, 56, 6, -52, -7, -61, 18, -84, -98, -102, -65, 123, 42, 74, 107, -32, -70, -15, -112, -25, -127, -92, 15, -31, 79, 113, -100, 38, 79, -66, -57, -51, 67, -1, -29, 87, -45, 8, -22, 46, -51, -9, -20, 50, -34, -125, -49, 55, -86, -44, 28, -27, -71, 65, 78, -29, -84, -117, -84, -4, 98, -106, -122, -83, 95, 30, 23, 7, -47, 82, -35, -13, 93, 89, 8, 82, 27, -122, -91, -122, -127, 47, -80, 75, 22, -87, 77, -48, -53, -78, 25, -15, 108, 39, -13, 126, -127, -1, 75, 73, 115, -110, -39, -18, 1, -56, -11, 110, -80, -32, 98, 83, -109, -83, -79, -84, 43, 75, 112};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::NeptusBlob msg;
    msg.setTimeStamp(0.990764064974);
    msg.setSource(30942U);
    msg.setSourceEntity(222U);
    msg.setDestination(40372U);
    msg.setDestinationEntity(214U);
    msg.content_type.assign("DZHQIYSCSRPTPCO");
    const char tmp_msg_0[] = {-83, 10, 37, -77, 79, -64, -31, -24, -72, 13, 1, -62, 15, -76, 125, 76, -114, -29, 126, -92, -89, 93, 56, 108, 26, 11, 35, -79, -97, 89, 54, 108, 66, 32, 68, -114, 32, -6, -116, 34, 95, -66, -48, -56, 86, 36, 24, 9, -12, 102, -52, 77, 38, 71, 92, 29, 42, -44, -106, 94, 24, 115, -62, 114, -67, -50, -91, 82, -7, 118, -81, 42, 74, 45, -88, -55, 35, -116, 113, 62, 32, -42, 85, 12, 76, -119, 64, -94, 92, 126, -34, -46, 108, -36, 29, 115, 70, -7, 87, 19, 123, 91, -60, -113, -37, 41, -126, 106, -103, -100, 30, 14, -51, 117, -16, 87, 39, 32, -43, 113, -118, 23, -104, -24, 6, -75, -21, 39, -106, 104, -65, -1, -39, 84, -109, 8, 4, 107, -118, 27, 47, 80, 69, 2, 32, -81, 8, -84, -127, 85, -103, 114, 57, 59, 34, -97, -75, -94, 27, -49, 3, 6, 92, -111, -122, 94, -47, 59, 48, -110, 80, -40, -103, -7, -96, 5, 125, -85, -83, -71, 64, 103, 79, 2, -94, 113, 21, -29, 82, 51, 62, 96, 57, 23, 19, 22, 95, 33, -10, -14, 118, 101, 70, -65, 64, 109, 62, 96, -1, -31, -116, -21, 3, 59, 10, 67, -69, -10, -91, 45, -8, 109, -116, 103, -69, -57, -100};
    msg.content.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("NeptusBlob #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.897683582727);
    msg.setSource(23698U);
    msg.setSourceEntity(9U);
    msg.setDestination(16481U);
    msg.setDestinationEntity(50U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.0620356043316);
    msg.setSource(60677U);
    msg.setSourceEntity(176U);
    msg.setDestination(32073U);
    msg.setDestinationEntity(155U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Aborted msg;
    msg.setTimeStamp(0.654837036182);
    msg.setSource(28479U);
    msg.setSourceEntity(86U);
    msg.setDestination(39868U);
    msg.setDestinationEntity(30U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Aborted #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.581729667976);
    msg.setSource(21909U);
    msg.setSourceEntity(52U);
    msg.setDestination(34010U);
    msg.setDestinationEntity(80U);
    msg.target = 2090U;
    msg.bearing = 0.0281234906323;
    msg.elevation = 0.646162414921;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.696897128439);
    msg.setSource(34650U);
    msg.setSourceEntity(38U);
    msg.setDestination(56849U);
    msg.setDestinationEntity(238U);
    msg.target = 36997U;
    msg.bearing = 0.871972248472;
    msg.elevation = 0.46055678579;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAngles msg;
    msg.setTimeStamp(0.718310364764);
    msg.setSource(10004U);
    msg.setSourceEntity(86U);
    msg.setDestination(61437U);
    msg.setDestinationEntity(230U);
    msg.target = 7392U;
    msg.bearing = 0.473087880274;
    msg.elevation = 0.449063364301;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAngles #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.164712096184);
    msg.setSource(2271U);
    msg.setSourceEntity(234U);
    msg.setDestination(28101U);
    msg.setDestinationEntity(159U);
    msg.target = 51600U;
    msg.x = 0.835351096133;
    msg.y = 0.487499370562;
    msg.z = 0.541009708294;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.33887358045);
    msg.setSource(36107U);
    msg.setSourceEntity(121U);
    msg.setDestination(2889U);
    msg.setDestinationEntity(45U);
    msg.target = 41298U;
    msg.x = 0.191149431776;
    msg.y = 0.598474472101;
    msg.z = 0.0696322085215;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPosition msg;
    msg.setTimeStamp(0.485167415575);
    msg.setSource(1846U);
    msg.setSourceEntity(191U);
    msg.setDestination(7757U);
    msg.setDestinationEntity(69U);
    msg.target = 60979U;
    msg.x = 0.736011613293;
    msg.y = 0.658666282712;
    msg.z = 0.972770386768;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.127498236398);
    msg.setSource(39236U);
    msg.setSourceEntity(216U);
    msg.setDestination(45210U);
    msg.setDestinationEntity(123U);
    msg.target = 46116U;
    msg.lat = 0.467136875643;
    msg.lon = 0.731258944658;
    msg.z_units = 7U;
    msg.z = 0.00261298464831;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.481358997079);
    msg.setSource(63615U);
    msg.setSourceEntity(191U);
    msg.setDestination(56984U);
    msg.setDestinationEntity(111U);
    msg.target = 16356U;
    msg.lat = 0.134310819606;
    msg.lon = 0.79947547559;
    msg.z_units = 70U;
    msg.z = 0.133108148399;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFix msg;
    msg.setTimeStamp(0.609384213129);
    msg.setSource(2380U);
    msg.setSourceEntity(0U);
    msg.setDestination(61555U);
    msg.setDestinationEntity(253U);
    msg.target = 8543U;
    msg.lat = 0.149806013179;
    msg.lon = 0.762669716231;
    msg.z_units = 227U;
    msg.z = 0.566381978395;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFix #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.859571097299);
    msg.setSource(17911U);
    msg.setSourceEntity(133U);
    msg.setDestination(25938U);
    msg.setDestinationEntity(191U);
    msg.locale.assign("YIAQAZWVWKKSZJDPEYNKKOTBFPQHGUTMBQLKXVBVXPIONXUHTNPYSYLJSXECSAEZOZFAQUHNOOLRWWVEIIGLDGTWFURR");
    const char tmp_msg_0[] = {117, 121, 60, -14, 57, 111, -3, -1, -94, 120, -116, 6, -29, 95, -12, 109, -12, 6, 31, 58, 59, 29, -114, 3, -29, 101, 32, 81, 47, 30, -69, -116, 17, 38, -34, 80, 89, 11, 67, -19, 81, -43, -106, -21, -41, -94, 26, 38, 90, -56, 11, -107, -91, 36, -109, 44, 120, 55, 77, 92, -34, 75, -64, 68, 55, 40, 6, -73, -113, -117, -77, -59, -118, -105, 53, -57, 4, -38, 61, -81, 26, 103, -8, -94, -51, 102, -45, -119, -56, -76, 124, -50, -47, 124, 46, -109, -81, 50, -39, 26, -88, -2, 48, 53, 31, 65, -19, 115, -72, 101, 103, 30, 57, 0, 40, -36, -21, -25, 44, 97, 126, 116, 46, 55, 76, 21, -81, -28, 19, -28, -58, 59, 78, 104, 25, -38, 52, -95, -122, -128, -28, -108, -10, -54, 74, -125, 53, 53, -13, -55, 23, -25, -89, 116, -82, 83, 47, 99, 88, 85, -43, 65, -117, 51, 69, 81, -10, 60, 16, 91, -98, 87, -55, -4, 57, -80, 3, -61, -100, -86, -115, -29, -35, 73, -107, 71, -62, -28, 46, -32, -66, 76, 16, -57, -22, 4, -118, -96, -35, -101, 25, 4, -48, 6, 4, 111, -106, 100, 74, -62, -74, 67, 94, -109, 107, 25, 93, -18, 76, 81, 124, -84, -127, 92, -7, -8, -81, -25, -71, 122, -19, 70};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.288738507803);
    msg.setSource(49743U);
    msg.setSourceEntity(197U);
    msg.setDestination(58430U);
    msg.setDestinationEntity(27U);
    msg.locale.assign("ZNGDWEIRYCTWXDHKTNJDTCQDFEVIDXEYYRXSDAGGPIBEWZFGNUEETJYVFVCKLLOBTYFBAMSTFSNFLMYZOJNMBVYBWHMTUBNSSUAOAULKQULFAHQHXXVKZQXVGXQOIIULSQRUZTMMKFAPNLPHAWPVHNZVAZEUCIOCQIQPHKPQJYDEHSRAEGNJBKRWPWVDEZNC");
    const char tmp_msg_0[] = {-81, -51, -21, -66, -49, 55, 93, 121, 123, 92, -63, 25, 116, -92, -77, 65, -40, 47, 70, 123, -69, 81, 50, -82, -33, 123, -4, 100, -70, 91, 9, -105, 45, 76, -102, 42, -113, 94, 29, -21, -22, -59, -103, -16, -44, 46, -54, -118, 5, -53, 30, 108, 110, 49, 106, -10, 111, 82, 17, 37, 65, -26, -97, 27, 4, 16, 124, -8, -128, -29, 123, 110, 1, 116, 37, 5, 26, -8, 22, -109, 97, -119, 110, -87, -4, 75, -116, 69, -89, -2, 58, -93, -46, -33, 115, -77, -120, 4, 114, -91, 84, -94, 42, 108, -21, 100, -48, -70, -8, -44, -121, -14, -34, -26, 106, -84, -69, -18, -44, 60, -86, 89, 126, -78, -95, 81, 16, 57, 64, -93, 69, 32, 91, 77, 90, 90, -106, 82, 61, -60, 93, 90, 126, -48, 1, 65, 110, -35, 56, -2, -115, 25, 83, -121, -89, 93, -12, -115, -42, 9, -88, -28, -104, 61, 28, 27, 120, -30, 93, -80, -112, 21, 56, 63, -35, -21, -53, 124, -47, 114, -73, -38, 112, 94, 8, 21, -39, -61, -10, 122, 31, 93, 15, 35, 37, 11, 0, -60, -10, 100, 31, 59, -23, 65, -125, -58, -95, 47, -21, 125, 125, -69, -107, 106, -67, -36, -114, 124, 52, -109, -17, -64, -9, 2, 27, 97, -76, 38, -85, 58, 58, -126, 64, -84, 27, -36, -63, 23, -58, 14, -123, 8, -94, -20, -126, 61, 8, -25, -76};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ParametersXml msg;
    msg.setTimeStamp(0.595048775252);
    msg.setSource(52679U);
    msg.setSourceEntity(5U);
    msg.setDestination(25100U);
    msg.setDestinationEntity(132U);
    msg.locale.assign("VHGXPJHZAICLMJGITLGDLWESWD");
    const char tmp_msg_0[] = {86, -11, 20, 103, -58, 94, 90, -69, -57, 73, -118, -56, 72, -20, -104, 24, -38, 1, -9, -73, 7, 26, -4, 14, 24, -125, 100, -79, -46, 87, -74, 119, 77, 95, 31, -125, -21, -55, -54, -118, -87, 105, 105, -56, 66, -100, 126, -54, 21, -40, 13, -48, 50, 63, 123, -50, -10, 46, -51, -1, 44, -45, 18, -47, 67, -84, -120, -27, 77, 125, 43, -1, -2, -68, -51, -32, 48, 108, -54, -101, -34, 75, 45, 105, -57, -52, 6, -9, -90, 90, 70, -73, -91, -56, -70, 11, -67, 59, 72, -54, -4, 17, 4, 38, 47, -113, 74, -96, -21, -29, 103, -87, -5, -42, 33, -22, 0, 68, -21, 81, -53, 34, 70, 51, -3, -97, 80, 8, 73, -62, 107, -45, 46, -2, -25, -83, 89, -89, 40, -13, 44, 115, -32, -47, -28, 106, 31, 121, 32, -39, 108, 86, -71, -54, -29, 49, -17, -25, -51, -61, 109, 42, -84, -13, -116, 22, 70, -108, 25, -64, -53, 31, 30, 19, -19, 36, 92, -49, -108, -81, -55, 95, 109, 46, -57, -68, 12, -68, 103, -56, -120, -104, 35, -119, 88, 74, 5, 20, -64, 83, -105};
    msg.config.assign(tmp_msg_0, tmp_msg_0 + sizeof(tmp_msg_0));

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.614321949056);
    msg.setSource(14907U);
    msg.setSourceEntity(115U);
    msg.setDestination(33141U);
    msg.setDestinationEntity(129U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.135431516292);
    msg.setSource(64887U);
    msg.setSourceEntity(176U);
    msg.setDestination(37580U);
    msg.setDestinationEntity(19U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetParametersXml msg;
    msg.setTimeStamp(0.998206781379);
    msg.setSource(56133U);
    msg.setSourceEntity(62U);
    msg.setDestination(7073U);
    msg.setDestinationEntity(181U);

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetParametersXml #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.403505169907);
    msg.setSource(36877U);
    msg.setSourceEntity(211U);
    msg.setDestination(60196U);
    msg.setDestinationEntity(129U);
    msg.camid = 88U;
    msg.x = 38038U;
    msg.y = 52248U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.958804771197);
    msg.setSource(47421U);
    msg.setSourceEntity(247U);
    msg.setDestination(50976U);
    msg.setDestinationEntity(63U);
    msg.camid = 64U;
    msg.x = 9359U;
    msg.y = 45990U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SetImageCoords msg;
    msg.setTimeStamp(0.862579008733);
    msg.setSource(62462U);
    msg.setSourceEntity(150U);
    msg.setDestination(15104U);
    msg.setDestinationEntity(146U);
    msg.camid = 85U;
    msg.x = 6706U;
    msg.y = 16892U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.947219473721);
    msg.setSource(45259U);
    msg.setSourceEntity(32U);
    msg.setDestination(10436U);
    msg.setDestinationEntity(51U);
    msg.camid = 194U;
    msg.x = 9090U;
    msg.y = 4830U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.0524758515897);
    msg.setSource(10823U);
    msg.setSourceEntity(238U);
    msg.setDestination(47475U);
    msg.setDestinationEntity(249U);
    msg.camid = 234U;
    msg.x = 19236U;
    msg.y = 15796U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetImageCoords msg;
    msg.setTimeStamp(0.612037363927);
    msg.setSource(9789U);
    msg.setSourceEntity(47U);
    msg.setDestination(31498U);
    msg.setDestinationEntity(193U);
    msg.camid = 197U;
    msg.x = 61931U;
    msg.y = 10520U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetImageCoords #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.548403835504);
    msg.setSource(51262U);
    msg.setSourceEntity(166U);
    msg.setDestination(52746U);
    msg.setDestinationEntity(88U);
    msg.tracking = 75U;
    msg.lat = 0.989049121685;
    msg.lon = 0.0790519598465;
    msg.x = 0.934093495631;
    msg.y = 0.0564283117855;
    msg.z = 0.192059997054;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.909028268683);
    msg.setSource(59342U);
    msg.setSourceEntity(175U);
    msg.setDestination(24786U);
    msg.setDestinationEntity(0U);
    msg.tracking = 131U;
    msg.lat = 0.976642352112;
    msg.lon = 0.58889236983;
    msg.x = 0.0691800249321;
    msg.y = 0.839642477433;
    msg.z = 0.584824913946;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::GetWorldCoordinates msg;
    msg.setTimeStamp(0.83712235398);
    msg.setSource(19379U);
    msg.setSourceEntity(23U);
    msg.setDestination(36188U);
    msg.setDestinationEntity(28U);
    msg.tracking = 168U;
    msg.lat = 0.366384847309;
    msg.lon = 0.807424696453;
    msg.x = 0.978837384791;
    msg.y = 0.0495430293251;
    msg.z = 0.724754018873;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("GetWorldCoordinates #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.502859544498);
    msg.setSource(59088U);
    msg.setSourceEntity(119U);
    msg.setDestination(16596U);
    msg.setDestinationEntity(208U);
    msg.target.assign("VYJOHSBLWRBISLQCIPSXBRAFJY");
    msg.lbearing = 0.870921042535;
    msg.lelevation = 0.619327574458;
    msg.bearing = 0.168820920092;
    msg.elevation = 0.314218090127;
    msg.phi = 0.202454360249;
    msg.theta = 0.689518896839;
    msg.psi = 0.951358247856;
    msg.accuracy = 0.520587989173;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.989541493494);
    msg.setSource(56130U);
    msg.setSourceEntity(131U);
    msg.setDestination(42828U);
    msg.setDestinationEntity(199U);
    msg.target.assign("GQVELEQVOLHSNQSBFLWLUNNFEATHBDNDTWUOEKQLFUSDKDWPWVRHWJZGZXLCOUJKQMQIRLNSBPMZHJIYRVJRROYMLWTZQXUFEPEXOCSHPNSCABSXGVGJSTHMQNAVJCBGCGTZZVXXIDNAKCOWRKNYLIZTRPTMVYQVICYXUUXXOJKAYUP");
    msg.lbearing = 0.399999229983;
    msg.lelevation = 0.561715656908;
    msg.bearing = 0.193267554815;
    msg.elevation = 0.261223180043;
    msg.phi = 0.0657280508836;
    msg.theta = 0.369076033373;
    msg.psi = 0.669122536571;
    msg.accuracy = 0.270016192053;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblAnglesExtended msg;
    msg.setTimeStamp(0.65704289846);
    msg.setSource(34685U);
    msg.setSourceEntity(93U);
    msg.setDestination(14163U);
    msg.setDestinationEntity(52U);
    msg.target.assign("ZKLSYZMXIKVJPABSDOAYFWDOOPHXLTTCZQZQARUOFJLIIYYAQJJBOJIGHXNTQMKMYMVGPWBLZUBTGZHVJAUVFUFDYEDNNTNFESQVTIHAKHHVGBLRTALCPJGDSEYQURHRLZPXFPUSIIUNDUAOHRWWVHCXTRDVZOYMQOEEKNBLSZJSRDISKNPCCAECDJEML");
    msg.lbearing = 0.65936179161;
    msg.lelevation = 0.460844252411;
    msg.bearing = 0.0930076119087;
    msg.elevation = 0.492884988801;
    msg.phi = 0.711378702621;
    msg.theta = 0.0535115605625;
    msg.psi = 0.943739386763;
    msg.accuracy = 0.192296706299;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblAnglesExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.31724730511);
    msg.setSource(12731U);
    msg.setSourceEntity(183U);
    msg.setDestination(56117U);
    msg.setDestinationEntity(5U);
    msg.target.assign("IFRCIGDFLRZWBMLEYOWDHHLATLYKHERBOXTEIVTYVLILOUKFTCKYPCBPEEEFGTXVFTYPFASBBBMZISNVNXBTMCSSQWURMWNUUJLJWJZHSSWYRNZVZWIRKJAXPVRMRDAWDGNQOJHPHCKKQTQHUUVVXIGKDXQPXZAOOMQUCDMDQSWRHNUFSGSCIJTCCQAOFBHEGRNYJPAQZSMNJDBGKJIYAHGDJENZBYFM");
    msg.x = 0.075916282315;
    msg.y = 0.997933695023;
    msg.z = 0.573785925215;
    msg.n = 0.0445503563785;
    msg.e = 0.152793326938;
    msg.d = 0.699172842132;
    msg.phi = 0.358613958538;
    msg.theta = 0.997520489012;
    msg.psi = 0.758753309941;
    msg.accuracy = 0.218309181848;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.978093062424);
    msg.setSource(64209U);
    msg.setSourceEntity(205U);
    msg.setDestination(43491U);
    msg.setDestinationEntity(241U);
    msg.target.assign("AGCZAOTWCVVXVRMFDREMZPOEZAJPDQJLFDWIHIXJTYYFTBPLSSLVNUXQJBYMWPMIRQDYGJSBGCQJVNCUMQKECHYA");
    msg.x = 0.94129593967;
    msg.y = 0.560295862891;
    msg.z = 0.832736688998;
    msg.n = 0.0336431132578;
    msg.e = 0.739919200835;
    msg.d = 0.115673454728;
    msg.phi = 0.524569373425;
    msg.theta = 0.715600050417;
    msg.psi = 0.738075023261;
    msg.accuracy = 0.786286571542;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblPositionExtended msg;
    msg.setTimeStamp(0.304526949345);
    msg.setSource(8801U);
    msg.setSourceEntity(150U);
    msg.setDestination(26218U);
    msg.setDestinationEntity(181U);
    msg.target.assign("VKMNBNIJVQZDFGMVZAFSWGUCMDJQCYPXCUPYRVRLXFEZJEUSEEHNZOHSIWLPZICQSPIUWHTRNQOYAFGRHXFWWOHPWIZFMRDVLJUKGAQLBUQLKBOEINCAPEBEKBFYVVSNRMWJKHXRDYIDNQHZFCQADRQGQNJMOPTUTELPLXXTYKWZDBBSDASGHSYCFHBGNAFTYGBTSIJKYGVOWXEHKAJNTYMUVILMZKTX");
    msg.x = 0.200649595953;
    msg.y = 0.436947360733;
    msg.z = 0.437026465301;
    msg.n = 0.354673448219;
    msg.e = 0.402064563882;
    msg.d = 0.476816538624;
    msg.phi = 0.745517762798;
    msg.theta = 0.13235357784;
    msg.psi = 0.789539919477;
    msg.accuracy = 0.595932664319;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblPositionExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.893094959856);
    msg.setSource(14842U);
    msg.setSourceEntity(213U);
    msg.setDestination(45871U);
    msg.setDestinationEntity(247U);
    msg.target.assign("QFLOIUUHIXYVMKYGYNSHYAYQJMDGNETWOCFTSOVEXPIWIBIDLUFOLZBXQJSUJVTKFHSQGNPSFMZLGXAGLEJUYARNNBENYKQRMZIZTOLEDFFZVGHQRWHWUGOPDBGSKKMZHZLAVHBPKPORTMDER");
    msg.lat = 0.0947035400729;
    msg.lon = 0.834925119998;
    msg.z_units = 127U;
    msg.z = 0.289757276513;
    msg.accuracy = 0.374327147943;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.445824959399);
    msg.setSource(16595U);
    msg.setSourceEntity(244U);
    msg.setDestination(32836U);
    msg.setDestinationEntity(114U);
    msg.target.assign("RONCFHKUDWUAXEMSQCGPPQMEJROGSSIMKNHVSAVKZFAFNPUKPMVIXZDCVWALQKFXLDMXZNZYJLSZTYUHCIMCLRZBQTEGOGKAULOOFHGBLNPGNAPVWBB");
    msg.lat = 0.154265537103;
    msg.lon = 0.304677312123;
    msg.z_units = 113U;
    msg.z = 0.672689042144;
    msg.accuracy = 0.228158676256;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblFixExtended msg;
    msg.setTimeStamp(0.231964464067);
    msg.setSource(4908U);
    msg.setSourceEntity(29U);
    msg.setDestination(17822U);
    msg.setDestinationEntity(82U);
    msg.target.assign("ZUNCURFAEJ");
    msg.lat = 0.382166703827;
    msg.lon = 0.853417957083;
    msg.z_units = 176U;
    msg.z = 0.992619655258;
    msg.accuracy = 0.345260235803;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblFixExtended #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.396451424303);
    msg.setSource(4241U);
    msg.setSourceEntity(64U);
    msg.setDestination(45162U);
    msg.setDestinationEntity(239U);
    msg.name.assign("PPATIGDBTPGBHYBLOVGWIICYDLSJKQFSMIROSZKZYFFMXJPVDRHGNTYQOKJQZZZYCZVWIFUEKXZIYCWB");
    msg.lat = 0.473246940195;
    msg.lon = 0.60297157357;
    msg.z = 0.618613693346;
    msg.z_units = 35U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.365115559396);
    msg.setSource(36660U);
    msg.setSourceEntity(100U);
    msg.setDestination(55662U);
    msg.setDestinationEntity(37U);
    msg.name.assign("CLBNBGEJXHBXMJVMZCLSETGTGCOKILTRVRHAPXYBYTAFGRBWNRYDZJLHFCOKWVNGDVXJTVOSEYNCAUPFQSEORFDXIKQPDPAUHQZSPRNZUNKVFDJLWUHNNLABTLKZDOASWLHYSWCXCETJODPVIYRLRWUBRDBJGGQCWVXMSMJAWIEJISLNDYFDQBHZTGZFPKMEKF");
    msg.lat = 0.473710600344;
    msg.lon = 0.236047185954;
    msg.z = 0.327213577611;
    msg.z_units = 211U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblModem msg;
    msg.setTimeStamp(0.828650177878);
    msg.setSource(27726U);
    msg.setSourceEntity(109U);
    msg.setDestination(29803U);
    msg.setDestinationEntity(53U);
    msg.name.assign("SUHSJXFQBZYEQWCYZLXOZZHWGNURKSJBXQOJERKEBUAYPIVAMFDESZVSMCHEEBPVGADLOVOJCRWD");
    msg.lat = 0.337245447737;
    msg.lon = 0.732546154958;
    msg.z = 0.0380642790736;
    msg.z_units = 73U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblModem #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.738553511182);
    msg.setSource(11070U);
    msg.setSourceEntity(151U);
    msg.setDestination(14874U);
    msg.setDestinationEntity(92U);
    msg.op = 30U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.756089722951);
    msg.setSource(63605U);
    msg.setSourceEntity(98U);
    msg.setDestination(38415U);
    msg.setDestinationEntity(140U);
    msg.op = 16U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::UsblConfig msg;
    msg.setTimeStamp(0.545260944379);
    msg.setSource(18020U);
    msg.setSourceEntity(51U);
    msg.setDestination(41386U);
    msg.setDestinationEntity(169U);
    msg.op = 3U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("UsblConfig #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.850103599882);
    msg.setSource(18112U);
    msg.setSourceEntity(232U);
    msg.setDestination(656U);
    msg.setDestinationEntity(13U);
    msg.value = 0.630421263737;
    msg.type = 231U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.595403741757);
    msg.setSource(13790U);
    msg.setSourceEntity(232U);
    msg.setDestination(10625U);
    msg.setDestinationEntity(186U);
    msg.value = 0.901063793603;
    msg.type = 59U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DissolvedOrganicMatter msg;
    msg.setTimeStamp(0.349212814197);
    msg.setSource(51849U);
    msg.setSourceEntity(177U);
    msg.setDestination(36097U);
    msg.setDestinationEntity(169U);
    msg.value = 0.672691061271;
    msg.type = 98U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DissolvedOrganicMatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.38609634077);
    msg.setSource(5073U);
    msg.setSourceEntity(186U);
    msg.setDestination(22022U);
    msg.setDestinationEntity(11U);
    msg.value = 0.856197519032;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.866145671873);
    msg.setSource(9965U);
    msg.setSourceEntity(89U);
    msg.setDestination(19394U);
    msg.setDestinationEntity(102U);
    msg.value = 0.276499444623;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::OpticalBackscatter msg;
    msg.setTimeStamp(0.876200536106);
    msg.setSource(59041U);
    msg.setSourceEntity(46U);
    msg.setDestination(15741U);
    msg.setDestinationEntity(191U);
    msg.value = 0.146441011802;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("OpticalBackscatter #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.3472187384);
    msg.setSource(441U);
    msg.setSourceEntity(246U);
    msg.setDestination(39517U);
    msg.setDestinationEntity(208U);
    msg.timestamp_last_service = 0.100757029701;
    msg.time_next_service = 0.498395669105;
    msg.time_motor_next_service = 0.229244560127;
    msg.time_idle_ground = 0.795159234264;
    msg.time_idle_air = 0.401232783879;
    msg.time_idle_water = 0.990373015925;
    msg.time_idle_underwater = 0.813933443198;
    msg.time_idle_unknown = 0.316258704641;
    msg.time_motor_ground = 0.690995255333;
    msg.time_motor_air = 0.0956093161055;
    msg.time_motor_water = 0.694098451438;
    msg.time_motor_underwater = 0.455717761594;
    msg.time_motor_unknown = 0.983741670827;
    msg.rpm_min = 3381;
    msg.rpm_max = -18232;
    msg.depth_max = 0.681076156034;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.430715410876);
    msg.setSource(24246U);
    msg.setSourceEntity(132U);
    msg.setDestination(43219U);
    msg.setDestinationEntity(29U);
    msg.timestamp_last_service = 0.901706236011;
    msg.time_next_service = 0.27567109249;
    msg.time_motor_next_service = 0.722425241334;
    msg.time_idle_ground = 0.439913557307;
    msg.time_idle_air = 0.716938974735;
    msg.time_idle_water = 0.0543382619772;
    msg.time_idle_underwater = 0.674056698449;
    msg.time_idle_unknown = 0.518967487726;
    msg.time_motor_ground = 0.920580687748;
    msg.time_motor_air = 0.703313690765;
    msg.time_motor_water = 0.42996966769;
    msg.time_motor_underwater = 0.442238260751;
    msg.time_motor_unknown = 0.0281466579268;
    msg.rpm_min = 24919;
    msg.rpm_max = -6767;
    msg.depth_max = 0.272193883361;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::Tachograph msg;
    msg.setTimeStamp(0.620677194375);
    msg.setSource(65176U);
    msg.setSourceEntity(129U);
    msg.setDestination(63139U);
    msg.setDestinationEntity(66U);
    msg.timestamp_last_service = 0.369836858162;
    msg.time_next_service = 0.828654227171;
    msg.time_motor_next_service = 0.338800685588;
    msg.time_idle_ground = 0.273081582345;
    msg.time_idle_air = 0.872908927691;
    msg.time_idle_water = 0.56407864498;
    msg.time_idle_underwater = 0.0569750186335;
    msg.time_idle_unknown = 0.872319852263;
    msg.time_motor_ground = 0.440121488093;
    msg.time_motor_air = 0.432321751996;
    msg.time_motor_water = 0.2713054234;
    msg.time_motor_underwater = 0.888109316974;
    msg.time_motor_unknown = 0.822347575031;
    msg.rpm_min = 15373;
    msg.rpm_max = 25883;
    msg.depth_max = 0.399624356906;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("Tachograph #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.981622661259);
    msg.setSource(64643U);
    msg.setSourceEntity(174U);
    msg.setDestination(4510U);
    msg.setDestinationEntity(137U);
    msg.severity = 201U;
    msg.text.assign("LIQGYZAOSGYSZKPQJUXXKBLZOUPBZSVHCSBUDGQMMVMAUETRNGSXPOFPPACGEXMNATDKQFRQVPBWIUKZXARNOWBSLOPGRBYGSCXACHYQRNQDNNMVBUJAGITFLZHDRIHTSXSXDOWHZVEWGJRMNEFLZYWKYDTLRJADVMEENJODGPVKYOENCYCPIULFDEJRCHTYDLWFTXCOTJFURUIFQSAKEZUHQ");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.375278691427);
    msg.setSource(15401U);
    msg.setSourceEntity(192U);
    msg.setDestination(8265U);
    msg.setDestinationEntity(137U);
    msg.severity = 151U;
    msg.text.assign("AUOJKPXYCOYLGBELXPZSDZJDQODENKCKRIBTUCTQCJXTHZXFQTBMHJWXXIDAQNLDQVWRNNAONGIZMAHHZMELJEMJRRKUNHYADKRXPCTOVFMUWHBPLLFRYQCJZEMGDNLREUISVAVTWIFPEKRBUGXAV");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::ApmStatus msg;
    msg.setTimeStamp(0.351191376571);
    msg.setSource(22552U);
    msg.setSourceEntity(178U);
    msg.setDestination(56727U);
    msg.setDestinationEntity(70U);
    msg.severity = 18U;
    msg.text.assign("PUPYHLYAKLXH");

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("ApmStatus #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.605760110879);
    msg.setSource(57353U);
    msg.setSourceEntity(168U);
    msg.setDestination(35457U);
    msg.setDestinationEntity(127U);
    msg.channel = 90;
    msg.value = -1637646954;
    msg.gain = 237U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.490657325974);
    msg.setSource(48696U);
    msg.setSourceEntity(126U);
    msg.setDestination(52932U);
    msg.setDestinationEntity(97U);
    msg.channel = -33;
    msg.value = 187120132;
    msg.gain = 78U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::SadcReadings msg;
    msg.setTimeStamp(0.308146086038);
    msg.setSource(32469U);
    msg.setSourceEntity(252U);
    msg.setDestination(30682U);
    msg.setDestinationEntity(0U);
    msg.channel = -52;
    msg.value = 244902407;
    msg.gain = 133U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("SadcReadings #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.0794111064831);
    msg.setSource(50245U);
    msg.setSourceEntity(85U);
    msg.setDestination(18656U);
    msg.setDestinationEntity(35U);
    msg.ch01 = 0.784913639012;
    msg.ch02 = 0.69445608365;
    msg.ch03 = 0.599803190241;
    msg.ch04 = 0.974220132368;
    msg.ch05 = 0.690760223052;
    msg.ch06 = 0.330296560646;
    msg.ch07 = 0.662457992518;
    msg.ch08 = 0.819822350177;
    msg.ch09 = 0.917969534133;
    msg.ch10 = 0.827696184022;
    msg.ch11 = 0.0456537224008;
    msg.ch12 = 0.709024185461;
    msg.ch13 = 0.813765089658;
    msg.ch14 = 0.498176345002;
    msg.ch15 = 0.143974324103;
    msg.ch16 = 0.649007262852;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.496586141118);
    msg.setSource(21124U);
    msg.setSourceEntity(27U);
    msg.setDestination(58664U);
    msg.setDestinationEntity(211U);
    msg.ch01 = 0.473134685283;
    msg.ch02 = 0.80113361668;
    msg.ch03 = 0.813053537375;
    msg.ch04 = 0.300028449547;
    msg.ch05 = 0.205728284343;
    msg.ch06 = 0.317769085349;
    msg.ch07 = 0.360712863902;
    msg.ch08 = 0.389565673547;
    msg.ch09 = 0.152423646323;
    msg.ch10 = 0.391177182449;
    msg.ch11 = 0.757227811337;
    msg.ch12 = 0.687288618975;
    msg.ch13 = 0.611945400476;
    msg.ch14 = 0.584899777337;
    msg.ch15 = 0.377214094884;
    msg.ch16 = 0.11561836325;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::DmsDetection msg;
    msg.setTimeStamp(0.714084344821);
    msg.setSource(60101U);
    msg.setSourceEntity(134U);
    msg.setDestination(33597U);
    msg.setDestinationEntity(203U);
    msg.ch01 = 0.169772016235;
    msg.ch02 = 0.869611781917;
    msg.ch03 = 0.0519214951821;
    msg.ch04 = 0.318908615601;
    msg.ch05 = 0.178115048718;
    msg.ch06 = 0.560885630178;
    msg.ch07 = 0.698890349367;
    msg.ch08 = 0.424868847148;
    msg.ch09 = 0.968952649861;
    msg.ch10 = 0.0164506583489;
    msg.ch11 = 0.238207031689;
    msg.ch12 = 0.300462806723;
    msg.ch13 = 0.393624369374;
    msg.ch14 = 0.73640360451;
    msg.ch15 = 0.683313703321;
    msg.ch16 = 0.0595438512559;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("DmsDetection #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.892545944849);
    msg.setSource(2212U);
    msg.setSourceEntity(82U);
    msg.setDestination(12447U);
    msg.setDestinationEntity(123U);
    msg.value = 0.294531433951;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.00453292495365);
    msg.setSource(60082U);
    msg.setSourceEntity(151U);
    msg.setDestination(751U);
    msg.setDestinationEntity(186U);
    msg.value = 0.6311497653;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TotalMagIntensity msg;
    msg.setTimeStamp(0.667679023699);
    msg.setSource(41831U);
    msg.setSourceEntity(165U);
    msg.setDestination(3798U);
    msg.setDestinationEntity(13U);
    msg.value = 0.836146028353;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TotalMagIntensity #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.51090890436);
    msg.setSource(37414U);
    msg.setSourceEntity(119U);
    msg.setDestination(48765U);
    msg.setDestinationEntity(101U);
    msg.op = 61U;
    msg.lat = 0.684720644428;
    msg.lon = 0.0823377098635;
    msg.height = 0.702999368751;
    msg.depth = 0.836332284536;
    msg.alt = 0.227452122867;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.780368517904);
    msg.setSource(49183U);
    msg.setSourceEntity(49U);
    msg.setDestination(36792U);
    msg.setDestinationEntity(227U);
    msg.op = 92U;
    msg.lat = 0.440652011866;
    msg.lon = 0.65953784585;
    msg.height = 0.138335983682;
    msg.depth = 0.0672907004839;
    msg.alt = 0.324907548719;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::HomePosition msg;
    msg.setTimeStamp(0.252859894663);
    msg.setSource(61448U);
    msg.setSourceEntity(8U);
    msg.setDestination(59868U);
    msg.setDestinationEntity(223U);
    msg.op = 85U;
    msg.lat = 0.260321564201;
    msg.lon = 0.249148011617;
    msg.height = 0.882250860595;
    msg.depth = 0.216861088474;
    msg.alt = 0.213393361872;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("HomePosition #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.643505659946);
    msg.setSource(26791U);
    msg.setSourceEntity(213U);
    msg.setDestination(40535U);
    msg.setDestinationEntity(196U);
    msg.serial_no = 1670345957U;
    msg.unix_timestamp = 3229151891U;
    msg.millis = 21215U;
    msg.trans_protocol = 98U;
    msg.trans_id = 1578045033U;
    msg.trans_data = 26571U;
    msg.snr = 118U;
    msg.trans_freq = 146U;
    msg.recv_mem_addr = 46518U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.551570439909);
    msg.setSource(36704U);
    msg.setSourceEntity(33U);
    msg.setDestination(44549U);
    msg.setDestinationEntity(30U);
    msg.serial_no = 2772598563U;
    msg.unix_timestamp = 1319042790U;
    msg.millis = 57118U;
    msg.trans_protocol = 71U;
    msg.trans_id = 1019978446U;
    msg.trans_data = 6761U;
    msg.snr = 7U;
    msg.trans_freq = 76U;
    msg.recv_mem_addr = 56140U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRFishTag msg;
    msg.setTimeStamp(0.49099374651);
    msg.setSource(43959U);
    msg.setSourceEntity(134U);
    msg.setDestination(18538U);
    msg.setDestinationEntity(65U);
    msg.serial_no = 427128066U;
    msg.unix_timestamp = 317863320U;
    msg.millis = 31209U;
    msg.trans_protocol = 176U;
    msg.trans_id = 1233977583U;
    msg.trans_data = 51925U;
    msg.snr = 26U;
    msg.trans_freq = 252U;
    msg.recv_mem_addr = 34087U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRFishTag #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.714134296502);
    msg.setSource(63426U);
    msg.setSourceEntity(206U);
    msg.setDestination(35325U);
    msg.setDestinationEntity(32U);
    msg.serial_no = 2211142947U;
    msg.unix_timestamp = 3291351320U;
    msg.temperature = 0.0519340590212;
    msg.avg_noise_level = 119U;
    msg.peak_noise_level = 5U;
    msg.recv_listen_freq = 130U;
    msg.recv_mem_addr = 61350U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #0", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #0", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.530229013636);
    msg.setSource(3842U);
    msg.setSourceEntity(130U);
    msg.setDestination(20365U);
    msg.setDestinationEntity(117U);
    msg.serial_no = 1233849489U;
    msg.unix_timestamp = 2679100744U;
    msg.temperature = 0.748065616473;
    msg.avg_noise_level = 129U;
    msg.peak_noise_level = 48U;
    msg.recv_listen_freq = 27U;
    msg.recv_mem_addr = 8408U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #1", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #1", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  {
    IMC::TBRSensor msg;
    msg.setTimeStamp(0.514906725947);
    msg.setSource(56528U);
    msg.setSourceEntity(77U);
    msg.setDestination(23668U);
    msg.setDestinationEntity(1U);
    msg.serial_no = 2585124996U;
    msg.unix_timestamp = 2798290527U;
    msg.temperature = 0.36166705356;
    msg.avg_noise_level = 74U;
    msg.peak_noise_level = 180U;
    msg.recv_listen_freq = 154U;
    msg.recv_mem_addr = 34855U;

    try
    {
      Utils::ByteBuffer bfr;
      IMC::Packet::serialize(&msg, bfr);
      IMC::Message* msg_d = IMC::Packet::deserialize(bfr.getBuffer(), bfr.getSize());
      test.boolean("TBRSensor #2", msg == *msg_d);
      delete msg_d;
    }
    catch (IMC::InvalidMessageSize& e)
    {
      (void)e;
      test.boolean("msg #2", msg.getSerializationSize() > DUNE_IMC_CONST_MAX_SIZE);
    }
  }

  return test.getReturnValue();
}
