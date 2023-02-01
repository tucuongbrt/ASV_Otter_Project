Assume *DUNE_PATH* = $home/dune

First, we start by creating the simple HelloWorld task. The general structure of creating a task is 

` 
DUNE_PATH python programs/scripts/dune-create-task.py DUNE_PATH AuthorName NameOfTheTask
`

where, executing the python script 'dune-create-task.py' located in the *DUNE_PATH*/programs/scripts will create a task with task name "NameOfTheTask" in the Dune home directory (*DUNE_PATH*). The AuthorName is to identify the author who is creating the task. The task will be created in the source directory *DUNE_PATH*/src/

For example, executing the following command  
`
DUNE_PATH python programs/scripts/dune-create-task.py . DuneAuthor HelloWorld
`

will generate the output

`
Created DUNE task in './src/HelloWorld'
`

Then, open the file *DUNE_PATH* /src/HelloWorld/Task.cpp in a text editor and you can see the [task template](https://github.com/LSTS/dune/wiki/taskTemplate).

Usually we create a task in a specific context, as _Maneuver_, _Control_, or _Simulators_.
Let us create a task to track a beacon as a maneuver, i.e., as a task in the _Maneuver_ context:

`
DUNE_PATH python programs/scripts/dune-create-task.py DUNE_PATH "Dune Author" Maneuver/BeaconTrack
`

[Example1 main page] (https://github.com/LSTS/dune/wiki/Example1)  
[Next section: ProducerTask] (https://github.com/LSTS/dune/wiki/ProducerTask)