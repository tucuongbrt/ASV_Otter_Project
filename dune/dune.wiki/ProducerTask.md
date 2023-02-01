We will create a task that will produce temperature value.

First we will create a task using the [dune_create_task script](https://github.com/LSTS/dune/wiki/How-to-create-tasks). Execute the following command

``DH> python programs/scripts/dune-create-task.py . DuneAuthor Tutorials/TempProd``


This will create TempProd task that produces temperature value. This value is dispatched to the message bus. For this, open the DH>src/Tutorials/TempProd/Task.cpp and write the following code in the main loop

    void
    onMain(void)
    {
      IMC::Temperature msg;   // use temperature message from IMC 
      msg.value = 20;         // Initialize the temperature value.

      while (!stopping())
      {
        msg.value += 1;      // increment the value just to see the output	
        dispatch(msg);       // Dispatch the value to the message bus
        Delay::wait(1.0);    // Wait doing nothing.
      }
    }

The above snippet will produce a temperature value and dispatch to the message bus. Now, we will use this message in the [consume task](https://github.com/LSTS/dune/wiki/ConsumerTask).

## Compiling the producer task
In order to compile the producer task, go to the build folder where dune was built and execute make rebuild_cache command to include producer task into the task list. Then followed by make command to compile it as shown below. 

````
cd DBuild>
DBuild>$ make rebuild_cache
DBuild>$ make
````
This will compile the producer task.

## Testing the producer task
After compiling we need to now test the task to check its working. For this, create producer.ini file in DH>/etc/development folder. In this folder include the contents as given below

````
[Include ../common/transports.ini]

[Tutorials.TempProd]
Enabled = Always
Entity Label = Producer

[Transports.Logging]
Enabled = Always
Entity Label = Logger
Transports = Temperature

````
The first line ``[Include ..]`` includes the transports.ini file into the current file. ``[Tutorials.TempProd]`` directs the task towards the _TempProd_ directory to start an instance of that task. ``Enabled = Always`` tells that the task is always enabled, i.e., tells DUNE to use that task. ``Entity Label = Producer`` informs that this particular instance of the task _TempProd_ is named _Producer_. For the entity label there is no need to provide handling code inside the Task.cpp file. Rather dune takes care of the entity label.
The entity label is important for debugging, to get meaningful logs, and in the case where we want to have two instances of the task running simultaneously.

Then run the command

````
DBuild>$ ./dune -c ../etc/development/producer

````

Upon execution you can see the output as:

````
[2013/05/31 17:40:46] - MSG [Transports.Logging] >> starting
[2013/05/31 17:40:46] - MSG [Tutorials.TempProd] >> starting
[2013/05/31 17:40:46] - MSG [Transports.Logging] >> log started '20130531/174046_idle'

Alternatively, the output might look like:
[2013/06/18 06:38:48] - MSG [Transports.Cache] >> starting
[2013/06/18 06:38:48] - MSG [Transports.HTTP] >> starting
[2013/06/18 06:38:48] - MSG [Transports.LogBook] >> starting
[2013/06/18 06:38:48] - MSG [Transports.HTTP] >> listening on 0.0.0.0:8080
[2013/06/18 06:38:48] - MSG [Transports.Logging] >> starting
[2013/06/18 06:38:48] - MSG [Tutorials.TempProd] >> starting
[2013/06/18 06:38:48] - MSG [Transports.Logging] >> log started '20130618/063848_idle'

````
We can see that the task _Tutorials.TempProd_ has started.

Now you can open a new terminal window and continue with the next set of commands for Consumer (next tutorial)

[Example1 main page] (https://github.com/LSTS/dune/wiki/Example1)  
[Next Section: Consumer Task] (https://github.com/LSTS/dune/wiki/ConsumerTask)