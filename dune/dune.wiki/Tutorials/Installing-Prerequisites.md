# Installing Prerequisites

## Required Software

### Linux

* CMake v2.6.0 or greater.

``sudo apt-get install cmake``

* GNU Make or other POSIX Make.

``sudo apt-get install make``

* ISO C++ 98 compliant compiler.

``sudo apt-get install g++``

### Windows
External reference for MinGW and CMake configuration: https://github.com/cpluspluscom/ChessPlusPlus/wiki/MinGW-Build-Tutorial

* GNU Make or other POSIX Make.

1. MinGW GCC: Read "[How to Install MinGW](https://www3.ntu.edu.sg/home/ehchua/programming/howto/Cygwin_HowTo.html#mingw)".

2. Cygwin GCC: Read "[How to Install Cygwin](https://www3.ntu.edu.sg/home/ehchua/programming/howto/Cygwin_HowTo.html#cygwin)". Make sure that you select "gcc", "g++", "gdb", and "make" packages under the "Devel" (Development) category - these packages are not part of the default installation.

In case you choose MinGW, after the installation, navigate to the MinGW/bin folder (e.g., C:\...\mingw-w64\x86_64-4.9.2-posix-seh-rt_v3-rev0\mingw64\bin or C:\MinGW\bin) and find the file make.exe. Copy and paste the make.exe, renaming it to mingw32-make.exe. This will allow CMake to recognize that you have MinGW installed. You should also still have the original make.exe. You will want both.

Add MinGW to your system PATH variable. Using the command line, type the following command and confirm that compiler is correctly called:

``g++ --version``

* ISO C++ 98 compliant compiler.

MinGW GCC (above), Cygwin GCC (above), Visual Studio

* CMake v2.6.0 or greater.

http://www.cmake.org/cmake/resources/software.html (Look under "Binary Distributions" for Windows)

Make sure you choose to add CMake to the system PATH or add it yourself. Using the command line, type the following command and confirm that cmake is correctly called:

``cmake --version``


## Optional Software:

* Python: used to (re)generate IMC source files.

Linux: ``sudo apt-get install python``

Windows: https://www.python.org/downloads/

* Doxygen: used to generate documentation.

Linux: ``sudo apt-get install doxygen``

Windows: http://www.stack.nl/~dimitri/doxygen/download.html#srcbin
