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
