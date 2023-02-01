### Install Java Development Kit
In order to run Neptus, first you need to install a Java version 11 runtime environment (JRE), OpenJDK works well. Moreover, if you want to  extend Neptus, you need to have a Java Development Kit (JDK) so that you can compile and package your code into a jar plug-in. So _download the latest Java JDK 11 from [OpenJDK](https://openjdk.org/install/), [Adoptium](https://adoptium.net/) or [Oracle](http://www.oracle.com/technetwork/java/javase/downloads/index.html)_.

Check [here](https://github.com/LSTS/neptus/blob/develop/BUILD.md) for updated development notes. (Transcribed bellow.)

## IDE

### IntelliJ

Just import the Gradle project to Idea. To run or debug be sure to use the classpath from
`neptus.main`. At the moment you need to not delegate the Gradle tasks run to Gradle but
to IntelliJ.

* `./gradlew cleanIdeaBuild` to delete the project and build folders

To debug run the Gradle task `run` in debug mode.

### Eclipse

| :warning: WARNING: It is a bit tricky with Eclipse to compile and debug. Recommend the IntelliJ IDE. |
| --- |

To use in Eclipse don't create the project but import the Gradle project into Eclipse.

* `./gradlew eclipse` to create the project (can be used, but configure the debug runs still WIP)
* `./gradlew cleanEclipseBuild` to delete the project build folders
* `./gradlew cleanEclipse` to delete the project

This is sometimes not stable. If problems with building do:

* If problem with duplicated resource on neptus project do:
    ** `./gradlew cleanEclipseBuild createEclipseBuild`

## Plugins

The plugins are expected to reside on folders with names `plugins-dev<*>`. On the 'plugins-dev'
are the plugins offer by Neptus. The extra `plugins-dev*` folders if exist are read and
instrumented for Gradle (should be on separated Git repositories).

Each plugins is instrumented by Gradle in its `jar` task for its output to be placed on the
`plugins` folder. The Jar will be a fat jar with all libs in it. The folder structure is
expected to be the following:

* `src/java` (Java src files)
* `src/resources` (resource files, optional)
* `lib` (for libs that are not able to be added through Maven, they will be added to
  dependencies automatically, optional)
* `build.gradle` (to add dependencies, optional)

One very important rule is that a plugin is self-contained, only dependent on the main src
and jars and not on any other plugin.