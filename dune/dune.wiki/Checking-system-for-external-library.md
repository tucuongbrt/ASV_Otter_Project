If your code requires a certain library which can be installed on the OS, like V4L2, this is the way to check if it is available.

First take a look at cmake/Libraries/V4L2.cmake:
```
if(V4L2)
  dune_test_lib(v4l2 v4l2_open)
  dune_test_header(libv4l2.h)

  if(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
    set(DUNE_USING_V4L2 1 CACHE INTERNAL "libv4l2")
  else(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
    set(DUNE_USING_V4L2 0 CACHE INTERNAL "libv4l2")
  endif(DUNE_SYS_HAS_LIB_V4L2 AND DUNE_SYS_HAS_LIBV4L2_H)
endif(V4L2)
```
If the compilation flag V4L2 is set, then it will check if the system has the library and header.

## If you want your code to compile anyways
Look at src/DUNE/Media/VideoCapture.cpp and you can see code that is compiled even if the system does not have V4L2, but throws an error message if you try to run it.
```
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
#  include <libv4l2.h>
#endif
```
and
```
#if defined(DUNE_SYS_HAS_LIBV4L2_H)
      ...
#else
      ...
      throw std::runtime_error("VideoCapture is not yet implemented in this system.");
#endif
```
## If you want your code to compile only if the library is installed
You can use that same flag in the Task.cmake file that goes with your task, making it something like this:
```
if(NOT DUNE_SYS_HAS_LIB_V4L2_H)
  set(TASK_ENABLED FALSE)
endif(NOT DUNE_SYS_HAS_LIB_V4L2_H)
```
This way the task will not even compile.