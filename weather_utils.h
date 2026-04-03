#ifndef WEATHER_UTILS_H
#define WEATHER_UTILS_H

#include <Arduino.h>

const char* getWeatherStatus(float temperature);
const char* getHumidityStatus(float humidity);
float calculateFeelsLikeC(float temperature, float humidity);
void printWeatherDashboard(float temperature, float humidity);

#endif
