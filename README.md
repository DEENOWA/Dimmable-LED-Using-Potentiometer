# Dimmable-LED-Using-Potentiometer
This Arduino sketch controls the brightness of an LED connected to PWM pin 10 using a potentiometer on analog pin A2. It displays the potentiometer value and calculated output on the Serial Monitor. The sketch is designed for an Arduino board (e.g., Arduino Uno) to demonstrate analog input, PWM output, and serial communication.
The sketch defines variables: redPin (10 for the LED), potPin (A2 for the potentiometer), potVal (to store the analog reading), writeVal (to store the PWM output value), wait (1000ms, unused), and br (9600 baud rate for serial communication). In the setup function, Serial communication is initialized at 9600 baud, pin A2 is set as input, and pin 10 as output.In the loop function, the sketch:Reads the potentiometer value (0–1023) using analogRead.
Calculates writeVal using the formula writeVal = pow(2, potVal/127.875)-1, creating a non-linear mapping for LED brightness.
Sets the LED brightness on pin 10 using analogWrite with writeVal (0–255).
Prints the potVal and writeVal to the Serial Monitor, separated by spaces, with a new line.

Hardware Requirements:Arduino board with PWM pin 10 and analog pin A2 (e.g., Arduino Uno, Nano).
Potentiometer connected to A2, with other terminals to 5V and ground.
LED connected to pin 10 with a current-limiting resistor (e.g., 220 ohms) to ground.

Usage:Upload the sketch to your Arduino board using the Arduino IDE.
Open the Serial Monitor (9600 baud) to view the potentiometer value and PWM output.
Adjust the potentiometer to change the LED brightness and observe the values.

Notes:The non-linear formula provides an exponential brightness curve, unlike the commented-out linear mapping.
The wait variable is defined but unused; a delay could be added for timing control.
This sketch is ideal for learning analog input, PWM output, and non-linear scaling.
