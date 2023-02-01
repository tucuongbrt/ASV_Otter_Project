_Requirements | [[Compiling]] | [[Running]] | [[Installing]]_

In order to run Neptus, you should have at least 1 GB of available RAM memory, a 1GHz CPU and 512 MB of hard drive space. For better performance, it is recommended that you have 2 GB of available RAM memory, an Intel Core i3 or better CPU, an accelerated graphics card (for 3D visualizations) and extra disk space for storing incoming vehicle data.

Neptus supports both 32 and 64 bit architectures and is continuously tested under Windows and Linux operating systems.

Neptus requires a Java Runtime (version 8 or 11, recommend 11) for execution. For compilation, Neptus requires a Java Development Kit (version 8 or 11, recommend 11). You can always download the latest Java release from [here](https://adoptium.net/) or [here](http://www.oracle.com/technetwork/java/javase/downloads/index.html).

(Old recommendation steps for installing Java Development Kit under Ubuntu, can be found [here](http://www.webupd8.org/2012/09/install-oracle-java-8-in-ubuntu-via-ppa.html).)

For newer version of Neptus which compiles with Gradle, Java 11 can be used, and is preferable.

Neptus requires Gradle build system (**as from October 23rd, 2020**) for compilation (no installation needed). In addition you have to have git on the PATH in the shell you run Gradle. Older versions needs Ant instead,
