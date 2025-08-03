# 🔥 Smart Smoke Detection System with Motor Control

This project is a simple and effective safety mechanism designed to **automatically stop a motor when smoke is detected**. It's ideal for smart car models, IoT safety systems, or home automation prototypes.

## 🚀 Features
- Real-time smoke detection using MQ2 sensor
- Automatically stops the motor using a relay when smoke is present
- Restarts the motor when smoke is cleared
- Works continuously in a loop

## 🧠 How It Works
The MQ2 smoke sensor continuously monitors for the presence of smoke. When smoke is detected:
- The system immediately turns off the relay, stopping the connected gear motor
- Once the smoke clears, the relay is activated again, and the motor resumes

This loop runs indefinitely, making the system fully automated and real-time responsive.

## 🧰 Hardware Required
- Arduino (Uno, Mega, Nano etc.)
- MQ2 Smoke Sensor (Digital Output)
- Relay Module (1-channel)
- Gear Motor
- Jumper Wires
- Power Supply

## 🔌 Circuit Connections

| Component        | Arduino Pin |
|------------------|-------------|
| MQ2 VCC          | 5V          |
| MQ2 GND          | GND         |
| MQ2 Digital Out  | D2          |
| Relay IN         | D3          |
| Relay VCC        | 5V          |
| Relay GND        | GND         |

Motor should be connected to power **through the relay module**, so the relay can cut off its power when smoke is detected.

## 💻 Arduino Code
You can find the code in the file: `smoke_motor_control.ino`  
This code runs a loop and continuously checks for smoke presence.

## 📈 Use Cases
- Smart cars (fire safety)
- Factory automation
- Model-based fire alert system
- Science exhibitions and IoT demonstrations

## 📦 Future Improvements
- Add buzzer or LED for visual/audio warning
- Use analog sensor values for better accuracy
- Send alert to phone using ESP32 or GSM module

---

**Made with ❤️ by Divyansh**

