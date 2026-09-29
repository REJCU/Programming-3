#include "car_Utils.h"
#include <iostream>
#include <memory>
using namespace std;

double calculateSpeed(double distanceKm, double timeHours) {
  if (timeHours <= 0) {
    cerr << "Time must be > 0 hours. \n";
    return 0.0;
  }
  return distanceKm / timeHours;
}

double fuelEfficiencyPer100Km(double litresUsed, double distanceKm) {
  if (distanceKm <= 0) {
    cerr << "Distance must be > 0 kilometres. \n";
    return 0.0;
  }
  return (litresUsed / distanceKm) * 100.0;
}

double calcSpeedMs(double distanceKm) { return distanceKm / 3.600; }

double co2Emissions(double litresUsed) { return litresUsed * 2.31; }
