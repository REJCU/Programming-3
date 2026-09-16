#include <iostream>
#include <iterator>
using namespace std;

int pointer() {
  int age = 21;
  int *agePtr = &age;

  cout << "Address of age: " << agePtr << endl;
  cout << "Value of age using indirection: " << *agePtr << endl;

  return 0;
}

int arrayOfHeights() {
  float heights[10];

  cout << "enter the heights of 10 students: \n";
  for (int i = 0; i < 10; ++i) {
    cout << "Student " << (i + 1) << ": ";
    cin >> heights[i];
  }
  cout << "The height of the 6th student is " << heights[5] << endl;
  return 0;
}

int dynamicArray() {
  int numStudents;
  cout << "enter the num of students: ";
  cin >> numStudents;

  float *heights = new float[numStudents];

  for (int i = 0; i < numStudents; ++i) {
    cout << "Student " << (i + i) << ": ";
    cin >> numStudents;
  }

  if (numStudents >= 6) {
    cout << "the height of the 6th student is: " << heights[6] << endl;
  } else {
    cout << "there are less than 6 students." << endl;
  }

  delete[] heights;
  return 0;
}

int main() {
  int choice;
  cout << "enter a num (1-5): ";
  cin >> choice;

  switch (choice) {
  case 1:
    pointer();
  case 2:
    arrayOfHeights();
  case 3:
    dynamicArray();
  }

  return 0;
}
