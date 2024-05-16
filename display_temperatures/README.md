# Displaying the temperature on an LCD screen

Displaying the temperature on an LCD screen using an Arduino and a DHT11 sensor involves integrating the sensor, the display, and the microcontroller. Here, we'll use a 16x2 LCD display to show the temperature readings in real-time.

## Components Needed
1.	Arduino Uno
2.	DHT11 or DHT22 temperature and humidity sensor
3.	16x2 LCD display
4.	10kΩ potentiometer
5.	Breadboard
6.	Jumper wires
7.	Resistors

## Step-by-Step Guide

Step 1: Setting Up the Circuit
Wiring the DHT11 Sensor:
1.	VCC: Connect to the 5V pin on the Arduino.
2.	GND: Connect to the GND pin on the Arduino.
3.	Data: Connect to digital pin 2 on the Arduino.

Wiring the LCD Display:
1.	VSS: Connect to GND.
2.	VDD: Connect to 5V.
3.	VO: Connect to the middle pin of the potentiometer.
4.	RS: Connect to digital pin 12.
5.	RW: Connect to GND.
6.	E: Connect to digital pin 11.
7.	D4: Connect to digital pin 5.
8.	D5: Connect to digital pin 4.
9.	D6: Connect to digital pin 3.
10.	D7: Connect to digital pin 2.
11.	A: Connect to 5V through a 220Ω resistor.
12.	K: Connect to GND.

Step 2: Installing Required Libraries
To use the DHT11 sensor and the LCD, we need to install the following libraries:
1.	DHT sensor library by Adafruit
2.	Adafruit Unified Sensor library
3.	LiquidCrystal library
You can install these libraries through the Arduino IDE Library Manager.

Step 3: Writing the Arduino Code

Step 4: Uploading the Code
1.	Connect your Arduino to your computer via USB.
2.	Open the Arduino IDE.
3.	Copy the above code into a new sketch.
4.	Select your Arduino board and port from the Tools menu.
5.	Click the Upload button.

Step 5: Testing the Project
Once the code is uploaded:
1.	The LCD should display "Temp & Humidity" initially.
2.	After a few seconds, it should display the current temperature and humidity readings from the DHT11 sensor.

Notes 	<br>
•	Ensure your connections are correct; double-check the wiring if the LCD doesn't display the expected results. 	<br>
•	If you encounter issues with the DHT sensor readings, ensure the sensor is connected properly and the libraries are correctly installed. 	<br>
•	You can adjust the contrast of the LCD using the potentiometer.

