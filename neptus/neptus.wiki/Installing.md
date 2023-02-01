_[[Requirements]] | [[Compiling]] | [[Running]] | Installing_

Neptus requires Gradle build system (**as from October 23rd, 2020**) for compilation (no installation needed). In addition you have to have git on the PATH in the shell you run Gradle.

To create installers for Neptus you can use the following options (as off now, no Java VM is included):

Use `./gradlew <dist-name>DistZip` and `./gradlew <dist-name>DistTar` where `<dist-name>` is the distribution name (it will not have the JRE)

* `full` - for full version
* `seacon` - for seacon version
* `le` - for light edition

Use `./gradlew installer<Dist-name>LinuxDist` with `<Dist-name>` the same as above but capitalized, creates a `sh` installer for Linux.

Use `./gradlew installer<Dist-name>WindowsDist` with `<Dist-name>` the same as above but capitalized, creates an `exe` installer for Windows (NOT WORKING YET)
