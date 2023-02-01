# Ardupilot

Follow the guide in [http://dev.ardupilot.com/wiki/setting-up-sitl-on-linux/](http://dev.ardupilot.com/wiki/setting-up-sitl-on-linux/).

# DUNE

After the simulation is running without issues, start DUNE.
To connect to the Ardupilot SITL interface you can use any configuration that includes uav/ardupilot.ini, just set the IP address accordingly (127.0.0.1 if you are running ArduPilot on the same machine) and the port to 5762:

    [Control.UAV.Ardupilot/AP-SIL]
    Enabled                                    = AP-SIL
    Entity Label                               = Autopilot
    TCP - Address                              = 127.0.0.1
    TCP - Port                                 = 5762

For example:

    $ ./dune -c sedona -p AP-SIL

You can now send plans to the vehicle through Neptus.

You have to **arm the throttle and set the ArduPilot mode to Auto** in the MAVproxy console in order for it to take-off.