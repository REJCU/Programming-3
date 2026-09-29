#include "car_Utils.h"
#include <iostream>
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
