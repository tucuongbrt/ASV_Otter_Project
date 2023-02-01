### Basic plotting in Neptus
Neptus has the capability to plot IMC messages, using the _Real-Time plot_ (found in _View_) in the operator's console toolbar.

In the [DUNE _Task Interactions_ tutorial](https://github.com/LSTS/dune/wiki/Task-Interactions), we displayed the temperature by printing it to the command line. This way of displaying values is only appropriate for debugging purposes, as it is difficult to follow multiple values, and it is difficult to spot changes and trends. Instead, we will use the plotting capabilities of Neptus to display the values. This will also show how you can modify DUNE config parameters from Neptus, in real time.

*	Edit the `prodcon.ini` config file from the _Task Interactions_ tutorial. To interact with Neptus, DUNE needs to run `Transports.Announce` and `Transports.Discovery`. For simplicity, we will pretend that we are a simulated UAV, and add `[Require ../../simulation/uav.ini]` to the start of `prodcon.ini`, since configuration already takes care of Neptus interactions. `prodcon.ini` should now look like this:
```
[Require ../../simulation/uav.ini]

[Tutorials.TempProd/P1]
Enabled = Always
Entity Label = Producer1
Mean value = 37
Standard deviation = 0.5

[Tutorials.TempProd/P2]
Enabled = Always
Entity Label = Producer2
Mean value = 45
Standard deviation = 0.1

[Tutorials.TempCons]
Enabled = Always
Entity Label = Consumer
Target Producer = Producer1

[Transports.Logging]
Enabled = Always
Entity Label = Logger
Transports = Temperature
```
*	Generate configuration file for neptus: Neptus needs to know what parameters are available from a given vehicle, so we need to generate this file and place it in the appropriate folder: `./dune -c development/Tutorials/prodcon -p Simulation -X /path/to/neptus/conf/params`.
*	Run dune: `./dune -c development/Tutorials/prodcon -p Simulation` and open your desired Neptus console.
*	Watch the IMC messages in Neptus: In _View_->_Incomming data_, you should select *x8-00* in the dropdown at the top. Find _Temperature_ in the list on the left. The tabs indicate the different entities that send the _Temperature_ message, so you should see both _Producer1_ and _Producer2_.
*	Display values in real time plot:
    *	Open _View_->_Real-Time plot_, click _Settings_, change the text field to say `addTimeSeries value("Temperature.value")`, and hit the cross.
    *	What happens? The value will jump between the values from the two producers, which is not ideal
    *	Instead, change the _Settings_ text field to 
        ```

        temperature_p1 = value("Temperature.Producer1.value")
        addTimeSeries  temperature_p1
        temperature_p2 = value("Temperature.Producer2.value")
        addTimeSeries temperature_p2
        ```
        Now each of the two producers have their own line in the plot.

**For more details on scripting possibilities in the real-time plugin see this tutorial: [[Real-time plot scripts]]**


**For more details on scripting possibilities in the Mission Review and Analysis (MRA) see this tutorial: [[Mission Analysis and Review Scripts]]**