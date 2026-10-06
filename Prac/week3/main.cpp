// TODO - figure out what they mean by the trips. on total or not
#include "carutils.h"
#include <iomanip>
#include <iostream>
#include <ostream>
#include <vector>
using namespace std;

struct Trip {
  double distanceKm;
  double timeHours;
  double litres;
};

void showMenu() {
  cout << "1) calculate average speed (km/h)" << endl;
  cout << "2) calculate fuel efficency (L/100 km) " << endl;
  cout << "3) convert speed from km/h to m/s " << endl;
  cout << "4) Estimate CO2 emmissions " << endl;
  cout << "5) Quit" << endl;
}

int main() {
  int choice;
  int num_of_trips;

  cout << "How many trips? ";
  cin >> num_of_trips;

  // init vect
  vector<Trip> trips;
  trips.reserve(num_of_trips);

  for (int i = 0; i < num_of_trips; i++) {
    cout << "\nTrip " << (i + 1) << "\n";

    Trip trip = {0, 0, 0};

    do {
      showMenu();
      cout << "choice: ";
      cin >> choice;
      switch (choice) {

      case 1: {
        // double distance, time;
        cout << "Distance (km): ";
        // cin >> distance;
        cin >> trip.distanceKm;
        cout << "Time (hours): ";
        // cin >> time;
        cin >> trip.timeHours;
        double speed = calculateSpeed(trip.distanceKm, trip.timeHours);
        cout << "Average speed: " << speed << " km/ h\n ";
        break;
      }

      case 2: {
        cout << " Litres used: ";
        // cin >> litres;
        cin >> trip.litres;
        cout << " Distance (km): ";
        cin >> trip.distanceKm;
        double lper100 = fuelEfficiencyPer100Km(trip.litres, trip.distanceKm);
        cout << "Fuel Efficiency: " << lper100 << "L/100 km\n";
        break;
      }

      case 3: {
        double speedKmh;
        cout << "Speed (km/h): ";
        cin >> speedKmh;
        double speedMs = calcSpeedMs(speedKmh);
        cout << "Speed: " << speedMs << " m/s\n";
        break;
      }

      case 4: {
        double litres;
        cout << "Litres used: ";
        cin >> litres;
        double co2 = co2Emissions(litres);
        cout << "Estimated CO2 emissions: " << co2 << " kg\n";
        break;
      }
      case 5: {
        cout << "Goodbye!\n";
        break;
      }
      default:
        cout << "Invalid option. Please try again.\n";
      }

    } while (choice != 5);
    trips.push_back(trip);
  }
  double totalDistance = 0, totalTime = 0, totalLitres = 0;

  for (const Trip &t : trips) {
    totalDistance += t.distanceKm;
    totalTime += t.timeHours;
    totalLitres += t.litres;
  }

  double avgKmh = calculateSpeed(totalDistance, totalTime);

  cout << fixed << setprecision(2);
  cout << "Total distance: " << totalDistance << " km\n";
  cout << "Total time: " << totalTime << " hours\n";
  cout << "Total litres: " << totalLitres << " L\n";
  cout << "Average speed: " << avgKmh << " km/h (" << calcSpeedMs(avgKmh)
       << " m/s)\n";
  cout << "Fuel efficiency: "
       << fuelEfficiencyPer100Km(totalLitres, totalDistance) << " L/100 km\n";
  cout << "Estimated CO2: " << co2Emissions(totalLitres) << " kg\n";

  return 0;
}
