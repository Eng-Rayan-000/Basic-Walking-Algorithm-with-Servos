#  Basic Walking Algorithm with Servos

This Arduino-based project demonstrates a simple walking gait using four servo motors that mimic the basic movements of a two-legged robot. The walking algorithm is designed to lift, swing, and lower each leg in a repeated 8-step cycle.

---

##  Features

- Controls **4 servo motors** (2 hips + 2 knees)
- Simulates a **basic bipedal walking sequence**
- Continuous walking loop with adjustable timing
- Easy-to-understand code structure for beginners

---

##  Walking Sequence

The walking gait follows this 8-step sequence:

1. **Lift Right Leg** → `kneeRight.write(60)`
2. **Swing Right Forward** → `hipRight.write(120)`
3. **Lower Right Leg** → `kneeRight.write(90)`
4. **Shift Weight Left** → `hipLeft.write(60)`
5. **Lift Left Leg** → `kneeLeft.write(60)`
6. **Swing Left Forward** → `hipLeft.write(120)`
7. **Lower Left Leg** → `kneeLeft.write(90)`
8. **Shift Weight Right** → `hipRight.write(60)`

---

##  Hardware Requirements

- ✅ Arduino Uno or compatible board  
- ✅ 4x Servo motors  
- ✅  5V power source 
- ✅ Jumper wires  
- ✅ Breadboard 





