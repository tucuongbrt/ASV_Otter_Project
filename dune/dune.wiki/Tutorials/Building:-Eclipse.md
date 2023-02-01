# Building: Eclipse

This tutorial assumes you have read the previous tutorial
[[Obtaining the Source Code]].

1. Create a dedicated folder for DUNE's compiled binaries:
```sh
mkdir $HOME/dune/build
```

2. Change your current working directory to the folder you just
created.
```sh
cd $HOME/dune/build
```

3. Run CMake to generate GNU Makefiles.
```sh
cmake -G "Eclipse CDT4 - Unix Makefiles" ../dune
```

4. Start Eclipse IDE and import "An existing project into workspace", selecting the folder $HOME/dune/build.

5. In Eclipse, right-click the project and select "build project" whenever you want to recompile.
