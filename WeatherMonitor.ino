#include <DHT.h>
#include "config.h"
#include "weather_utils.h"

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
  dht.begin();

  Serial.println();
  Serial.println("Booting DHT11 Weather Monitor...");
  Serial.println("Serial dashboard ready.");
  Serial.println();
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("[Sensor Error] Failed to read from DHT11 sensor.");
    delay(READ_INTERVAL_MS);
    return;
  }

  printWeatherDashboard(temperature, humidity);
  delay(READ_INTERVAL_MS);
}
