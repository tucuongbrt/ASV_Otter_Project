_[[Requirements]] | Compiling | [[Running]] | [[Installing]]_

Neptus requires Gradle build system (**as from October 23rd, 2020**) for compilation (no installation needed). In addition you have to have git on the PATH in the shell you run Gradle.

Open a command-line prompt clone neptus into a folder of your choosing:

    $> git clone https://github.com/LSTS/neptus.git
    Cloning into 'neptus'...
    (...)

Inside the directory of the cloned project, run `gradlew`:

    $> cd neptus
    $> ./gradlew
    Buildfile: /home/user/neptus/build.gradle
    Check the BUILD.md for details.
    (...)
