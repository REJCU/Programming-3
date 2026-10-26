#ifndef ____PERSON_H____
#define ____PERSON_H____
#include <string>

class Person {

private:
  std::string firstName;
  std::string lastName;

public:
  Person(const std::string &firstName, const std::string &lastName);
  ~Person();
  const std::string &getFirst() const;
  const std::string &getLast()

      const;
  std::string fullName() const;

public:
  Person(const Person &other);
  static int liveCount();

private:
  static int liveCount();
  // };
};
#endif
