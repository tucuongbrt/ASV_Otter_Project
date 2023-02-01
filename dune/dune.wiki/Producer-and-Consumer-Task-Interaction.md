Open a new Terminal Window.
We will now show how to bind [Producer Task](https://github.com/LSTS/dune/wiki/producerTask) and [Consumer Task](https://github.com/LSTS/dune/wiki/consumerTask),  where the consumer task will take the temperature value and display it on the screen.

For producer and consumer tasks to interact, each must know the existence of the other task. For this, we will concatenate the producer and consumer ini files to create a new file prodcon.ini that has the following content.
Create prodcon.ini file in DH>/etc/development folder. In this folder include the contents as given below

**Modifying the prodcon.ini file as**
````
[Tutorials.TempProd]
Enabled = Always
Entity Label = Producer

[Tutorials.TempCons]
Enabled = Always
Entity Label = Consumer

[Transports.Logging]
Enabled = Always
Entity Label = Logger
Transports = Temperature
````
When we execute the prodcon.ini in the build directory, then the output can be seen as
````
[2013/06/04 17:02:18] - MSG [Tutorials.TempCons] >> starting
[2013/06/04 17:02:18] - MSG [Transports.Logging] >> log started '20130604/170218_idle'
[2013/06/04 17:02:18] - MSG [Tutorials.TempProd] >> starting
[2013/06/04 17:02:18] - MSG [Tutorials.TempCons] >> temperature is 21.000000
[2013/06/04 17:02:19] - MSG [Tutorials.TempCons] >> temperature is 22.000000
````

[Example1 main page] (https://github.com/LSTS/dune/wiki/Example1)  
[DUNE Wiki] (https://github.com/LSTS/dune/wiki)