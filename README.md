# IR Sensor-Based Object Detection (Tiva C TM4C123G)

Detects nearby objects using an IR obstacle sensor and indicates
detection with the onboard red LED.

## Hardware
- Tiva TM4C123G LaunchPad
- IR obstacle sensor module (LM393)

## Connections
- Sensor OUT -> PF4
- Sensor VCC -> 3.3V, GND -> GND
- Onboard red LED (PF1) is used as the output

## Working
The sensor output is read as a digital input on PF4. When an object
is detected the sensor output goes LOW and the red LED turns ON;
otherwise the LED stays OFF.

## Tools
Energia IDE

## Limitations
Detection range depends on the sensor module. The system detects
presence only and does not measure distance.
