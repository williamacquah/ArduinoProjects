# Potentiometer Controlled Buzzer

A simple Arduino project that reads analog input from a potentiometer, and activates a buzzer when the value crosses a certain threshold.  

## Description

This project monitors a potentiometer connected to **A0**.  
If the potentiometer value exceeds **1000** (out of 1023), a buzzer connected to **pin 8** turns on for **2 seconds** (`2000 ms`).

Serial Monitor output prints the potentiometer readings every **250 milliseconds** so you can watch the current value.

### Behavior:

- Potentiometer reading ≤ 1000 → No sound (silent judgment).
- Potentiometer reading > 1000 → Buzzer sounds for 2 seconds.

## Circuit

- **Potentiometer**:
  - One side to **5V**
  - Other side to **GND**
  - Middle pin to **A0**
- **Buzzer**:
  - Positive (long leg) to **pin 8**
  - Negative (short leg) to **GND**
- Optional: Add a small resistor (100Ω–330Ω) in series with the buzzer if it sounds the sound is too high pitched.

## Files

- `main.cpp` — Arduino PlatformIO sketch for this project
- `circuit.PNG` — image of the circuit

## Code Highlights

```cpp
if (potVal > 1000) {
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
}

## Author

William Acquah.
