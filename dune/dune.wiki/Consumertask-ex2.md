In this task, we will compare the "Entity label" of the sender with the value of the "Target producer" in the "ini" file, and then consume the temperature value produced. We will first create a 'Cons' task. For this, execute the following command

``DH> python programs/scripts/dune-create-task.py . DuneAuthor Tutorials/TempCons``


This will create TempCons task. Go to the TempCons directory and open the Task.cpp using a text editor so that you can make changes to it.
````
#include <DUNE/DUNE.hpp>

namespace Tutorials
{
  namespace TempCons
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      // Parameters.
      std::string m_trg_prod;

      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
       param("Target Producer", m_trg_prod)
        .description("Target producer to read from")
        .defaultValue("Producer");

        bind<IMC::Temperature>(this);
      }

      void
      consume(const IMC::Temperature* msg)
      {
	//if (m_trg_prod == msg.get(SourceEntity))
	if (m_trg_prod == resolveEntity(msg->getSourceEntity()))
	{
          inf("Source (DUNE instance) ID is: %d", msg->getSource());
          inf("Source entity (Task instance) ID is: %d", msg->getSourceEntity());
	  inf("Temperature is %f, from %s", msg->value, resolveEntity(msg->getSourceEntity()).c_str());
        }
      }

      void
      onMain(void)
      {
        while (!stopping())
        {
          waitForMessages(1.0);
        }
      }
    };
  }
}
DUNE_TASK
````


[Example2 main page] (https://github.com/LSTS/dune/wiki/Example2) <br >
[Next section: Producer and Consumer Task interaction] (https://github.com/LSTS/dune/wiki/Producer-and-consumer-task-interaction-ex2)