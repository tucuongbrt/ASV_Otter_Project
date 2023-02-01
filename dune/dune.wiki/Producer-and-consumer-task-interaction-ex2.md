Create prodcon.ini file in DH>/etc/development/Tutorials folder. In this folder include the contents as given below 


**Modifying the prodcon.ini file as**
````
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
````
When we execute the prodcon.ini in the build directory, then the output can be seen as
````
[2013/09/05 12:42:13] - MSG [Tutorials.TempProd/P1] >> Starting: Producer1
[2013/09/05 12:42:13] - MSG [Tutorials.TempProd/P2] >> Starting: Producer2
[2013/09/05 12:42:13] - MSG [Transports.Logging] >> starting
[2013/09/05 12:42:13] - MSG [Tutorials.TempCons] >> starting
[2013/09/05 12:42:13] - MSG [Tutorials.TempProd/P1] >> starting
[2013/09/05 12:42:13] - MSG [Transports.Logging] >> log started '20130905/124213_idle'
[2013/09/05 12:42:13] - MSG [Tutorials.TempProd/P2] >> starting
[2013/09/05 12:42:14] - MSG [Tutorials.TempCons] >> Source (DUNE instance) ID is: 65535
[2013/09/05 12:42:14] - MSG [Tutorials.TempCons] >> Source entity (Task instance) ID is: 6
[2013/09/05 12:42:14] - MSG [Tutorials.TempCons] >> Temperature is 37.000000, from Producer1
````
[Example2 main page] (https://github.com/LSTS/dune/wiki/Example2)  
[DUNE Wiki] (https://github.com/LSTS/dune/wiki)