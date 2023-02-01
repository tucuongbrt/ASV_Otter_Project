## Adding a new vehicle
In order to add a new vehicle to Neptus we need to add an XML file describing it. You can find them in `vehicles-defs` folder.

The format for naming these files is the following: _dd-\<vehicle_name\>.nvcl_ (for example _19-lauv-seacon-1.nvcl_).
_dd_ is a number usually for ordering. Usually to group together similar vehicles. The _<vehicle name>_ is the unique name (id) for the vehicle. Usually lower case with no spaces.

This vehicle configuration file has the following sections: _properties_, _feasibleManeuvers_, _communication-means_, and _consoles_ (which can be empty).
The _properties_ sets vehicle basic characteristics as the name, id, and appearance. The _feasibleManeuvers_ indicates the maneuvers that the vehicle is capable of executing as well as their default values. The _communication-means_ indicates the IMC ID and default IP and ports as well as transports active. The _consoles_ is just an indication of what console is to be used for the vehicle (more or less deprecated).

## Sample file
So let us look of a basic sample file with a vehicle supporting only GoTo. File _99-foo-1.nvcl_.
````xml
    <?xml version="1.0" encoding="UTF-8"?>
    <system xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:noNamespaceSchemaLocation="..\src\schemas\neptus-vehicle.xsd">
        <properties>
            <id>foo-1</id>
            <name>Foo-1</name>
            <type>AUV</type>
            <model>LAUV</model>
            <appearance>
                <x-size>1.4</x-size>
                <y-size>0.3</y-size>
                <z-size>0.54</z-size>
                <top-image-2D>../vehicles-files/lauv/lauv-seacon0-top.png</top-image-2D>
                <side-image-2D>../vehicles-files/lauv/lauv-seacon0-side.png</side-image-2D>
                <back-image-2D>../vehicles-files/lauv/lauv-seacon0-back.png</back-image-2D>
                <presentation-image-2D>../vehicles-files/lauv/lauv-seacon0-presentation.png</presentation-image-2D>
                <model-3D>../vehicles-files/lauv/lauv-xtreme-2.x3d</model-3D>
                <icon-color>
                    <r>255</r>
                    <g>255</g>
                    <b>32</b>
                </icon-color>
            </appearance>
            <coordinate-system-label>SNAME</coordinate-system-label>
        </properties>
        <feasibleManeuvers>
            <maneuver>
                <Goto kind="automatic">
                    <finalPoint type="pointType">
                        <point>
                            <id>GotoDestination</id>
                            <name>GotoDestination</name>
                            <coordinate>
                                <latitude>0N</latitude>
                                <longitude>0E</longitude>
                                <depth>2</depth>
                            </coordinate>
                        </point>
                        <radiusTolerance>5</radiusTolerance>
                    </finalPoint>
                    <velocity tolerance="10" type="float" unit="m/s">1.0</velocity>
                    <trajectoryTolerance>
                        <radiusTolerance type="float">1</radiusTolerance>
                    </trajectoryTolerance>
                    <annotation>
                        <documentation>No documentation available</documentation>
                        <implementation-class>pt.lsts.neptus.mp.maneuvers.Goto</implementation-class>
                    </annotation>
                </Goto>
            </maneuver>
        </feasibleManeuvers>
        <communication-means>
            <comm-mean>
                <name>ethernet</name>
                <type>ethernet</type>
                <host-address>10.0.10.10</host-address>
                <credentials username="root"/>
                <protocols>imc</protocols>
                <latency value="100M" unit="bps"/>
                <protocols-args>
                    <imc>
                        <port>6002</port>
                        <port-tcp>6002</port-tcp>
                        <udp-on>true</udp-on>
                        <tcp-on>false</tcp-on>
                        <imc3-id>00:F5</imc3-id>
                    </imc>
                </protocols-args>
            </comm-mean>
        </communication-means>
        <consoles>
            <console name="LAUV SeaCon Light">
                <xml-file>../conf/consoles/lauv.ncon</xml-file>
            </console>
        </consoles>
    </system>
````
