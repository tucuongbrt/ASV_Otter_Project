# Building: Qt Creator

This tutorial assumes you have read [[Obtaining the Source Code]] beforehand.

### Steps

1. Open the configuration project file _**CMakeLists.txt**_ that can be found on DUNE's root folder.

2. Build your project - _CMake Wizard_: Create a dedicated folder for your Qt build location/workspace. Press "_Next_".

3. Build your project - _CMake Wizard_: Run Cmake after choosing the right architecture of your system (x86 or x64) in the "_Generator_" combo box. This will generate the GNU MakeFiles.

4. Whenever you want to compile, press "_build_" on the bottom left corner. 

### Helpful Information

* Qt Creator supports CMake configuration files, which are broadly used on DUNE.
* Do not edit the CMakeList.txt files if you don't know what you are doing.
* Qt Creator natively supports integration with various Source Control Management tools, including Git.