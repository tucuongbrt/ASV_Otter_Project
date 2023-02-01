Document every commit meaningfully. Commit messages shall have the generic
form *[MODULE]: [MESSAGE].*, where *[MESSAGE]* is one or more *full*
English sentences describing what was changed, added or removed.

CMake Files
-----------

- Changes to the file *CMakeLists.txt* or files residing in the
  *cmake* folder shall have a commit message of the form *CMake:
  [MESSAGE].*.

  Examples:

  * CMake: Added OpenCV building option.
  * CMake: Added option to build using the Blueview SDK.

DUNE Core
---------

- Changes to files and folders residing in the *src/DUNE* folder shall
  have a commit message of the form *[PATH]: [MESSAGE].*, where
  *[PATH]* is the path to the file in question omitting the extension and starting with DUNE/.

  Examples:

  * DUNE/Exceptions: Added new NotImplemented exception.
  * DUNE/Network/TCPSocket: Use 'this' object instead of native handle.
  * DUNE/Math/Vector: Removed seldom used Vector class.

Tasks
-----

- Changes to tasks, should have a commit per task, and the commit messages
  shall be of the form *[TASK]: [MESSAGE].*, where
  *[TASK]* is the full path to the task's folder.

  Examples:

  * Sensors/MiniSVS: Added device driver for Valeport's miniSVS Sound
  Velocity Sensors.
  * Power/PCTLv2: Ignore broadcast PowerChannelControl to main channel.

Programs and Scripts
--------------------

- Commit messages for files under the 'programs' folder, shall be of the
  form *Programs: [PROGRAM]: [MESSAGE].*, where *[PROGRAM]* is the name of
  the program in question.

  Examples:

  * Programs: dune-sendmsg: Added default units option to the DesiredZ
  message.
  * Programs: dune-push-github.py: Removed obsolete script.

External and Vendor Files
-------------------------

- Commit messages for files under the 'vendor' folder shall be of the form
  *Vendor: [PRODUCT]: [MESSAGE].*, where *[PRODUCT]* is the canonical name
  of the library or project in question.

  Examples:

  * Vendor: LZ4: Added library.
  * Vendor: Pthreads-win32: Updated to version 2.9.1.

Configurations
-----

- Commit messages for systems' configurations shall be of the form *Config: [CONFIG]: [MESSAGE].*, where *[CONFIG]* is the path to the configuration file inside the *etc/* folder, without the *.ini* extension.

  Examples:

  * Config: lauv-noptilus-2: Using more explicit power channel name.
  * Config: development/ardupilot-testbed: Moving development systems to appropriate directory.

Documentation Files
-------------------

- Changes to files residing in the *doc* folder shall have
a commit message of the form *Documentation: [MESSAGE].*.

  Examples:

  * Documentation: Modified Doxygen configuration files.
  * Documentation: Updated emacs code style.
 
Multiple Tasks
--------------

- If the same exact change is applied to multiple files (e.g: more than 5 Tasks),
  then all modifications can be committed at once. The commit message shall be of
  the form *[SECTION]: [MESSAGE]* while respecting previous commit message rules.
  [SECTION] shall be omitted if the modification applies to several locations in DUNE.

  Examples:

  * Filter EstimatedState messages by source system.
  * Config: Updated all AUV systems to new Power controller.
  * DUNE/Navigation: Updated GpsFix message.

Merge Commits
-------------

- Merging one branch to the master branch must follow specific procedures. An issue must first be opened in Redmine or GitHub, specifying the [ISSUE_TYPE] in question: task, feature, bug fix etc. Once the branch is ready to be merged, there should be a reviewer assigned, which may or may not be the same person authoring the merge commit. 
- The commit message that follows the automatically generated text from git ("Merge branch 'feature/foo'") must have the form: *[ISSUE_TYPE]: [MESSAGE]*.
- Then state the author and reviewer:
  * Authored by: [AUTHOR]
  * Reviewed by: [REVIEWER]
- Then properly identify the issue opened in Redmine or GitHub (respectively):
  * This commit fixes #[ISSUE_NUMBER]
  * Bug Fix GitHub #[ISSUE_NUMBER]

Example:
    
    Merge branch 'feature/oceaneco'

    Feature: Added support for OceanEco hardware (LAUVs and Mantas).
    
    Authored By: Ricardo Martins
    Reviewed By: Pedro Calado
    
    This commit fixes #3124.