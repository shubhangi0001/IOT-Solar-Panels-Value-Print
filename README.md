# Solar Panels Value Print in I2C LCD Display Using Arduino

This project is an IoT application created using Tinkercad. It involves displaying the values from solar panels on a 16x2 I2C LCD using an Arduino Uno R3. This project helps monitor the performance of solar panels by providing real-time data.

## Table of Contents

- [Description](#description)
- [Components Used](#components-used)
- [Steps](#steps)
  - [Step 1: Assemble the Circuit](#step-1-assemble-the-circuit)
  - [Step 2: Upload the Code](#step-2-upload-the-code)
- [Technologies Used](#technologies-used)
- [Installation](#installation)

## Description

This IoT project displays real-time values from solar panels on a 16x2 I2C LCD using an Arduino Uno R3. The project is designed and simulated in Tinkercad, making it easy to replicate and understand.
[Live TinkerCad](https://www.tinkercad.com/things/hZc9Om3w0xW-solar-panels-value-print-in-i2c-lcd-display-using-arduino)

## Components Used

- Solar Cell
- Arduino Uno R3
- LCD 16x2 (I2C)
- Connecting Wires
- Breadboard (optional, depending on setup)

## Steps

### Step 1: Assemble the Circuit
1. Connect the Solar Cell to the analog input pin (A0) of the Arduino Uno R3.
2. Connect the LCD 16x2 (I2C) to the Arduino:
  - VCC to 5V
  - GND to GND
  - SDA to A4
  - SCL to A5
3. Ensure all connections are secure.

### Step 2: Upload the Code
1. Install the required libraries in the Arduino IDE:
  - Wire.h
  - LiquidCrystal_I2C.h
2. Open the Arduino IDE and paste the provided code.
3. Connect the Arduino Uno R3 to your computer via USB.
4. Select the correct board and port in the Arduino IDE.
5. Upload the code to the Arduino Uno R3.

## Technologies Used
  - Tinkercad
  - Arduino IDE
  - C++

## Installation
git clone https://github.com/shubhangi0001/Solar-Panels-Value-Print.git

