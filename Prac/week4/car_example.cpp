#include <iostream>
#include <stdexcept>
using namespace std;

struct Car {
  double distanceKm{0};
  double fuelL{0};
  void addTrip(double d, double L) {
    if (d < 0 || L < 0)
      throw invalid_argument("negative input");
    distanceKm += d;
    fuelL += L;
  }
  double efficencyLPer100() const { // naive
    if (distanceKm == 0)
      return 0; // set breakpoint
    return (fuelL / distanceKm) * 100.0;
  }
};

int main() {
  Car c;
  c.addTrip(120, 20);
  cout << c.efficencyLPer100() << "\n"; // step into
}
