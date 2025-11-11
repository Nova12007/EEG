# EEG-Based Servo Motor Control

This repository contains my project for Electronics Club, focused on controlling a **servo motor using EEG (Electroencephalogram) signals**.  
The project combines **brain–computer interface (BCI)** techniques with **machine learning** and **embedded systems** to translate human brain activity into motor commands.

---

## Project Overview  
The goal of this project was to develop a system capable of interpreting EEG signals in real time and using them to control the movement of a servo motor.  
This work demonstrates how neural signals can be processed, classified, and converted into physical motion through an embedded actuator.

The system is divided into three main components:
1. **Signal Acquisition:** EEG data collected using a brainwave sensor.  
2. **Signal Processing and Classification:** Preprocessing (filtering, artifact removal), feature extraction, and machine learning classification to detect intent.  
3. **Actuation:** Sending control signals to a servo motor via a microcontroller based on the classified EEG state.

---

## System Architecture  
**Key Components:**
- **EEG Sensor Module** (e.g., NeuroSky MindWave or OpenBCI) for brainwave acquisition  
- **Preprocessing Pipeline:** Bandpass filtering, FFT-based feature extraction  
- **Machine Learning Model:** Trained to classify EEG patterns (e.g., attention or eye-blink detection)  
- **Microcontroller Interface:** Arduino or similar device to drive the servo motor  
