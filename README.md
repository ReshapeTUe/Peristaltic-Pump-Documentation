# Pump for Easy Cleaning of 3D SLA/DLP Printed Soft Fluidic Actuators with Complex Internal Geometry
Full documentation to build a peristaltic pump used to clean SLA/DLP printed soft fluidic actuators.

# Publication
A paper presenting this pump and the associated cleaning procedure has been submitted to the International Conference on Soft Robotics (RoboSoft), 2023.

The work can be cited as follows:
- **Proper. B, Caasenbrood, B., & I. Kuling (2023). Easy Cleaning of 3D SLA/DLP Printed Soft Fluidic Actuators with Complex Internal Geometry. 6th IEEE International Conference on Soft Robotics, RoboSoft 2023. (submitted).**

 # Contents
 
 ## Code
 Contains the arduino code required to control the pump, which includes the main code file and the necessary libraries. 
 Note, this code has been written to work with the connection diagram PumpCircuit.svg. 
 Any changes to the connections will require changing the code, and vice versa.
 This code was tested with Arduino 1.8.19.
 
 ## STLs
 Contains all 3D models required to build the pump assembly, as well as some additional components that aid with the proper functioning of the pump. The pump assembly is an iterated version of a [pre-existing pump assembly](https://www.thingiverse.com/thing:1134817) iterated under the Creative Commons Attribution-NonCommercial 4.0 International license. In this design, at least three channel assemblies can be connected in series and powered using a single stepper motor.
 
### Pump STLs
 - Bearing_Mount_Bottom.stl: Used to keep the bearings in place and allow them to be rotated using the stepper motor.
 - Bearing_Mount_Connector.STL: Connects two sets of bearing mounts with each other. Has a loose fit with one side of the bearing mount and a tight fit with the other.
 - Bearing_Mount_Top.stl: Used to keep the bearings in place and allow them to be rotated using the stepper motor.
 - Hose_Pressure_Plate.stl: Used to ensure tight fit of the hose between this part and the bearings.
 - Pump_Base_Connecting.stl:  Base of the pump assembly, has connecting flanges to connect it to the Pump_Top_Connecting.stl of another channel assembly.
 - Pump_Top_Connecting.stl:  Top of the pump assembly, has connecting flanges to connect it to the Pump_Base_Connecting.stl of another channel assembly.
 - Spacing_Plate.STL: Spacer plate to use between a Pump_Base_Connecting.stl and Pump_Top_Connecting.stl connection to provide space for screws.

### Additional STLs
 - Arduino+Breadboard_Case.STL: A case to hold the arduino and breadboard for easy transport. Designed for an Arduino Uno and 400 point breadboard.
 - Case_lid.STL: Lid for Arduino+Breadboard_Case.STL.
 - Hose_Anchor.STL: Example of an anchor for the hose inlet as described in the paper.
 
## Components.pdf
List of components used to build the peristaltic pump.
