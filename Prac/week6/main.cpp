#include "person.h"
#include <iostream>
using namespace std;

int main() {
  cout << "Live = " << Person::liveCount() << "\n ";
  Person a{"Ada", "Lovelace"};
  cout << "Live = " << Person::liveCount() << "\n ";
  Person b = a;
  cout << "Live = " << Person::liveCount() << " \n ";
  Person *p = new Person("Grace", "Hopper");
  cout << "Live = " << Person::liveCount() << "\n ";
  delete p;
  cout << "Live = " << Person::liveCount() << "\n ";
}
