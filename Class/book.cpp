/* book.cpp --- one-book inventory */
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <string>

struct Book {
  std::string title;
  std::string author;
  float value;
  int libcode;
};

int main() {
  srand(time(0));

  Book bookRec;
  std::cout << "Please enter the book title:" << std::endl;
  std::getline(std::cin, bookRec.title);
  std::cout << "Please enter the author:" << std::endl;
  std::getline(std::cin, bookRec.author);
  std::cout << "Please enter the value:" << std::endl;
  std::cin >> bookRec.value;

  // still need to make random
  int radNum = 0;
  std::cout << "please enter libcode" << std::endl;
  std::cin >> radNum;
  int randlib = rand() / radNum;
  std::cout << bookRec.libcode;
  //  std::cin >> bookRec.libcode;

  std::cout << bookRec.title << " by " << bookRec.author << ": $" << std::fixed
            << std::setprecision(2) << bookRec.value
            << "\n libcode: " << bookRec.libcode << std::endl;
  return 0;
}
