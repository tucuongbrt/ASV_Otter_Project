In this task, we will consume the temperature value produced in the [producer task](https://github.com/LSTS/dune/wiki/producerTask). We will first create a 'Cons' task. For this, execute the following command

``DH> python programs/scripts/dune-create-task.py . DuneAuthor Tutorials/TempCons``


This will create TempCons task. Go to the TempCons directory and open the Task.cpp using a text editor so that you can make changes to it. To use the temperature value produced by the [producer task](https://github.com/LSTS/dune/wiki/producerTask) we need first to bind the message from IMC and write a consume method.

First binding the value from the IMC message, for this include `bind<IMC::Temperature>(this);` in the constructor. 

```c++
Task(const std::string& name, Tasks::Context& ctx):
  DUNE::Tasks::Task(name, ctx)
{
  bind<IMC::Temperature>(this);
}
```

Then create a consumer method before the main loop. The following is the consumer method
```c++
void
consume(const IMC::Temperature* msg)
{
  inf("temperature is %f", msg->value);
}
```
(The function `inf` prints *inf*ormation to the console.)

## Compiling the consumer task
In order to compile the consumer task, follow the instructions of the producer task.  

````
cd DBuild>
DBuild>$ make rebuild_cache
DBuild>$ make
````
This will compile the consumer task.

## Testing the consumer task
Create consumer.ini file in DH>/etc/development folder. In this folder include the contents as given below

````
[Include ../common/transports.ini]

[Tutorials.TempCons]
Enabled = Always
Entity Label = Consumer

[Transports.Logging]
Enabled = Always
Entity Label = Logger
Transports = Temperature

````
The first line `[Include ..]` includes the transports.ini file into the current file. `[Tutorials.TempCons]` directs the task towards the _TempCons_ directory. `Enabled = Always` tells that the task is always enabled. `Entity Label = Consumer` informs that this task is a consumer. For the entity label there is no need provide in the Task.cpp file, rather dune takes care of the entity label.

Then run the command

````
DBuild>$ ./dune -c ../etc/development/consumer

````

Upon execution you can see the output as:

````
[2013/05/31 17:57:10] - MSG [Transports.Logging] >> starting
[2013/05/31 17:57:10] - MSG [Tutorials.TempCons] >> starting
[2013/05/31 17:57:10] - MSG [Transports.Logging] >> log started '20130531/175710_idle'
````
We can see that the tasks _Tutorials.TempCons_ and _Transports.Logging_ have started.

[Example1 main page] (https://github.com/LSTS/dune/wiki/Example1)  
[Next section: Producer and Consumer Task interaction] (https://github.com/LSTS/dune/wiki/Producer-and-Consumer-Task-Interaction)