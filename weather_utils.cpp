#include "weather_utils.h"

const char* getWeatherStatus(float temperature) {
  if (temperature > 30) {
    return "Hot";
  }

  if (temperature < 20) {
    return "Cool";
  }

  return "Normal";
}

const char* getHumidityStatus(float humidity) {
  if (humidity >= 70) {
    return "Sticky";
  }

  if (humidity <= 35) {
    return "Dry";
  }

  return "Comfortable";
}

float calculateFeelsLikeC(float temperature, float humidity) {
  return temperature - ((100.0 - humidity) / 5.0);
}

static void printDivider() {
  Serial.println("+--------------------------------------+");
}

void printWeatherDashboard(float temperature, float humidity) {
  float feelsLike = calculateFeelsLikeC(temperature, humidity);

  printDivider();
  Serial.println("|        WEATHER MONITOR DASHBOARD     |");
  printDivider();

  Serial.print("| Temperature : ");
  Serial.print(temperature, 1);
  Serial.println(" C");

  Serial.print("| Humidity    : ");
  Serial.print(humidity, 1);
  Serial.println(" %");

  Serial.print("| Condition   : ");
  Serial.println(getWeatherStatus(temperature));

  Serial.print("| Air Feel    : ");
  Serial.println(getHumidityStatus(humidity));

  Serial.print("| Feels Like  : ");
  Serial.print(feelsLike, 1);
  Serial.println(" C");

  printDivider();
  Serial.println();
}
