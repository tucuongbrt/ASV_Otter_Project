This is a guide for the scripts in [Groovy Language](https://groovy-lang.org/) used in Neptus to generate custom plots in the Mission Analysis and Review tool (MRA).
These scripts can also be used in a [bash program](https://github.com/LSTS/neptus/blob/develop/helper-scripts/script-log.sh) under the helper-script/ directory to perform custom calculations that does not require GUI and plots.

 The scripts originate from time series which are presented in a chart with a configurable title. There is a set of custom methods available to access the logs data and also methods from the java.Math library and all the native functionalities from Groovy programming language.

To script among time series we assume that the data was already fetched through queries in methods as **plot** or **addQuery**. The difference between both is that the latter serves only to retrieve data from the LsfIndex log and the first adds data directly to the chart (can be useful in case you want to compare both original and custom series). The latter is recommended in the bash usage of this functionality.
Both methods receive arguments in the form “IMCMessage.[Entity].field”, being the Entity optional. By default the data queried will be indexed by the query, but the identifier can be changed by users (e.g. on the second argument).
All the methods that manipulates the system's data receives the identifier for the query as an argument to access.

***
# Available Methods

 ## Plot related
* **title**(String) - sets the title for the chart being created on the script.

* **addQuery**(LinkedHashMap<String, String>) - Adds data (time series) from the systems indexing by the first argument of the tuple list. The second argument of the tuple specifies the IMC data being queried in the form <IMCMessage.[Entity].Field>.

* **addQuery**(String, String) - The argument is in the form: <IMCMessage.[Entity].Field> being the Entity an optional parameter on the query.
plot(LinkedHashMap<String, String>) - adds a list of time series to the plot chart, indexing it by the first argument of the tuple in the list.

* **plot**(String...) - adds a list of time series to the plot chart, indexing it  by the query in the argument of the tuple in the list.

* **plot**(TimeSeries) - adds the time series in the arguments to the chart plot. 

* **apply**(String, closure) - applies the function in the closure to the indexed query specified in the arguments. Keeps the original name of the time series. This method returns a time series to be plotted, e.g. using the plot method.

* **apply**(String, String, closure) -  does the same as the above method but indexing the originated time series with other name, specified in the first argument. This method returns a time series to be plotted, e.g. using the plot method.

* **apply**(String, String, String, closure) - applies the function in the closure using the data indexed by argument 1 and 2 in the same order. The first argument is the identifier for the resulted timeseries.

* **crop**(String, double[, double]) - crops and plots the timeseries, identified by the id in the first argument, to the interval defined in the other 2 arguments which represents the timestamps interval limits. If the last argument is not provided it will crop only the beginning of the timeseries. Zero values on the timestamp invalidates the argument and, in the case of the beginning of the time interval, invalidates the timeseries. All timestamps must be in UTC as the systems logs.

* **crop**(String, String[, String]) - crops and plots the timeseries, identified by the id in the first argument, to the interval defined in the other 2 arguments which represents the date time interval limits. If the last argument is not provided it will crop only the beginning of the timeseries. The string has to be in the following format: 
      `dd-MM-yyyy HH:mm:ss.SSS z` 
      Example: `crop(“EstimatedState.z”,”20-02-2019 18:20:03:450 UTC”)`

* **show**(String) - shows the data specified in the arguments. This method works like a println in most languages. The presentation of the text is made in a popup if the script is used in the MRA GUI, otherwise, in the bash version, it’s a simple print to terminal standard output.

* **logName**() - returns the log name.

* **processed**() - returns the information if the LSF index has been processed. This is important because the script execution is divided in two phases:
 

* * Query / IMC message fetching
* * Timeseries and Plots creation


* **hideTimeSeries**(String) - hides the timeseries identified by the id in the arguments in case it was already plotted on the script. 


## Arithmetics
### _Note:_ The following methods should be used after querying the data using the methods above.

* **getAGVFor**(String) - returns the average (double) for the specified system in the argument. The argument is in the form “<System>.<query identifier>”.

* **getTimeSeriesMaxValue**(String) - returns the maximum value (double) for the specified query identifier in the argument. 

* **getTimeSeriesMinValue**(String) - returns the minimum value (double) for the specified query identifier in the argument. 

* **getTimeSeriesMaxTime**(String) - returns the time, in milliseconds, which the maximum value for the specified query identifier in the argument occurred.

* **getTimeSeriesMinTime**(String) - returns the time, in milliseconds, which the minimum value for the specified query identifier in the argument occurred.

## Markers
### _Note:_ The following methods should be used after querying the data using the methods above.

* **plotDomainMarker**(String, long) - adds a marker to the domain (X) axis at the specified time (milliseconds) in the arguments. The string argument is used as label for the mark. This markers are saved beyond runtime in the log files and shown in every plot in MRA.

* **plotRangeMarker**(String,long) - adds a marker to the range (Y) axis with the specified value (double) in the arguments. The string argument is used as label for the mark. This markers are only available on runtime, unlike the above.

## Available closures

* **sum**: This closures adds 2 numbers received as argument.

* **diff**: This closures subtracts 2 numbers received as argument. 

* **div**: This closures divides 2 numbers received as argument, if the second argument is zero it return NaN.

* **mult**: This closures multiplies 2 numbers received as argument.


There are a few closures already defined that can be applied to queried time series as functions. Closures in Groovy can be defined in the following way:

     ` def closure = {arg1 -> method(arg1)}` 

## Error Treatment

* If the query of values using  IMC messages is not valid, no series will be added to the plot.

* If an error occurs in the execution of the script, its description will appear on a popup dialog when the log is being open, when the script is being interpreted. 

* The popup window denotes the plot name where the error occurred or the script file name in case the error made impossible the generation of the chart.

* Also if no data is queried from the log, when using the “value” method to manipulate the series there is no data to use.


***

# Usage Examples

## IMC Rpm Messages plot - Average and markers usage

```
title "RPM"

plot "Rotation/mins":"Rpm.value"

avg = getAGVFor "lauv-noptilus-2.Rotation/mins"
plotRangeMarker "RPM-avg", avg

low = getTimeSeriesMinTime "Rotation/mins"
plotDomainMarker "Lowest RPM", low

```

## Conversion to degrees - Applying closures to time series

```
title "Heading Degrees"
addQuery "EstimatedState.psi" 

addQuery "DesiredHeading.value"

toDegrees = {rad -> Math.toDegrees(rad)}

headingD = apply("Heading","EstimatedState.psi", toDegrees)
plot headingD

desired_hD = apply("DesiredHeading","DesiredHeading.value", toDegrees)
plot desired_hD

dev = apply ("Deviation", "DesiredHeading", "Heading",diff)
plot dev

```

## Conversion to degrees - Marking samples above threshold

```
title "Heading Degrees"

devs = 0      // # of samples above threshold
treshold = 150 //degrees

addQuery "EstimatedState.psi", "DesiredHeading.value"

toDegrees = {rad -> Math.toDegrees(rad)}

headingD =  apply("Heading","EstimatedState.psi", toDegrees)
plot headingD

desired_hD = apply("DesiredHeading","DesiredHeading.value", toDegrees)
plot desired_hD

diffDeg = {  v1,v2 -> 
 d = Math.abs(v1 - v2) % 360
 res = d > 180 ? 360 - d : d
if(res> treshold)
    plotRangeMarker "above threshold"+devs++,res
res
}
dev = apply ("Deviation", "DesiredHeading", "Heading",diffDeg)
plot dev

```

## Neptus MRA Control [script](https://github.com/LSTS/neptus/blob/develop/conf/mraplots/control) 

```
title "Control vs Desired"

heading = "EstimatedState.psi" 
plot "Heading": heading

desired_h = "DesiredHeading.value" 
plot "DesiredHeading": desired_h

depth = "EstimatedState.depth" 
plot "Depth": depth

altitude = "EstimatedState.alt" 
plot "Altitude": altitude

desired_z = "DesiredZ.value" 
plot "DesiredZ":  desired_z

roll = "EstimatedState.phi" 
plot "Roll":  roll

desired_roll = "DesiredRoll.value" 
plot "DesiredRoll": desired_roll
```

## Usage in bash version 
In helper-script/script-log.sh

```
title "Analysis Script"

//PARAMETERS
def FILE = "analysis.csv" //Path to CSV file
String[] columns =  ["log","distance(m)", "imu_ahrs_error","psi_bias_error",
    "alignment time (s)"]

// INIT
File csv = new File(FILE)
Writer writer = new FileWriter(csv,true)
BufferedReader br = new BufferedReader(new FileReader(csv))

//Conv Method
toRadians = {deg -> Math.toRadians(deg)}

//IMC Vars
addQuery "Dist":"Distance.NavTest.distance.value"
addQuery "imu_ahrs_error":"EulerAngles.imu_error.psi"
// 0: NOT_ALIGNED | 1: ALIGNED
addQuery "Alignment":"AlignmentState.Navigation.state" 
addQuery "IMU_state":"EntityActivationState.IMU.state"
addQuery "psi_bias_error":"NavigationUncertainty.bias_psi"

if(!processed())
    return

def max_dist           = getTimeSeriesMaxValue "Dist"
def max_imu_ahrs_error = getTimeSeriesMaxValue "imu_ahrs_error"
def max_bias_psi_deg   = getTimeSeriesMaxValue "psi_bias_error"
def max_bias_psi_rad   = toRadians(max_bias_psi_deg)
def time_max_align      = getTimeSeriesMaxTime "Alignment"
def init_imu_time       = getTimeSeriesMaxTime "IMU_state"
def align_time = (time_max_align - init_imu_time) / 1000.0
def log_name = logName()

// Script CSV
if (csv.isFile() && br.readLine() == null) { //verify is file is empty
    columns.eachWithIndex { it,index ->
        writer.append(it)
        if(index < (columns.length-1))
        writer.append(',')
    }
    writer.write("\n")
}
if(csv.exists() && csv.isFile()) {
    String[] data = [log_name,max_dist,max_imu_ahrs_error,
max_bias_psi_rad,align_time]
    data.eachWithIndex { it,index ->
        writer.append(it)
        if(index < (columns.length-1))
        writer.append(',')
        }
    writer.append("\n")
}
writer.flush()
writer.close()                                   
``` 

* Command usage: 

`# bash helper-scripts/script-log.sh [Path to Data.lsf file] conf/mraplots/script`

Replace [Path to Data.lsf file] with the path to the log you want to use.

