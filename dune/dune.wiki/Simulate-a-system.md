DUNE has the capability to simulate a couple of robots.
DUNE can simulate the behavior of AUVs, UAV, ROVs and also a very basic ASV (with differential actuation)

## Starting DUNE

To start a DUNE instance using a configuration file just start:

`./dune -c <configuration file> -p Simulation`

DUNE will start with a basic set of tasks that can be found in `etc/<configuration file>`.

To simulate an AUV use one of the lauv-*.ini files. To simulate a ROV, use adamastor.ini. Finally, to simulate an UAV, you can use one of the x8-*.ini files. Although not in current master branch, vehicles of type asv can be simulated as well, and there are already a default set of parameters.
Do not include the file extension of the .ini file.

### Simulation Engines.

*V*ehicle *Sim*ulator (located in src/Simulators/VSIM) has an ODE that simulates the dynamics of AUVs, ROVs or ASV. 
You can check default parameters in file etc/common/vsim-models.ini and override them if wanted.

UAVs are simulated using task src/Simlators/UAV.







Although we've had other configuration files in the past 