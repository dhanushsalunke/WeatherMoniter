#include <DHT.h>
#include "config.h"
#include "weather_utils.h"

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(SERIAL_BAUD_RATE);
  dht.begin();

  Serial.println("DHT11 Weather Monitor");
}

void loop() {
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT11 sensor!");
    delay(READ_INTERVAL_MS);
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" C");

  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Weather: ");
  Serial.println(getWeatherStatus(temperature));

  Serial.println("----------------------");
  delay(READ_INTERVAL_MS);
}
