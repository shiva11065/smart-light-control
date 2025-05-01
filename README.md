# Smart Light Control
## Project Overview
This project shows how to control the remote led lights by microcontroller (Arduino Uno) and mobile applications through Bluetooth communication. A mobile phone sends triggered / canceled commands via the terminal Bluetooth application, received by the HC-05 Bluetooth module connected to Arduino. Based on the received signal, Arduino changes the corresponding LED lights. This project acts as the basis for wireless control systems in household and IoT automation applications.

## Components & Apps Used
#### Hardware:
- Arduino Uno
- HC-05 Bluetooth Module
- LED (any color)
- 220Ω Resistor
- Breadboard & Jumper Wires
- Android Mobile Phone
#### Software:
- Arduino IDE
- Bluetooth Terminal App *(e.g., Serial Bluetooth Terminal from Play Store)*
- Tinkercad *(for simulation and prototyping)*

## Libraries
The code uses standard Arduino libraries:
- SoftwareSerial.h — enables serial communication on digital pins 2 and 3 for HC-05.
No third-party libraries are required beyond this for compilation.

## Project Outcome
- A functional wireless LED control system via mobile phone.
- Successful demonstration of Bluetooth serial communication between a smartphone and a microcontroller.
- Real-time ON/OFF switching of an LED through user commands (1 = ON, 0 = OFF).
- Circuit simulation tested on Tinkercad and verified on physical hardware.

## Conclusion
This project proves that the concepts doomotic are simple but effective can be built with low components and basic knowledge about integrated systems. It emphasizes the practical application of microcontroller programming protocols and serial communication. Future extensions may include multicultural control, interface based on applications and integrated with voice assistants for a full smart lighting system.

## Circuit Diagram & Simulation
![Screenshot 2025-05-01](https://github.com/user-attachments/assets/0a20aa44-9eaa-4775-b39b-0ef275cdcb76)

