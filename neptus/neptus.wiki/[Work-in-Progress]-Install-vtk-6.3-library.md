### Install the Visualization toolkit on your OS
The Visualization toolkit (Kitware) - [http://www.vtk.org/](http://www.vtk.org/) - open-source software for 3D computer graphics, image processing and visualization.

## Relevant Information
- VTK usage on Neptus was only tested with vtk 6.3 versions, latest version may not work properly.

## Ubuntu

sudo apt-get install libvtk6.3 libvtk-java

## Other distros

Download [this compressed file](https://drive.google.com/open?id=0B2Vm00ekRkxlbm9wYnFDNmhnRzQ) and extract it into your Neptus folder.

## Windows
(VTK compiled using MinGW-w64)
### For Win 64 bits

 - You can install the following [VTK-6.3.0-x64-64bit.exe](https://drive.google.com/open?id=0B2Vm00ekRkxlTGY4RmZBUFpUNU0)

### Compile it yourself to install it

Operative System we used: Windows 10 x64
## Download/Install

 - Java JDK 1.8.0 build 131 (oracle.com)

 - Apache Ant v1.10.1 (ant.apache.org) |
_Defined JAVA_HOME and ANT_HOME_
_(www.mkyong.com/ant/how-to-install-apache-ant-on-windows/) |_
_Define ANT_OPTS=”-Xms10m -Xmx912m”_

 - CMake v3.9.1 x64 (cmake.org) |
_Choose “Add to system PATH” when asked during installation_

 - Make v3.81 (gnuwin32.sourceforge.net) |
_Add “...\bin” folder to “Path” in Environment Variables_

 - Win-builds v1.5.0 (win-builds.org) |
_Choose “x86-64”_
_Hit “Process”_
_Add “...\bin” folder to “Path” in Environment Variables_

## Run

### CMake (GUI)
 - Choose source and build locations
 - Press “Configure”
 - Choose “MinGW Makefiles” and “Use default native compilers”
 - After processing the files, the option should be highlighted in red
 - Tick “VTK_WRAP_JAVA”
 - Press “Configure” again
 - After processing the files, the options highlighted in red should be less
 - Press “Configure” again until there is no red left
 - Press “Generate”

### Make VTK6.3
 - Open a Command Prompt window
 - Go to the build directory
 - Run “make all”
 - Wait until it finishes (can take over half an hour) |
_NOTE: We came across an error in a function called 'xmlModulePlatformOpen', in the file ‘xmlmodule.c’ stating that 'RTLD_NOW' is undeclared. We were required to declare it in the file in question. The value for 'RTLD_NOW' can be found in the header located in the MinGW sub-folder “...\include\evil-1\dlfcn.h”. In our case the declaration is “# define RTLD_NOW     0x00002”. Add this in the file ‘xmlmodule.c’, before the function 'xmlModulePlatformOpen'._
![Terminal com erro](https://drive.google.com/a/lsts.pt/uc?id=0B2Vm00ekRkxlRjQxVjhkMnZSVWs&s=s.jpg)
 - Open a Command Prompt window as an Administrator
 - Go to the build directory
 - Run “make install”

## Create installer

We used NSIS ([nsis.sourceforge.net](nsis.sourceforge.net)). We included the Mingw-w64 v3.3.0 library dependencies below in the VTK lib sub-folder.

Mingw-w64 v3.3.0 (win-builds.org)
 - Library dependencies found in MinGW bin sub-folder:
   - LIBGCC_S_SEH-1.DLL
   - LIBSTDC++-6.DLL
   - LIBWINPTHREAD-1.DLL
   - LIBDL-1.DLL
   - LIBEVIL-1.DLL
