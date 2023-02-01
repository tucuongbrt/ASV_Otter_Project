# Summary
This document will briefly describe what is the messages that have and should be passed between Neptus and the vehicle being used for the project.

# Connecting to Neptus
You can connect to Neptus by using either UDP or TCP protocols by sending IMC (https://github.com/LSTS/imc) protocol that is documented in http://www.lsts.pt/docs/imc/master/.

Neptus uses port 6001 (by default) open for both UDP and TCP to exchange data with vehicles. Neptus sends "announce" messages on ports 30100 to 30104 at multicast address 224.0.75.69 and broadcast, to advertise itself and its connections.
This is done by using multicast IP 224.0.75.69 on ports 30100 to 30104 with the [Announce](http://www.lsts.pt/docs/imc/master/Networking.html#announce) message. This allows Neptus also to know the available assets connected. Below there is an example for a Neptus instance. The relevant comm data is in bold at the services row.

## Announce (from Neptus)
| Header	| 8 fields			|
|---		|---				|
| sync 		| 65108 [0xFE54]		|
| msgid		| 151  				|
| size 		| 253 byte			|
| timestamp	| 2016-jun-16 12:55:16.710 UTC	|
| src  		| **16663 [0x4117]** 		|
| src_ent	| 1  				|
| dst  		| 0 [0x0]			|
| dst_ent	| 255  				|

| Announce	| 7 fields			|
|---		|---				|
| sys_name	| ccu-lsts-1-23			|
| sys_type	| **CCU**			|
| owner 	| 65535 			|
| lat	        | 0.71881802			|
| lon   	| -0.15192824			|
| height   	| -0.0  			|
| services   	| neptus://0.0.0.0/uid/1466073247597772048/;neptus://0.0.0.0/version/2016.05.0-dev_2016-06-16_rneptus-4.3.0_R16.05-107-g868eff5/;**imc+info://0.0.0.0/version/5.4.8/;imc+udp://10.0.1.23:6001/;imc+tcp://10.0.1.23:6001/;**			|

## Announce (from vehicle with DUNE)
| Header	| 8 fields			|
|---		|---				|
| sync 		| 65108 [0xFE54]		|
| msgid		| 151  				|
| size 		| 330 byte			|
| timestamp	| 2016-jun-16 13:08:47.141 UTC	|
| src  		| **26 [0x1A]** 		|
| src_ent	| 85  				|
| dst  		| 0 [0x0]			|
| dst_ent	| 255  				|

| Announce	| 7 fields			|
|---		|---				|
| sys_name	| lauv-noptilus-1		|
| sys_type	| **UUV**			|
| owner 	| 65535 			|
| lat	        | 0.71881759			|
| lon   	| -0.15193939			|
| height   	| 56.56565  			|
| services   	| dune://0.0.0.0/uid/11979770855084;dune://0.0.0.0/version/2016.05.0;ftp://10.0.10.80:30021/;http://10.0.10.80:8080/dune;**imc+info://0.0.0.0/version/5.4.8;imc+udp://10.0.10.80:6002/;**mc+udp://10.0.10.80:6002/acoustic/operation/Acoustic%20Access%20Controller;imc+udp://10.0.10.80:6002/iridium			|

This message also allows to get some data from the assets, namely its position, its name and IMC ID, and type. The services with the available comms that is available. In the above example, Neptus has TCP and UDP, and the vehicle only UDP. In the services this comm info is the minimum expected.

This received Announce message will trigger Neptus to connect to the vehicle with the available protocol with IMC. The preference is UDP and then TCP (so the vehicle has a TCP server in this case). This means that Neptus will start sending (and expects receiving at the same rate) the [Heartbeat](http://www.lsts.pt/docs/imc/master/Networking.html#heartbeat) message every 1 second. The heartbeat will also allow to have a measure of the connectivity to the vehicle. [EstimatedState](http://www.lsts.pt/docs/imc/master/Navigation.html#estimated-state) is also expected but the frequency can be chosen by the sender vehicle.

The use of the Announce message will free a bit on setting the IPs by hand. But if that is not possible we can set a default IP on Neptus vehicle definition file. This files are located at the “vehicles-defs” folder. It has the name, IMC ID, comms info, and available maneuvers. We can just duplicate one of the existent file and modify it.

The Announce is sent on ports that need to be fixed [30100-30104] on multicast address 224.0.75.69 and by broadcast. This is to allow any system to listen to one of the ports [30100-30104]. This is mandatory and allows for any system to understand who is around. The info on the Announce allows us to understand how and where to connect to that system. The vehicle can use UDP or/and TCP on ANY port. These ports are announced on the Announce message. Despite this can be any port, we for the vehicles/DUNE use the 6002 and for Neptus 6001. Vehicles tend to use mainly UDP and TCP tends only to be available on DUNE for the backseat.

So only the [30100-30104] ports and multicast IP are fixed, the rest as long as you announce it can be flexible.


# IMC ID
The IMC ID is a unique ID that matches to a asset with a unique name. These IDs are available at https://github.com/LSTS/imc/blob/master/IMC_Addresses.xml and follows the scheme descrived at https://github.com/LSTS/imc/blob/master/IMC_Addressing_Scheme.txt.

If you don’t have a IMC ID, apply for one at LSTS.

# Levels of interface
Neptus main interface to the vehicles is the IMC (https://github.com/LSTS/imc) protocol that is documented in http://www.lsts.pt/docs/imc/master/.

So for a perfect connection we have several categories described in the subsections bellow.

## Connection
This is already discussed above in the section **Connecting to Neptus**. The messages involved are:
* [Announce](http://www.lsts.pt/docs/imc/master/Networking.html#announce) (see above the optionality of this message, every 10s)
* [Heartbeat](http://www.lsts.pt/docs/imc/master/Networking.html#heartbeat) (required, periodic, every 1s)

## State
This will described the state related messages to be sent by the vehicles:
* [EstimatedState](http://www.lsts.pt/docs/imc/master/Navigation.html#estimated-state) (required, periodic, send the position and attitude of the vehicle)
* [VehicleState](http://www.lsts.pt/docs/imc/master/Vehicle%20Supervision.html#vehicle-state) (highly advisable, periodic, vehicle sent, 1s)

## Plan Execution and Report
This section is optional, but it serves to allow the execution of mission plans, not only to store it and execute them, but also to get some feedback on its execution.
* [PlanControl](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#plan-control) (required, Neptus sent, used to start and stop a plan, and send quick plans to a vehicle)
* [Abort](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#abort) (optional, Neptus sent, used in case of emergency to stop all activity on the vehicle) 
* [PlanControlState](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#plan-control-state) (required, periodic, send by vehicle, 1s)
* [ManeuverControlState](https://www.lsts.pt/docs/imc/master/Maneuvering.html#maneuver-control-state) (required, periodic, send by vehicle, 1s)
* [PathControlState](https://www.lsts.pt/docs/imc/master/Guidance.html#path-control-state) (required, periodic, send by vehicle, 1s)

There is a notion of a plan database that serves the purpose of storing a list of plans on a vehicle. The implementation is not imposed, and it's governed by the following messages:
* [PlanDB](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#plan-db) (required, query by Neptus, used to interact with the vehicle, there are internal IMC messages used that is described on the definition of the PlanDB message)

Mission plans are used by defining a [PlanSpecification](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#plan-specification). The following parameters can be ignored: Namespace, Plan Variables, Start Actions, End Actions. A plan has maneuvers ([PlanManeuver](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#planmaneuver), again the Start Actions and End Actions can be ignored). The most basic maneuvers should be supported:
* [Goto Maneuver](http://www.lsts.pt/docs/imc/master/Maneuvering.html#goto) 
* [Rows Maneuver](http://www.lsts.pt/docs/imc/master/Maneuvering.html#rows) (optional)
* [Follow Path Maneuver](http://www.lsts.pt/docs/imc/master/Maneuvering.html#followpath) (optional but desired)
* [Station Keeping](http://www.lsts.pt/docs/imc/master/Maneuvering.html#stationkeeping) (desired)

A mission plan defines the transitions between the maneuvers with [PlanTransition](http://www.lsts.pt/docs/imc/master/Plan%20Supervision.html#plan-transition)s. The param Transition actions can be ignored, and in the Transition conditions should be the text “ManeuverIsDone”. See a 2 GoTos plan below in JSON:

```json
{  
   "abbrev":"PlanSpecification",
   "timestamp":1.5106762011927626E9,
   "src":30,
   "src_ent":40,
   "dst":65535,
   "dst_ent":255,
   "plan_id":"plan-line",
   "description":"",
   "vnamespace":"",
   "variables":[  

   ],
   "start_man_id":"Goto1",
   "maneuvers":[  
      {  
         "abbrev":"PlanManeuver",
         "maneuver_id":"Goto1",
         "data":{  
            "abbrev":"Goto",
            "timeout":10000,
            "lat":0.7188198846889762,
            "lon":-0.1519540207916264,
            "z":2,
            "z_units":1,
            "speed":1,
            "speed_units":0,
            "roll":0,
            "pitch":0,
            "yaw":0,
            "custom":""
         },
         "start_actions":[  

         ],
         "end_actions":[  

         ]
      },
      {  
         "abbrev":"PlanManeuver",
         "maneuver_id":"Goto2",
         "data":{  
            "abbrev":"Goto",
            "timeout":10000,
            "lat":0.718797829889274,
            "lon":-0.15193023959532984,
            "z":2,
            "z_units":1,
            "speed":1,
            "speed_units":0,
            "roll":0,
            "pitch":0,
            "yaw":0,
            "custom":""
         },
         "start_actions":[  

         ],
         "end_actions":[  

         ]
      }
   ],
   "transitions":[  
      {  
         "abbrev":"PlanTransition",
         "source_man":"Goto1",
         "dest_man":"Goto2",
         "conditions":"ManeuverIsDone",
         "actions":[  

         ]
      }
   ],
   "start_actions":[  

   ],
   "end_actions":[  

   ]
}

```