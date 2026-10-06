#ifndef CP2406_WEEK3_CARUTILS_H
#define CP2406_WEEK3_CARUTILS_H

double calculateSpeed(double distanceKm, double timeHours);
double fuelEfficiencyPer100Km(double litresUsed, double distanceKm);
double calcSpeedMs(double calculateSpeed);
double co2Emissions(double fuelEfficency);

#endif
