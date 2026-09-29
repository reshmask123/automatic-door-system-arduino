# automatic-door-system-arduino
An Arduino-based automatic door system using an HC-SR04 ultrasonic sensor and servo motor.
# 🚪 Automatic Door System

An Arduino-based automatic door system that uses an HC-SR04 ultrasonic sensor to detect a nearby person or object and a servo motor to automatically open and close the door.

## 🚀 Features

- Automatic door opening and closing
- Distance detection using HC-SR04
- Servo motor control
- Simple Arduino-based design
- Simulated using Tinkercad

## 🧰 Components Required

- Arduino Uno R3
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- Jumper Wires

## 🔌 Pin Connections

| Component | Arduino Pin |
|---|---|
| HC-SR04 VCC | 5V |
| HC-SR04 TRIG | D7 |
| HC-SR04 ECHO | D8 |
| HC-SR04 GND | GND |
| Servo Signal | D9 |
| Servo VCC | 5V |
| Servo GND | GND |

## ⚙️ Working Principle

The HC-SR04 ultrasonic sensor measures the distance between the sensor and a nearby object.

- Person/object within 30 cm → Door OPEN
- Person/object beyond 30 cm → Door CLOSE

The Arduino processes the distance and controls the servo motor accordingly.

## 💻 Software

- Arduino IDE
- Tinkercad Circuits

## 🎯 Project Goal

The goal of this project is to demonstrate a simple automatic door system using an ultrasonic sensor and servo motor.

## 🔮 Future Improvements

- Add an IR safety sensor
- Add an LCD display
- Add an RFID-based access system
- Add IoT-based monitoring

## 👩‍💻 Author

Created as an Arduino and Tinkercad electronics project.
