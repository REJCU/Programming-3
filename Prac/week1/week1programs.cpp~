#include <iostream>

using namespace std;

void conversionExample() {
  float inputNum;
  cout << "Enter a floating point number: ";
  cin >> inputNum;

  int intNum = static_cast<int>(inputNum);
  cout << "converted to integer: " << inputNum << endl;

  if (intNum > 0) {
    cout << "the number is positive" << endl;
  } else if (intNum < 0) {
    cout << "the number is negative" << endl;
  } else {
    cout << "the number is zero" << endl;
  }
}

void findPosition() {
  int salary;
  cout << "Enter your salary:";
  cin >> salary;
  int category;
  if (salary < int(60000)) {
    category = 1;
  } else if (salary < int(80000)) {
    category = 2;
    // Salary of exactly 80000 causes it to return Invalid position type
  } else if (salary > int(80000)) {
    category = 3;
  } else {
    category = 0;
  }
  switch (category) {
  case 1:
    cout << "Position type; Engineer" << endl;
    break;
  case 2:
    cout << "Position type; Senior Engineer" << endl;
    break;
  case 3:
    cout << "Position type; Manager" << endl;
    break;
  case 0:
    cout << "Invalid position type." << endl;
  }
}

struct {
  string Colour;
  string Make;
  int Year;
} Car;

void getCar() {
  cout << "Colour of car: ";
  cin >> Car.Colour;

  cout << "Make of car: ";
  cin >> Car.Make;

  cout << "Year: ";
  cin >> Car.Year;

  cout << "The colour of the car is " << Car.Colour
       << "\nThe make of the car is " << Car.Make << "\nYear: " << Car.Year;
}

int main() {
  cout << "welcome to cp2406 2026" << endl;
  int choice;
  cout << "Enter a num (1-3): ";
  cin >> choice;
  switch (choice) {
  case 1:
    cout << "You have chosen ConversionExample" << endl;
    conversionExample();
    break;
  case 2:
    cout << "You have chosen findPosition" << endl;
    findPosition();
    break;
  case 3:
    cout << "You have chosen getCar" << endl;
    getCar();
    break;
  }
}
