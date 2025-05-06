# High Concentration Photovoltaic (HCPV) System with Arduino-based Solar Tracking

## 🌞 Overview

This project focuses on enhancing the efficiency of solar energy collection using a High Concentration Photovoltaic (HCPV) system, integrated with a dual-axis solar tracking mechanism controlled via an Arduino microcontroller. The goal is to maximize energy output by ensuring that the solar panels remain aligned with the sun’s position throughout the day.

---

## 🔍 Problem Statement

Fixed-angle solar panels suffer from efficiency losses due to the constantly changing position of the sun. Without a dynamic orientation system, a large percentage of incident solar radiation is wasted, especially in high-concentration photovoltaic setups that require precise alignment.

---

## 💡 Solution Provided

A dual-axis solar tracking system was developed using light-dependent resistors (LDRs), servo motors, and an Arduino microcontroller. The tracker aligns the solar panel dynamically based on light intensity differentials, ensuring optimal exposure to sunlight at all times during the day.

---

## 🛠️ Technical Implementation

- **Sensors**: Four LDRs placed at the corners of a cross-shaped sensor array.
- **Controller**: Arduino Uno programmed to interpret LDR data and control servo positions.
- **Actuation**: Two servo motors for dual-axis movement (azimuth and elevation).
- **Concentration System**: Fresnel lens used to concentrate sunlight onto the photovoltaic cell.
- **Structure**: Lightweight adjustable panel mount built with 3D-printed and aluminum parts.
- **Power Output Measurement**: Voltage and current readings were taken with varying load resistances.

---

## 📈 Key Results

- Achieved significant improvement in power output using the dual-axis tracker compared to a fixed panel.
- Demonstrated that the tracker keeps the panel aligned within ±2° of the sun’s position throughout the day.
- Engineered a high-concentration photovoltaic (HCPV) model using DFM, DFA principles, capable of attaining a **1000x sun concentration ratio**, producing **117 kWh annually**.
- Performed energy analysis on **NREL’s System Advisor Model (SAM)**, demonstrating **four HCPV units could produce as much power as a 1m² silicon-based solar panel**, with a potential daily output of **320 Wh**.
- Measured voltage and current outputs under different lens focal lengths and tracking positions.

---

## 🛠️ CAD & Fabrication

- Custom-designed 3D-printed mounts using **PLA** material.
- Simulated using **TinkerCAD** and fabricated in **Rapid Prototyping Lab**.

---

## 🖥️ Software + Code

**Languages & Platforms**:
- **Arduino IDE (C/C++)** for firmware development.
- **TinkerCAD** for circuit design and virtual simulation.
- **System Advisor Model (SAM)** for solar energy system simulation and **LCOE** estimation.

---

## 🔗 Technologies Used

- Arduino Uno
- LDR sensors
- Servo Motors (SG90)
- Photovoltaic Cell
- Fresnel Lens
- 3D-printed support components

---

## 📌 How to Use

1. Upload the `SolarTracker.ino` code to the Arduino board.
2. Connect the LDR sensors in a cross-configuration and mount the servos.
3. Run the system and observe real-time alignment.
4. Measure and log voltage and current values using a multimeter.

---
