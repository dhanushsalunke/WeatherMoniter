# Weather Monitor with DHT11

This is a simple Arduino project that reads temperature and humidity from a DHT11 sensor and displays the values in the Serial Monitor.

## Project Files

- `WeatherMonitor.ino` - main Arduino sketch
- `config.h` - sensor pin, baud rate, and timing settings
- `weather_utils.h` - weather status function declaration
- `weather_utils.cpp` - weather status helper logic
- `.gitignore` - ignores common temporary/build files

## Components Needed

- Arduino Uno or compatible board
- DHT11 temperature and humidity sensor
- Jumper wires
- Breadboard (optional)

## Wiring

- `VCC` -> `5V`
- `GND` -> `GND`
- `DATA` -> `Pin 2`

## Required Libraries

Install these libraries from the Arduino IDE Library Manager:

- `DHT sensor library` by Adafruit
- `Adafruit Unified Sensor`

## How It Works

The project:

- reads humidity from the DHT11
- reads temperature in Celsius
- prints the values to the Serial Monitor
- uses a helper file to decide the weather status
- shows a simple weather status:
  - `Hot` if temperature is above 30 C
  - `Cool` if temperature is below 20 C
  - `Normal` otherwise

## How to Run

1. Open `WeatherMonitor.ino` in Arduino IDE.
2. Install the required libraries.
3. Connect the DHT11 sensor as shown above.
4. Select the correct board and COM port.
5. Upload the code to the Arduino.
6. Open the Serial Monitor and set baud rate to `9600`.

## Customization

You can edit `config.h` to change:

- sensor data pin
- serial baud rate
- reading interval

## Output Example

```text
DHT11 Weather Monitor
Temperature: 28.00 C
Humidity: 65.00 %
Weather: Normal
----------------------
```
