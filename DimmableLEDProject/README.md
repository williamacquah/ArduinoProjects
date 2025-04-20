# DimmableLED

A simple Arduino project that lets you control the brightness of a green LED using a potentiometer.  
It's basically a light dimmer, but for one LED, and with fewer existential consequences.

## Description

This project reads analog input from a potentiometer on pin **A2**, scales the value from `0–1023` down to `0–255`,  
and writes it to **PWM pin 9** using `analogWrite()` to dim a green LED accordingly.

The result? A smooth fade in/out of the LED brightness depending on how much you twist the knob—because who doesn’t want control over tiny lights?

## Circuit

- **Potentiometer**:
  - One side to **5V**
  - Other side to **GND**
  - Middle pin to **A2**
- **Green LED**:
  - Anode to **pin 9** (PWM)
  - Cathode to **GND** through a resistor (330Ω)

## Code Summary

```cpp
potVal = analogRead(A2);              // Read analog value (0–1023)
LEDVal = (255.0 / 1023.0) * potVal;   // Scale to 0–255
analogWrite(greenPin, LEDVal);        // Dim LED based on scaled value


## Author

William Acquah.
