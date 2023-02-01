Users can script among systems real-time data and plot it using the Real-Time Plot plugin (Ctrl+U shortcut on the console). The Neptus real-time plot uses groovy scripts ([Groovy Language](https://groovy-lang.org/)) to access system data a plot in different forms on the chart.
There are 2 types of plots: Time series and custom XY series, being the first one used by default. 
Besides systems real-time data from IMC messages, methods from the java.Math library and all the native functionalities from groovy programming language are also available.  


There are a few methods already defined or templates available under the Options Tab under the Settings button at the bottom of the plugin panel. The methods are organized in 4  categories: System available IMC messages, math formulas embedded in a closure to be applied to systems data, plot properties (i.e. XY series or time series) or locally stored scripts.
Plugin properties are available at the bottom and also in the advanced Neptus console settings. Note that the changes only become effective when you hit save button. The periodicity parameter lower bound is 100 milliseconds.

***

## Available methods:

* **value(String)** - Retrieves a map of the selected systems with the last value (numerical) of the IMC Message received on Neptus. The argument is in the form: <IMCMessage.[Entity].Field> being the Entity an optional parameter on the query.

* **apply(Map, function)** - Applies the function in argument to the list of values from the map of systems and data. For instance, the Map argument can be a variable from the msgs call.

* **apply(Map, Map, function, [String])** - Applies the function in argument to both lists of values from the map of systems and data. This method uses the system id as key to combine values from both lists. The name argument is optional. Only the values from the systems which appears on both maps are plotted. 

```
s = value("EstimatedState.depth")
addTimeSeries s

t = value("EstimatedState.alt")
addTimeSeries t

res = apply(s,t,sum)

addTimeSeries res
```

* **xyseries(Map,Map,[String])** - Adds a new XY serie to the plot, specifying the name. The first map values are used for the X axis and the second for the Y axis. The name argument is optional. Only the values from the systems which appears on both maps are plotted. 

* **addTimeSeries(Map,[String])** - Adds a time series to the current time series plot. The last argument specifies the series name which value by default is in the form: <IMCMessage.[Entity].Field>.

* **addSeries(Map,[String])** - Adds a XY serie to the current XY plot. The last argument specifies the serie name which value by default is in the form: <IMCMessage.[Entity].Field>.

* **roll()** - Retrieves a Map with selected system(s) and their roll in degrees. 
Equivalent to:  
`addTimeSeries( apply(state("phi"), {arg -> Math.toDegrees(arg)} ))`

* **pitch()** - Retrieves a Map with selected system(s) and their pitch in degrees. 
Equivalent to:  
`addTimeSerie( apply(state("psi"), {arg -> Math.toDegrees(arg)} ))`

* **yaw()** - Retrieves a Map with selected system(s) and their yaw in degrees. 
Equivalent to:  
`addTimeSerie( apply(state("theta"), {arg -> Math.toDegrees(arg)} ))`

* **plotAbsoluteLatLong()** - Changes the type of plot to a XY series, being the values the ablosute  latitude and longitude of the systems (WGS84).

* **plotNED()** -  Changes the type of plot to a XY series, being the values the north and east offset from the latitude and longitude values reported from the systems.

* **plotNEDFrom(double, double, double)** -  Changes the type of plot to a XY series, being the values the north and east offset from the given coordinates in the arguments to the latitude and longitude values reported from systems. The coordinates, latitude (first argument) and longitude (second argument) must be given in decimal degrees and the height in meters.

![Position related methods plots.](https://www.lsts.pt/assets/images/Screenshot%20from%202019-04-04%2012-05-24.png)

* **plotNEDFrom(Map, Map, Map,Map, Map, Map, Map, Map , Map)** - Changes the plot to a XY series comparing the coordinates in the arguments queries. The arguments order is: Queries for the reference latitude,longitude and height; followed by latitude, longitude, height, x ,y  and z offsets of the coordinates to compare. 
Usage Example: 
```
toDegree = {rad -> Math.toDegrees rad}
def l0  = apply ( value ("SimulatedState.lat"), toDegree)
def ln0 = apply ( value ("SimulatedState.lon"), toDegree)
def h0  = value ("SimulatedState.height")
def la  = apply ( value ("EstimatedState.lat"), toDegree)
def ln  = apply ( value ("EstimatedState.lon"), toDegree)
def h = value ("EstimatedState.height")
def x = value ("EstimatedState.x")
def y = value ("EstimatedState.y")
def z = value ("EstimatedState.z")

plotNEDFrom l0,ln0,h0,la,ln,h,x,y,z
```

* **plotNEDFrom(Map,Map,Map)** - Also changes the plot to an XY series, comparing the coordinates (LLH) in the arguments to the system's current EstimatedState (LLH +NED).

* **setDrawLineForXY(boolean toDraw)** - This method allows the points in the XY series plot to be connected, drawing lines between them. The method forces the repaint of the chart. This plot property is false by default.

All the methods from the java.lang.Math library are also available on the script. These methods can be applied to series passed to the apply  method as a closure.
Usage Example:
`psi = value("EstimatedState.psi")`
`closure = {arg -> Math.toDegrees(arg)}`
`series = apply(psi, closure)`
`addTimeSeries series`

## Default Closures:
* **sum** - returns the sum of the two arguments it receives. 
* **diff** - returns the subtraction of the two arguments it receives.
* **prod** - returns the product of the two arguments it receives.
* **div** - returns  the division of the two arguments it receives or NaN in division by zero.
* **state(“field”)** - Retrieves a Map with selected system(s) and EstimatedState values from a specific field.

## Error Treatment

* If the query of values using  IMC messages is not valid, no serie will be added to the plot.

* Multiple series can be added to the plot, but this series must be of the same type: Timeseries or XY series, otherwise no data will be shown on the plot.

* If an error occurs during the script execution, the previous saved script is used for the updates until an “error free” version of the script is saved. The error description will be shown in an popup dialog. If you leave the editor, the current script with errors will be lost during this process.

* An error will occur if the periodicity value is set to a lower value of its bounds and the previous valid value is set. 
