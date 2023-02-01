## DUNE: "Hello world"
This is a simple example on how to create and use tasks in DUNE (with IMC messages).

First assume:
* Dune home directory as $home/dune 
* We will use the shortcut "DH>" for Dune home directory 
* DBuild> = $home/dune_build (DUNE compilation directory. Try to avoid having the compilation directory inside the repository directory tree)

There are two parts in this exercise:
* [Understand how to create tasks](https://github.com/LSTS/dune/wiki/How-to-create-tasks)
* Create simple tasks to produce a variable (representing some sensor input), consume a variable (representing functions that use the sensor input), and binding these two (produce and consume) tasks for a meaningful interaction.
 
We will use temperature value for producing and consuming tasks. 
* [Producer Task](https://github.com/LSTS/dune/wiki/ProducerTask): will create a static variable "temperature" and set a value for it then it will be send as an IMC message.
* [Consumer Task](https://github.com/LSTS/dune/wiki/ConsumerTask): will keep searching in the BUS for the variable "temperature" and print it on the screen.
* [Producer and Consumer Task interaction](https://github.com/LSTS/dune/wiki/Producer-and-Consumer-Task-Interaction): Here, the consumer will consume the temperature variable from the producer task to display the temperature value. Later we will do advanced task interactions.
 



