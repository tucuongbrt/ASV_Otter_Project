The LEDs on the BBB are on GPIOs 53,54,55,56 pin numbers. To access the GPIO pins, we will use the GPIO class in Dune. The definition of the GPIOs is available in src/DUNE/Hardware/GPIO.{hpp,cpp}. We will use the following steps to control LEDs.

* Create a new task, say "GpioLed". Insert "GpioLed" in a folder with a name like "Tutorials". Make sure there's an empty "Task.cmake" besides (so that cmake finds this task). By now, you should have the following namespace:
  - src/Tutorials/GpioLed/Task.{cpp, cmake}

How to create task is describe in [Example 1](https://github.com/LSTS/dune/wiki/Example1).

* Include the header file
```c++ 
#include <DUNE/Hardware/GPIO.hpp>
```

* The GPIOs have two entities - (1) the direction, either input or output and (2) the value. We will first declare an entity of GPIO class inside Task struct as
```c++
struct Task: public DUNE::Tasks::Task
{
  Hardware::GPIO* m_gpio;

  //! Constructor.
  Task(const std::string& name, Tasks::Context& ctx):
    DUNE::Tasks::Task(name, ctx),
    m_gpio(NULL)
  {
     // SetLedBrightness is a IMC message that besides IMC standard fields has
     // "name" in text and "value" in uint8_t. It is commonly used to manipulate
     // LED brightness values, while identifying them by name. For reference you
     // can check src/Power/PCTLv2, src/Actuators/LED4R, or any other task where
     // you find the following message subscription (i.e: when we use bind)
     bind<IMC::SetLedBrightness>(this);
  }

  void
  consume(const IMC::SetLedBrightness* msg)
  {
    // Message pointer can be used if necessary. For this example the GPIO is ON/OFF.
    // This means we actually do not require to use the message. If, for instance,
    // you wish to use the value to set a LED, or a array of LEDs, you can have a
    // single uint8_t task member variable, or an array, respectively, and then
    // dereference the "value" field of msg if "name" is correct:
    //
    //   if (msg->name == <something>)
    //     m_value = msg->value;

    (void)msg;  // I am adding this to avoid compilation warnings for not using msg.
  }
```

In the Task constructor the m_gpio is initialised with NULL. Moreover, when using IMC, always refer to IMC.xml in IMC repository to verify the contents of the message, or check toolchain documentation: [http://lsts.pt/docs/](lsts.pt/docs)

* Using a GPIO is a resource and we need to acquire the resource before using it. 
The task manager, before launching the main method on all tasks, calls a few initialization methods
first (please read the tutorial on the main wiki page). For this instance, onResourceAcquisition() is
usually called to acquire resources (allocate pointers and so on)

```c++
void
onResourceAcquisition(void)
{
  m_gpio = new Hardware::GPIO(53);
  m_gpio->setDirection(Hardware::GPIO::GPIO_DIR_OUTPUT);
  m_gpio->setValue(0);
}
```

The new GPIO(53) will open the GPIO pin 53 and set to direction as output direction with value 1. The LED will take a boolean value. Therefore, we set the value as 0 which represents the off-state of the LED. When the value is 1, then the LED is on.

* Then we must clear the contents on m_gpio once DUNE instance stops. The method onResourceRelease is called when DUNE's task manager stops all tasks.

```c++
void
onResourceRelease(void)
{
  Memory::clear(m_gpio);
}
```
The Memory class is a dune utility which is used to clear pointers and reset them to NULL (m_gpio in this example).

* We have now written all the necessary code to acquire the GPIO and release it upon exit. Now, we will manipulate in the main loop to set the value as 1 (turn on), wait for 1 second and then set the value to 0 (turn off). The code is given below.

```c++
void
onMain(void)
{
  while (!stopping())
  {
    // Task method that will allow IMC messages to consumed by this task.
    consumeMessages()

    // protection to avoid dereferencing a NULL pointer
    if (m_gpio == NULL)
      return;

    m_gpio->setValue(1);
    Delay::wait(1.0);
    m_gpio->setValue(0);
    Delay::wait(1.0);
  }
}
```

* To run this task we will now create a configuration file **gpioled.ini** in etc/ folder. Make sure all configuration files included/required are with correct path:
```c++
[Require common/transports.ini]

[Tutorials.GpioLed]
Enabled      = Always
Entity Label = GPIO
```

* The Task is now ready and you can compile it. Verify is task is being built. If not,  call "make rebuild_cache" and re-build.

* In DUNE build folder, run
```c++
  ./dune -c gpioled -p Simulation
```

* Once it is running, verify the output to guarantee the task is being started. You should see a message like
"[Tutorials.GpioLed] >> starting". You can check the state of the entities in Neptus, or in a web browser by
checking DUNE's HTTP server - go to http://localhost:8080 (or <ip>:8080 if you're running in another host in the LAN)

* GPIO should be with "BOOT" entity state. Try adding the following code once resources are acquired, compile again and re-run, and you should see now that the task is active. Please refer to IMC (file IMC.xml) to verify other possible states of IMC::EntityState.
```c++
  setEntityState(IMC::EntityState::ESTA_NORMAL, Status::CODE_ACTIVE);
```