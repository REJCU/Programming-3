#include "person.h"

int Person::liveCount() = 0;

Person::Person(const std::string &firstName, const std::string &lastName)
    : firstName(firstName), lastName(lastName) {
  ++liveCount();
}

Person::Person(const Person &other)
    : firstName(other.firstName), lastName(other.lastName) {
  ++liveCount();
}

Person::~Person() { --liveCount(); }

int Person::liveCount() { return liveCount(); }
