As already known, there are two main branches in Neptus. The _master_ is the stable branch and is where the official releases are born. The other branch is the _develop_. This one is used to integrate changes and evolve Neptus with new features.

The version in Neptus is structured as follows: *version.MAJOR*, *version.MINOR*, *version.PATCH*.

Major/Minor Releases
--------------------

This happens when the develop branch reaches a stable (releasable) stage. At this stage we should proceed as follows.

Edit the *build.xml* file and find the following properties:

	<property name="version.MAJOR" value="3" />
	<property name="version.MINOR" value="0" />
	<property name="version.PATCH" value="0" />
	<property name="version.DEVELOPER" value="" />
	<property name="release.NAME" value="R14.01" />

  Examples:

  * For version 3.0.0, set *version.MAJOR* to 3,
  *version.MINOR* to 0, and *version.PATCH* to 0.

  * For version 3.0.0-rc1 (release candidate 1), set *version.MAJOR* to "3",
  *version.MINOR* to "0", and *version.PATCH* to "0". Additionally set the  
  *version.DEVELOPER* to "-rc1".

  * Usually we name a release by the year is made. That is the *release.NAME*.
  In this case is the 14.01 because is the first of the year 2014. Every minor release
  increases the value, that is for version 3.1.0 the name will be 14.02. 
  That is for v3.0.1 will be named 14.01 (if IMC compatible), and so on.

  * The same named release is IMC compatible.

So the steps for creating a release are:

1. Change to _develop_ branch.
2. Commit the _build.xml_ file with the following commit message:
3. Preparing Neptus version A.B.C.*
4. Create a branch named 'release/A.B.x' based on 'develop'.
5. If is needed same additional changes, they MUST be worked in this branch.
6. Update the CHANGES.md.
7. Increment by one the *version_MINOR* variable of branch 'develop'.
8. Before releasing you should merge the changes in the new branch into _master_  and then into _develop_. Only then the final tagging is done.
9. Create an annotated tag named 'neptus-A.B.0_NAME' (or 'neptus-A.B.0-rcX_NAME' for RC version), with commit 
    message *Releasing Neptus vA.B.0[-rcX] NAME.*
10. Push the new branch and tag to the remote server.
11. Checkout the created tag, compile it and create the installers.

Patch Releases
--------------

Patch releases are small fixes to an already existing release. For
example, release 3.0.1 is a patch release of version 3.0.0. To perform
this type of release, proceed as follows:

1. Checkout the branch from the tag created 'neptus-A.B.C_NAME' into _release/neptus-A.B.x_ (or reuse the branch already in place for the release A.B.x).
1. Set the build.xml properties described above.
1. Make your changes.
1. Update the CHANGES.md.
1. Before releasing you should merge the changes in the new branch into _master_ 
    and then into _develop_. Only then the final tagging is done.
1. Create an annotated tag named 'neptus-A.B.C[-rcX]_NAME', with commit 
    message *Releasing Neptus vA.B.C[-rcX] NAME.*
1. Checkout the created tag, compile it and create the installers.
