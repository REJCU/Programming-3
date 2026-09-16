#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int age = 21;
  int *agePtr = &age;

  cout << "Address of age: " << agePtr << endl;
  cout << "Value of age using indirection: " << *agePtr << endl;
}
