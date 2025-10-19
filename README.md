# 🌿 Mango Leaf Disease Detection System

The Mango Leaf Disease Detection System is an AI + IoT-based smart agriculture solution that detects mango leaf conditions such as:
1.Webber disease
2.Dried leaf
3.Healthy leaf
Once a disease is detected, the system automatically recommends suitable medicine, optimal spraying time, and controls a motorized spraying unit via Arduino.

# Working
The ESP32-CAM module continuously captures images of mango leaves.
A trained machine learning model processes each image and classifies it as Healthy, Dried, or Webber Disease.
An Ultrasonic Sensor measures the distance between the camera and the leaf.
The system only activates if the leaf is within 20–40 cm of the camera.
If a disease is detected within this range:
A signal is sent to the Arduino UNO.
The Arduino triggers a buzzer for 1 second to confirm connection.
Then, it activates the motor driver to run the medicine pump and spray automatically.
Based on the detected disease, the system also displays recommended medicine and spraying schedule.

# Components Used
Component	Purpose
ESP32-CAM	Captures leaf images and performs ML-based disease detection
Ultrasonic Sensor (HC-SR04)	Measures distance between camera and leaf
Arduino UNO	Controls motor driver, pump, and buzzer
Motor Driver (L298N)	Drives the spraying motor/pump
Buzzer	Confirms successful signal transmission
Pump Motor	Sprays medicine automatically

# Features
✅ Real-time leaf monitoring using ESP32-CAM
✅ AI-powered disease detection
✅ Automatic spraying mechanism
✅ Smart distance-based activation (20–40 cm)
✅ Audible buzzer to ensure the signal is transmitted to motor controller  
✅ Medicine and timing recommendations

# video
link : https://drive.google.com/file/d/1Y1VQot_QWIXhQ7yMFXbftQW5pZIfhxzA/view?usp=sharing

 
 
