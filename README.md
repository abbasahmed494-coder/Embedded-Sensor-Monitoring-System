# Embedded Sensor Monitoring System

## 1. Project Overview

The Embedded Sensor Monitoring System is a microcontroller-based project designed to monitor temperature and humidity using an Arduino Uno and a DHT22 sensor. The system displays sensor readings through the Serial Monitor and activates a warning LED when the measured temperature reaches or exceeds a predefined threshold.

The project is simulated using Wokwi and demonstrates fundamental embedded systems concepts, including sensor interfacing, digital output control, conditional logic, and error handling.

## 2. Project Objectives

- Monitor environmental temperature and humidity.
- Interface a DHT22 sensor with an Arduino Uno.
- Display real-time sensor readings through the Serial Monitor.
- Implement threshold-based temperature monitoring.
- Activate a warning LED when the temperature reaches 30°C or higher.
- Handle invalid sensor readings.
- Practice embedded programming, debugging, and functional testing.

## 3. Components and Tools

| Component or Tool | Purpose |
|---|---|
| Arduino Uno | Main microcontroller platform |
| DHT22 sensor | Measures temperature and relative humidity |
| LED | Indicates a high-temperature warning |
| 220 Ω resistor | Limits current through an external LED |
| Wokwi | Simulates the electronic circuit |
| Arduino C++ | Implements the monitoring logic |
| GitHub | Stores the source code and project documentation |

**Note:** The external LED and resistor are optional if the Arduino Uno's built-in LED on digital pin 13 is used.

## 4. System Architecture

The system operates according to the following sequence:

1. Initialize the Arduino, sensor, and LED output.
2. Read temperature and humidity from the DHT22 sensor.
3. Check whether the sensor readings are valid.
4. Display valid readings through the Serial Monitor.
5. Compare the measured temperature against the 30°C threshold.
6. Activate the warning LED when the temperature is at or above the threshold.
7. Turn off the warning LED when the temperature falls below the threshold.
8. Repeat the monitoring process every two seconds.

## 5. Circuit Connections

### DHT22 Sensor

| DHT22 Pin | Arduino Uno Connection |
|---|---|
| VCC | 5V |
| GND | GND |
| DATA | Digital pin 2 |

### External Warning LED

| Connection | Arduino Uno Connection |
|---|---|
| Digital output | Pin 13 |
| Current-limiting resistor | 220 Ω in series with the LED |
| LED anode (+) | Connected through the resistor to pin 13 |
| LED cathode (−) | GND |

The Arduino Uno's built-in LED on pin 13 can be used instead of an external LED.

See [`docs/wiring-diagram.png`](docs/wiring-diagram.png) for the circuit diagram.

## 6. Software Implementation

The program is written in Arduino C++ and uses the DHT sensor library.

The main software functions are:

- **Sensor initialization:** Initializes the DHT22 sensor.
- **Data acquisition:** Reads temperature and humidity measurements.
- **Input validation:** Detects invalid sensor readings.
- **Threshold comparison:** Compares the measured temperature with the configured limit.
- **Warning indication:** Controls the LED according to the temperature.
- **Serial monitoring:** Displays measurements and warning messages.

The temperature threshold is defined as:

`TEMP_LIMIT_C = 30.0`

When the temperature is greater than or equal to 30°C, the warning LED turns on. Otherwise, the LED remains off.

## 7. Testing and Verification

The system should be tested under different simulated temperature conditions.

| Test Case | Temperature | Expected LED State |
|---|---:|---|
| Normal temperature | 24°C | OFF |
| Temperature below threshold | 29.9°C | OFF |
| Temperature at threshold | 30°C | ON |
| High temperature | 35°C | ON |
| Temperature returns to normal | 25°C | OFF |

Additional testing should verify the behavior when sensor readings are invalid.

Actual results should be recorded after executing each test in Wokwi.

See [`docs/test-results.md`](docs/test-results.md) for the test plan and results table.

## 8. How to Run the Simulation

1. Open the project in Wokwi.
2. Select or create an Arduino Uno simulation.
3. Add the DHT22 sensor and connect it according to the wiring table.
4. Use the built-in LED or connect an external LED with a 220 Ω resistor.
5. Add the DHT sensor library if it is not already available.
6. Copy the program into `sketch.ino`.
7. Start the simulation.
8. Open the Serial Monitor to observe temperature and humidity readings.
9. Change the simulated temperature to verify the warning behavior.

## 9. Project Structure

```text
embedded-sensor-monitor/
├── README.md
├── src/
│   └── sketch.ino
├── docs/
│   ├── wiring-diagram.png
│   └── test-results.md
└── media/
    └── demonstration.gif
```

## 10. Skills Demonstrated

- Embedded programming with Arduino C++
- Microcontroller digital input/output
- Temperature and humidity sensor interfacing
- Conditional logic and threshold monitoring
- Basic error handling
- Electronic circuit connections
- Simulation and debugging
- Functional testing and technical documentation
- GitHub project organization

## 11. Limitations and Future Improvements

This project is an educational simulation and has not necessarily been validated on physical hardware.

Potential future improvements include:

- Porting the application to an STM32 microcontroller using STM32CubeIDE.
- Displaying sensor readings on an LCD or OLED.
- Adding a buzzer for audible warnings.
- Logging measurements over time.
- Sending readings to a computer or IoT dashboard.
- Adding configurable warning thresholds.
- Improving sensor-failure detection and recovery.

## 12. Demonstration

A demonstration should show the circuit running, sensor readings appearing in the Serial Monitor, and the warning LED responding to temperature changes.

See [`media/demonstration.gif`](media/demonstration.gif) when an actual simulation recording is available.

## 13. Author

**Ahmed Abbas**

Mechatronics Engineering | Embedded Systems | Automotive Engineering

GitHub: https://github.com/abbasahmed494-coder
LinkedIn: https://www.linkedin.com/in/ahmed-abbas-7a7b04221/
