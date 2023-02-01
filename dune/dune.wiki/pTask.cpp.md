```c++
#include <DUNE/DUNE.hpp>

namespace Tutorials
{
  namespace TempProd
  {
    using DUNE_NAMESPACES;

    struct Task: public DUNE::Tasks::Task
    {
      //! Constructor.
      //! @param[in] name task name.
      //! @param[in] ctx context.
      Task(const std::string& name, Tasks::Context& ctx):
        DUNE::Tasks::Task(name, ctx)
      {
	bind<IMC::Announce>(this);	
      }

      //! Update internal state with new parameter values.
      void
      onUpdateParameters(void)
      {
      }

      //! Reserve entity identifiers.
      void
      onEntityReservation(void)
      {
      }

      //! Resolve entity names.
      void
      onEntityResolution(void)
      {
      }

      //! Acquire resources.
      void
      onResourceAcquisition(void)
      {
      }

      //! Initialize resources.
      void
      onResourceInitialization(void)
      {
      }

      void
      consume(const IMC::Announce* msg)
      {
	inf("received announce from %s", msg->sys_name.c_str());	
      }


      //! Release resources.
      void
      onResourceRelease(void)
      {
      }

      //! Main loop.
      void
      onMain(void)
      {IMC::Temperature msg; // use temperature message from IMC 
	msg.value = 20;     // Initialize the temperature value.
      while (!stopping())
      {
	msg.value = msg.value + 1;    // increment the value just to see the output    
        dispatch(msg);                // Dispatch the value to the message bus
        Delay::wait(1.0);             // Wait doing nothing.
      }

      }
    };
  }
}

DUNE_TASK

```