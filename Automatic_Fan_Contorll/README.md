# Automatic fan control

Automatic fan control using an Arduino involves using a temperature sensor to measure the temperature and a relay module to control the fan. When the temperature exceeds a certain threshold, the fan will turn on; when the temperature drops below the threshold, the fan will turn off.

Components Needed
1.	Arduino Uno
2.	DHT11 or DHT22 temperature and humidity sensor
3.	Relay module
4.	Fan
5.	Breadboard
6.	Jumper wires
7.	Resistors
Step-by-Step Guide

Step 1: Setting Up the Circuit
Wiring the DHT11 Sensor:
1.	VCC: Connect to the 5V pin on the Arduino.
2.	GND: Connect to the GND pin on the Arduino.
3.	Data: Connect to digital pin 2 on the Arduino.

Wiring the Relay Module:
1.	VCC: Connect to the 5V pin on the Arduino.
2.	GND: Connect to the GND pin on the Arduino.
3.	IN: Connect to digital pin 8 on the Arduino.
4.	COM: Connect to one end of the fan or light bulb.
5.	NO: Connect to the positive terminal of the power source for the fan or light bulb.

Fan Wiring:
•	The other end of the fan or light bulb should be connected to the negative terminal of the power source.

Step 2: Installing Required Libraries
To use the DHT11 sensor, you need to install the DHT sensor library and Adafruit Unified Sensor library. You can install these libraries through the Arduino IDE Library.

Step 3: Writing the Arduino Code

Step 4: Uploading the Code
1.	Connect your Arduino to your computer via USB.
2.	Open the Arduino IDE.
3.	Copy the above code into a new sketch.
4.	Select your Arduino board and port from the Tools menu.
5.	Click the Upload button.

Step 5: Testing the Project
1.	Once the code is uploaded, the Arduino will start reading the temperature every 2 seconds.
2.	If the temperature exceeds the threshold (e.g., 25°C), the relay will activate, turning the fan on.
3.	When the temperature drops below the threshold, the relay will deactivate, turning the fan off.

Notes 	<br>
•	Ensure your connections are correct; double-check the wiring if the relay doesn't operate as expected.	<br>
•	For safety, ensure that your power connections to the fan or light bulb are secure and properly insulated.	<br>
•	You can adjust the TEMP_THRESHOLD value to change the temperature at which the fan turns on or off.	<br>
•	This example uses a DHT11 sensor, which has limited accuracy. For more precise temperature control, consider using a DHT22 sensor or another more accurate temperature sensor.

