This is a guide to Dune-Matlab interaction. An example of Dune sending a signal and Matlab receiving it is provided. 

## Requirements
The following are the requirements for this task.
* Updated **libimc.jar** - To obtain the updated version of it, see "How to get libimc.jar" below
* Updated Dune
* Ubuntu 10.04 (or newer) or similar distribution with kernel 2.6 (or newer)
* MATLAB 


## How to get libimc.jar
Check if your libimc.jar has version 5.3.0. If not follow the steps below to get the updated version. 

1) Have **JDK 1.6** or later and **ant** installed

2) Clone the repository in https://github.com/LSTS/imcjava

3) (optional) Update the IMC definitions found in <clone_dir>/src/msgdefs/IMC.xml

4) Change directory to the newly cloned repository: ``cd <clone_dir>``

5) Generate the new message classes: ``ant generated``

6) Generate a new distribution: ``ant dist``

7) (optional) Rename the file to libimc.jar: ``mv dist/imc-src-* libimc.jar``

If you get a JDK related error during compilation, try updating it to the latest version. 
If you get an UTF-8 related error during compilation, change encoding in IMC.xml to iso-8859-1.


## Example (using the producer-consumer task) 
We are going to try the interaction using the [producer-consumer task] (https://github.com/LSTS/dune/wiki/producerTask) example introduced before. 

### Dune sending a message, Matlab receiving
Open your _prodcon.ini_ and add following lines:
````
[Transports.UDP]
Enabled 		= Always
Entity Label 	= UDP
Transports 		= Temperature
Local Port 		= 6002
Static Destinations 	= 127.0.0.1:6006
````
Here, 6002 is designated port of Dune, and 6006 is the port of Matlab. Change the IP address of the destination if you need to. 

Run _prodcon.ini_ in Dune: ``DBuild>$ ./dune -c ../etc/development/prodcon``.
Dune should now be creating increasing values of temperature with increment of 1 every second and sending them to the destination port. 

Open the Matlab and run the following commands: 
````
javaaddpath('yourpath/libimc.jar')
import pt.lsts.imc.*
import pt.lsts.imc.net.*
conn = StaticIMCConnection('127.0.0.1', 6002, 6006);
temp = conn.recv('Temperature',2000);
tempvalue = temp.getValue;
````
This should return the temperature value at the time Matlab receives the signal.  

### Matlab sending a message, Dune receiving
Now, let's try to use Matlab as the producer of the above task. In Matlab, we will produce the temperature message that updates every second and send it to Dune which will report the temperature values on screen. 

Open up _consumer.ini_ and insert following lines:
````
[Transports.UDP]
Enabled 		= Always
Entity Label 	= UDP
Transports 		= Temperature
Local Port 		= 6002
Static Destinations 	= 127.0.0.1:6006
````
Run _consumer.ini_ in Dune: ``DBuild>$ ./dune -c ../etc/development/consumer``.

In Matlab, create an _m_ file as follows:
````
clear; clc; close all;
javaaddpath('libimc.jar')
import pt.lsts.imc.*
import pt.lsts.imc.net.*
conn = StaticIMCConnection('127.0.0.1', 6002, 6006);
temp = IMCMessage('Temperature');

value = 20

for i = 1:100
    temp.setValue('value', value);
    conn.send(temp);
    pause(1);
    value = value + 1
end
```` 
Run this in Matlab and you will see Dune reporting these temperature values just as it did before. 

To learn more about the Matlab syntax compatible with Dune, extract _libimc.jar_ and look at java files in folder pt/up/fe/dceg/neptus/imc and pt/up/fe/dceg/neptus/imc/net. 
