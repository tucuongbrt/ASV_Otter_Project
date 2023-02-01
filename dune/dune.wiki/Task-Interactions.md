This example is similar to the "How to create tasks" with the addition of: <br />

1. The temperature value is pulled from the "ini" file instead of hard coding it. <br />
2. Calling two producer tasks. <br />
3. Let the consumer choose one of the producers then display the temperature. <br />
<br />
The changes in the code will be as follows:

* [Producer Task](https://github.com/LSTS/dune/wiki/Producertask-ex2): will pull the temperature value from the "ini" file then it will be sent as an IMC message. <br />
* [Consumer Task](https://github.com/LSTS/dune/wiki/Consumertask-ex2): will read the target producer from the "ini" then will search for the variable "temperature" in the BUS, if the "Entity Label" matches the "Target Producer" it will print it on screen. <br />
* [Producer and Consumer Task interaction](https://github.com/LSTS/dune/wiki/Producer-and-consumer-task-interaction-ex2): Here, we create the "ini" file with the required fields. <br />