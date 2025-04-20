# LEDMeter

A simple Arduino project that uses a potentiometer to control 3 LEDs based on analog voltage levels.

## Description

This project reads the voltage from a potentiometer connected to analog pin A2 on the Arduino.  
Based on the voltage range, it lights up:

- **Green LED** for voltage < 3.0V  
- **Yellow LED** for voltage between 3.0V and 4.0V  
- **Red LED** for voltage > 4.0V  

## Circuit

![circuit diagram](circuit.PNG)

- **Analog Input:** Potentiometer middle pin to A2  
- **LED Outputs:**  
  - Green → pin 9  
  - Yellow → pin 10  
  - Red → pin 11  
- Resistors in series with LEDs to ground (because explosions are bad)

## Files

- `LEDMeterProject.ino` — The Arduino sketch  
- `circuit.PNG` — A glorious photo of the physical circuit  

## Usage

1. Upload the `.ino` file to your Arduino Uno  
2. Twist the potentiometer like a mad scientist  
3. Watch the LED light show and pretend it's important

## Author

Made by someone with good taste in project names.
