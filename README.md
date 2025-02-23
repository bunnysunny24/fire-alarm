# Fire Detection and Alarm System 🚨🔥

This is an **IoT-based Fire Detection System** using an **Arduino** with an LCD display, buzzer, and LED indicators.

## 🔥 Features
- Detects fire using an **analog sensor** (connected to A2 pin).
- Displays **fire intensity** (Low, Mid, High) on an **LCD screen**.
- Triggers **a buzzer and LED alert** when fire is detected.
- Displays "NO FIRE" when conditions are normal.
- Uses **I2C LCD** for real-time status display.

## 🛠️ Hardware Requirements
- **Arduino Board** (Uno/Nano)
- **Fire/Flame Sensor**
- **LiquidCrystal I2C Display (16x2)**
- **Buzzer (Active)**
- **LEDs (Red, Green)**
- **Resistors & Jumper Wires**

## 🔌 Pin Connections
| Component   | Pin |
|------------|-----|
| Fire Sensor | A2  |
| Red LED     | 7   |
| Green LED 1 | 2   |
| Green LED 2 | 3   |
| Buzzer      | 12  |
| LCD (I2C)   | SDA, SCL |

## 🔄 Working Principle
1. The **sensor detects fire intensity** based on analog values.
2. If fire is detected:
   - **Red LED blinks**.
   - **Buzzer sounds at different frequencies** based on fire intensity.
   - LCD displays **fire intensity level**.
3. If no fire is detected:
   - **Green LEDs remain ON**.
   - LCD shows **"NO FIRE"** status.

## 🖥️ Installation & Usage
1. **Upload** `fire_detection_alarm.ino` to your Arduino using the **Arduino IDE**.
2. Connect the **sensor, LEDs, buzzer, and LCD** as per the circuit diagram.
3. **Power up the Arduino** and monitor the LCD for fire detection status.

## 🚀 Future Enhancements
- Add **WiFi connectivity** for **remote alerts** (via NodeMCU/ESP8266).
- Implement **automatic fire suppression** using a relay-based system.
- Integrate **SMS alerts** via **GSM module**.

## 📜 License
This project is **open-source** under the MIT License.

---

### 🔗 **Connect & Contribute**
Found this useful? Feel free to **star ⭐ the repo** and contribute!  
