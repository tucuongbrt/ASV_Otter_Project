### Neptus plug-in packages
In Neptus, all plug-ins are jar files (which turn out to be zip files) that include a special descriptor file listing all the extensions contained. Extensions are Java classes that, according to interfaces implemented, can be added as extensions in different parts of Neptus execution.
To simplify development, each plug-in is developed in a separate source folder. Plug-in source folders must be inside the folder _plugins-dev_.

### Adding a new plug-in
To create a new plug-in, right-click the Neptus project and select _New_-->_Source Folder_ and enter the desired folder for your plugin package (inside plugins-dev). Examples: **plugins-dev/myplugin**, **plugins-dev/asvcontrol**, etc.