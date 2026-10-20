# Test Results — Embedded Sensor Monitoring System

## 1. Project Information

| Item | Description |
|---|---|
| Project Name | Embedded Sensor Monitoring System |
| Microcontroller | Arduino Uno |
| Temperature and Humidity Sensor | DHT22 |
| Warning Indicator | LED |
| Programming Language | Arduino C++ |
| Development Environment | Wokwi / Arduino IDE |
| Test Status | Partially tested |

## 2. Testing Objectives

The objective of testing is to verify that the system:

- Reads temperature and humidity values from the DHT22 sensor.
- Displays the sensor readings.
- Keeps the LED off under normal temperature conditions.
- Turns the LED on when the temperature reaches or exceeds the 30°C threshold.

## 3. Test Results

| Test ID | Test Description | Temperature | Humidity | Expected LED State | Observed LED State | Status |
|---|---|---:|---:|---|---|---|
| TC-01 | Initial sensor reading | 24°C | 40% | OFF | OFF | PASS |
| TC-02 | Normal temperature test | 25°C | Not recorded | OFF | OFF | PASS |
| TC-03 | Normal temperature range test | Between 24°C and 29.9°C | Not recorded | OFF | OFF | PASS |
| TC-04 | Temperature at the threshold | 30°C | Not recorded | ON | ON | PASS |
| TC-05 | High temperature test | 35°C | Not recorded | ON | ON | PASS |

**Note:** The table records the behavior you reported. For TC-03, TC-04, and TC-05, the status assumes you observed the stated LED behavior during testing.

## 4. Test Procedure and Observations

### TC-01: Initial Sensor Reading

**Procedure:**
1. Run the program.
2. Observe the temperature and humidity readings.
3. Check the LED state.

**Observed results:**
- Temperature: 24°C
- Humidity: 40%
- LED: OFF

**Conclusion:** The system displayed temperature and humidity readings, and the LED remained off at the reported normal temperature.

**Status:** PASS

### TC-02: Normal Temperature Test

**Procedure:**
1. Set or observe the temperature at 25°C.
2. Check the LED state.

**Observed results:**
- Temperature: 25°C
- LED: OFF

**Conclusion:** The LED remained off under the tested normal-temperature condition.

**Status:** PASS

### TC-03: Normal Temperature Range Test

**Procedure:**
1. Test temperatures within the range of 24°C to below 30°C.
2. Observe the LED at the tested temperatures.

**Expected behavior:** The LED remains off when the temperature is below 30°C.

**Observed results:** You reported that the LED remained off throughout the stated range of 24°C to 29.9°C.

**Status:** PASS, based on the reported observation.

### TC-04: Temperature Threshold Test

**Procedure:**
1. Set or observe the temperature at 30°C.
2. Check the LED state.

**Expected behavior:** The LED turns on when the temperature reaches 30°C.

**Observed results:**
- Temperature: 30°C
- LED: ON

**Conclusion:** The LED activated at the configured temperature threshold.

**Status:** PASS

### TC-05: High Temperature Test

**Procedure:**
1. Set or observe the temperature at 35°C.
2. Check the LED state.

**Expected behavior:** The LED remains on when the temperature is above the threshold.

**Observed results:**
- Temperature: 35°C
- LED: ON

**Conclusion:** The LED activated under the reported high-temperature condition.

**Status:** PASS

## 5. Test Summary

| Metric | Result |
|---|---:|
| Test Cases Documented | 5 |
| Passed | 5 |
| Failed | 0 |
| Additional Tests Required | Yes |

The five documented test cases passed according to the reported observations. The temperature and humidity sensor readings and the LED's threshold behavior were checked.

## 6. Current System Behavior

The system uses a temperature threshold of **30°C** to control the warning LED.

- **Temperature below 30°C:** LED OFF.
- **Temperature equal to 30°C:** LED ON.
- **Temperature above 30°C:** LED ON.

The initial reported sensor reading was 24°C with 40% humidity, and the LED was off.

## 7. Limitations and Future Improvements

Potential improvements include:

- Testing additional temperatures around the 30°C threshold.
- Recording humidity readings at multiple conditions.
- Testing sensor disconnection and invalid readings.
- Recording screenshots of the circuit and Serial Monitor.
- Adding a buzzer or cooling fan for additional warning or control functionality.

## 8. Evidence

Add screenshots of your actual tests to this section when available.

Suggested evidence:

- Initial reading showing 24°C and 40% humidity.
- Normal-temperature test at 25°C with the LED off.
- Threshold test at 30°C with the LED on.
- High-temperature test at 35°C with the LED on.

Example Markdown syntax:

```markdown
![Initial Sensor Reading](../media/initial-reading.png)

![Normal Temperature Test](../media/normal-temperature.png)

![Threshold Test](../media/threshold-test.png)

![High Temperature Test](../media/high-temperature.png)
```

Replace the example image paths with the actual screenshot filenames in your repository.

## 9. Conclusion

The reported tests demonstrate the basic functionality of the Embedded Sensor Monitoring System. The DHT22 provided an initial temperature reading of 24°C and humidity reading of 40%. The LED remained off below the 30°C threshold and turned on at 30°C and 35°C. These results indicate that the system's basic temperature-warning behavior is working as expected under the tested conditions.
