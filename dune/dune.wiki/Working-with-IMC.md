# Working With IMC

DUNE uses the [IMC Specification](https://www.github.com/LSTS/imc) for
communication between tasks and other software. Several LSTS software
projects such as [Neptus](https://www.github.com/LSTS/neptus),
[IMC Java](https://www.github.com/LSTS/imcjava), and
[ACCU](https://www.github.com/LSTS/accu) also use IMC, and therefore it is
important to use the same IMC version on all software projects that are
intended to work together.

The IMC specification contains two XML documents that are used by DUNE to
generate source code, namelly, IMC.xml and IMC_Addresses.xml. The former
contains the full set of IMC messages, and the latter the list of
registered IMC addresses. DUNE does not need these files at run-time, only
at compile-time.

If you need to update the IMC version, or test new IMC messages, you
should have the IMC specification in the build folder of DUNE.

To tell the build system the IMC git branch, tag, or commit you are
interested in using, use the CMake option **IMC_TAG**. For example, if you
wish to use *IMC v5.4.0*, and dune sources are located in the relative path `../dune`, issue the following command:

```sh
cmake -DIMC_TAG=imc-5.4.0 ../dune
```

If you do not set the CMake variable **IMC_TAG**, then the **HEAD** of the IMC
branch **master** will be used. Additionally you can use the CMake
variable **IMC_URL** to set the URL of the IMC repository (e.g., you are
using a fork of IMC).

To clone the IMC repository issue the following command.

```sh
make imc_download
```

This command will clone IMC to the subfolder IMC of your build folder.

You can change the IMC specification at will and generate the source code
by issuing the following command:

```sh
make imc
```

The generated source code shall only be pushed upstream if you are using
an IMC release. When your changes are ready for production you should send a
patch or pull request to the
[IMC Project](https://www.github.com/LSTS/imc).

After your commits are accepted, the DUNE maintainers will take care of
updating all LSTS software to use those changes.


`Note: If seems not to work, please check on your terminal if 'python' command exists. If not please install Python, or if is already installed as 'python2' or 'python3' commands, to fix this in Ubuntu install 'sudo apt install python-is-python3'` 