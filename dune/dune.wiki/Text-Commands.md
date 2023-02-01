# Introduction
The **Autonomy.TextActions** DUNE task supports processing of text commands that can be received over SMS, Iridium or any other compatible transport.

The vehicle will always _try_ to reply to commands with a response (for a default time of 60 seconds). However if the vehicle dives or if for some other reason GSM fails, the response might not be delivered to the user.

## ABORT
This command aborts the execution of any ongoing plan. It received no arguments.

## INFO
Retrieve information about plan being executed. It receives no arguments and responses can be one of the following:
* ```Vehicle is ready.```: Vehicle is ready to execute its first plan.
* ```Initializing <plan_id>.```: Vehicle is in calibration mode, starting a plan.
* ```Executing <plan_id> / <man_id>. ETA: <eta in seconds> (<progress>%)```: Vehicle is currently executing a plan.
* ```Finished <plan_id>.```: Vehicle has finished executing a plan successfully.
* ```Failed to exec <plan_id>: <reason>```: Vehicle has failed to execute its plan.

## ERRORS
Retrieve a simple vehicle diagnostic. It receives no arguments and responses can be one of the following:
* ```Vehicle has no reported errors.```
* ```Errors: <entities_in_error>```: Listing all entities that present errors.

## START
Order execution of a plan already in the Plan Database of the vehicle. It receives, as its sole argument the name of the plan to be executed.

Example:
 *  ```start plan1```, to which the vehicle should reply ```Started execution of plan1.```.

## FORCE
Order execution of a plan **ignoring any errors**. This command is very similar to _START_ but, in this case the vehicle will try to execute no matter what.

Example:
 *  ```force plan1```, to which the vehicle should reply ```Started execution of plan1 ignoring errors.```.

## RESUME
Order execution of a plan, starting from a specific maneuver id. It will generate a new plan that has the given maneuver id as the starting maneuver and then will proceed to execute it.

Example:
 * ```resume plan1 Goto2```, will create a new plan named **plan1-Goto2** that starts in maneuver **Goto2** and will execute the plan.
 
## DIVE
Order the vehicle to dive at its current position (using a Loiter maneuver). It takes no arguments. By default, this will make the vehicle dive at 5 meters of depth.

## SURFACE
Order the vehicle to surface at its current position (using a StationKeeping maneuver). It takes no arguments.

## DISLODGE
Order the vehicle to run the _dislodge_ behavior, consisting of reversing the direction of the propeller multiple times until it starts rising back to the surface.

## GO
Order the vehicle to go to a given waypoint (using a Goto maneuver). Arguments are in the form ```lat=<latitude>;lon=<longitude>;speed=<speed>;depth=<depth>``` or, alternatively, the location can also be given by name.

Examples:
 *  ```go lat=41.34223;lon=-8.2343;speed=1.0;depth=0```: Go to coordinates [lat,lon], expressed in decimal degrees, travelling at 1.0 m/s and at the surface.
 * ```go lat=41.34223;lon=-8.2343```: Go to coordinates [lat,lon], expressed in decimal degrees, at surface and using default speed.
 * ```go lat=41.34223;lon=-8.2343;depth=2.0```: Go to coordinates [lat,lon], expressed in decimal degrees, at 2.0 meters depth and using default speed.
 * ```go loc=manta-11```: Go to last known position of the system named _manta-11_ travelling at the surface and using default speed. The position is determined from received _Announce_ messages.
 * ```go loc=benthos2```: Go to the position of the beacon named _benthos2_, as found in the current LBL configuration (last received _LblConfig_).

## SK
Order the vehicle to go to a given waypoint (using a StationKeeping maneuver). Arguments are in the form ```lat=<latitude>;lon=<longitude>;speed=<speed>;depth=<depth>``` or, alternatively, the location can also be given by name.

Examples:
 *  ```sk lat=41.34223;lon=-8.2343;speed=1.0;depth=0```: Go and stay at coordinates [lat,lon], expressed in decimal degrees, travelling at 1.0 m/s and at the surface.
 * ```sk lat=41.34223;lon=-8.2343```: Go and stay at coordinates [lat,lon], expressed in decimal degrees, at surface and using default speed.
 * ```sk lat=41.34223;lon=-8.2343;depth=2.0```: Go and stay at coordinates [lat,lon], expressed in decimal degrees, at 2.0 meters depth and using default speed.
 * ```sk loc=manta-11```: Go and stay at last known position of the system named _manta-11_ travelling at the surface and using default speed. The position is determined from received _Announce_ messages.
 * ```sk loc=benthos2```: Go and stay at the position of the beacon named _benthos2_, as found in the current LBL configuration (last received _LblConfig_).

## PHONE
Changes the current emergency phone number to the sender of the text message, if no arguments are provided. If the command is followed by an argument, the same is set as the new emergency number instead. In case the number is provided it must be specified in the first argument of the command with no spaces between the digits.

Examples:
* ```phone```: The emergency number will become the origin of this message.
* ```phone +351919129123```: The emergency number becomes **+351919129123**.
* ```phone 00351919129123```

## REBOOT
Reboot the system remotely. It can be used to reboot just DUNE, the main CPU or auxiliary CPU.

Examples:
* ```reboot```: Reboots the main CPU.
* ```reboot aux```: Reboots the auxiliary CPU.
* ```reboot dune```: Reboots DUNE without rebooting the CPU.

## HELP
Sends the user a link to this page.