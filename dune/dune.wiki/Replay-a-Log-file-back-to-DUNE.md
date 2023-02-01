DUNE has the capability to pick a past log file, open it and replay it's message content back to a running DUNE instance. This capability is performed by **Transports/Replay**

## Starting DUNE

There are several replay configurations available in folder etc/testing/replays

For example, let's use _sgnav-replay_. To start a DUNE instance using this configuration file just start:

`./dune -c testing/replays/sgnav-replay`

DUNE will start with just a basic set of tasks. 

## Configuration

Transports/Replay contains two very important fields:

* **Replay Messages**: list with all the messages that will be replayed.
* **Entities**: list of entities reserved during DUNE initialization, that will be used to identify replayed message entities. 

## Select LOG

"Load at Start": <log path>/Data.lsf

or during runtime:

`./dune-sendmsg localhost 6002 ReplayControl 0 <log path>/Data.lsf`

Finally, you can have multiple DUNE instances running. Since they open different UDP ports (6002, 6003, 6004..) different log files can be sent to all instances running at the same time.