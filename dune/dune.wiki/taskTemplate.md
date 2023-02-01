
```
namespace HelloWorld
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

    //! Release resources.
    void
    onResourceRelease(void)
    {
    }

    //! Main loop.
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

DUNE_TASK

```