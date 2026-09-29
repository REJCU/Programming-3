#include "car_Utils.h"
#include <iomanip>
#include <ios>
#include <iostream>
#include <iterator>
#include <ostream>

using namespace std;
int main() {
  cout << "CP2406 - Week 3: Functions definition\n";
  double distanceKm, timeHours, litres;
  cout << "Enter distance travelled (km): ";
  cin >> distanceKm;

  cout << "Enter time taken (hours): ";
  cin >> timeHours;

  cout << "Enter litres used (litres): ";
  cin >> litres;

  double speedKm = calculateSpeed(distanceKm, timeHours);
  double lper100 = fuelEfficiencyPer100Km(litres, distanceKm);
  double speedMs = calcSpeedMs(speedKm);
  double co2 = co2Emissions(litres);

  cout << fixed << setprecision(2);
  cout << "speed: " << speedKm << "km/h (" << speedMs << "m/s)" << endl;
  cout << "Fuel efficiency: " << lper100 << "L/100 km\n";
  cout << "Estimated CO2 emissions: " << co2 << " kg" << endl;

  return 0;
}
