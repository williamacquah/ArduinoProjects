# Potentiometer Trigger LED

A simple Arduino project where turning a potentiometer past a threshold value lights up a red LED.

## Description

This project reads the analog input from a potentiometer on **pin A0**. If the value exceeds **1000**, it turns on a red LED (pin 7)  
and keeps it on until the value drops back below the threshold. A basic yet powerful example of analog sensing + decision making.

It also prints the potentiometer values to the Serial Monitor for dramatic real-time feedback.

### Behavior:

- Potentiometer ≤ 1000 → LED off  
- Potentiometer > 1000 → LED turns on, stays on until value drops again  
- Potentiometer trembles under the weight of your judgment

## Circuit

- **Potentiometer**:
  - One outer pin to **5V**
  - Other outer pin to **GND**
  - Middle pin to **A0**
- **Red LED**:
  - Anode to **pin 7**
  - Cathode to **GND** via resistor (~330Ω)

## Files

- `PotentiometerTriggerLED.ino` — The main Arduino sketch
- `circuit.PNG` — Circuit image

## Author

William Acquah.
