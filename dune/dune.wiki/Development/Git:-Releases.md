Minor Releases
--------------

Once the branch 'master' has reached a stable point it's time for a
release. The accepted way to proceed is as follows:

- Edit the file *CMakeLists.txt* and set the variables
  *PROJECT_VERSION_MAJ*, *PROJECT_VERSION_MIN*, *PROJECT_VERSION_PAT*, and
  *PROJECT_VERSION_RCN*.

  Example:

  * For release 2.4.0, set *PROJECT_VERSION_MAJ* to 2,
  *PROJECT_VERSION_MIN* to 4, *PROJECT_VERSION_PAT* to 0, and
  *PROJECT_VERSION_RCN* to 0.

  * For release 2.5.0-rc1, set *PROJECT_VERSION_MAJ* to 2,
  *PROJECT_VERSION_MIN* to 5, *PROJECT_VERSION_PAT* to 0, and
  *PROJECT_VERSION_RCN* to 1.

- Commit the file *CMakeLists.txt* with the following commit message:
  *CMake: preparing version A.B.C.*

- Create a branch named 'release/A.B.x' based on 'master'. Note that only
  the major and minor version numbers are used, the patch level shall be
  'x'.

- Create an annotated tag named 'dune-A.B.0', with commit message *DUNE
  version A.B.0.*

- Increment by one the *PROJECT_VERSION_MIN* variable of branch 'master'.

- Push the new branch and tag to the remote server.

Patch Releases
--------------

Patch releases are small fixes to an already existing release. For
example, release 2.4.1 is a patch release of version 2.4.0. To perform
this type of release, proceed as follows:

- Checkout the branch 'release/dune-A.B.x'.

- Set the CMake variables described above.

- Create an annotated tag named 'dune-A.B.C', with commit message *DUNE
  version A.B.C.*
