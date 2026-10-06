# Bluetooth Smart Light Control

Wireless LED control using an Arduino Uno and an HC-05 Bluetooth module, operated from an Android phone.

## Features
- Turn an LED ON/OFF from a phone over Bluetooth
- Simple commands: 1 = ON, 0 = OFF
- Simulated in Tinkercad and tested on real hardware

## Hardware
- Arduino Uno
- HC-05 Bluetooth module
- LED + 220Ω resistor
- Breadboard, jumper wires
- Android phone

## Software
- Arduino IDE (C/C++)
- Serial Bluetooth Terminal app
- Tinkercad (simulation)
- Library: SoftwareSerial.h (HC-05 on pins 2 and 3)

## How It Works
1. The phone sends "1" or "0" through the Bluetooth terminal app.
2. The HC-05 receives it and passes it to the Arduino over serial.
3. The Arduino switches the LED ON or OFF accordingly.

## Setup
1. Wire the circuit as shown below.
2. Upload the code with Arduino IDE.
3. Pair the phone with the HC-05 (default PIN is usually 1234 or 0000).
4. Send 1 or 0 from the terminal app.

## Results
The LED switched ON/OFF in real time from the phone, verified in simulation and on physical hardware.

## Circuit Diagram & Simulation
![Screenshot 2025-05-01](https://github.com/user-attachments/assets/0a20aa44-9eaa-4775-b39b-0ef275cdcb76)

## Future Improvements
- Control multiple lights or relays
- Custom Android app
- Voice assistant integration

