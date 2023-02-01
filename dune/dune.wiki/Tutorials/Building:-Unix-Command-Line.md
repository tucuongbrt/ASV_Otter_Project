# Building: Unix Command Line

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
cmake ../dune
```

4. Call GNU Make to build everything:

```sh
make
```
