/*
 CP2406 Lecture 1
 Code With Me Templates
 Complete each TODO during class.
 Code with me LINK will be provided during class
 Solutions will be provided after class
*/

#include <cctype>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <string>
using namespace std;

// =====================================================
// Example 1 - Hello World
// =====================================================
void example1() {
  printf("Hello world");
  // TODO: print Hello World!
}

// =====================================================
// Example 2 - Simple Output (cout)
// =====================================================
void example2() {
  int num = 10;
  float i = 10.3f;
  double j = 100.0;

  // TODO
  // Output:
  // int num = 10
  // float i = 10.3
  // double j = 100
  std::cout << num << std::endl;
  std::cout << i << std::endl;
  std::cout << j << std::endl;
}

// =====================================================
// Example 3 - cin Example
// =====================================================
void example3() {
  int n1, n2;

  std::cout << "Please enter 2 integers: ";

  std::cin >> n1 >> n2;
  // TODO: read n1 and n2
  std::cout << n1 + n2 << std::endl;
  // TODO: print the sum
}

// =====================================================
// Example 4 - if Statement
// =====================================================
void example4() {
  int num;

  std::cout << "Give me a number from 1 to 10: ";
  std::cin >> num;

  // TODO:
  // if num > 5
  // print "Your number is larger than 5."
  if (num > 5) {
    std::cout << num << " your number was larger than 5" << std::endl;
  }

  std::cout << num << " was the number you entered." << std::endl;
}

// =====================================================
// Example 5 - if else Statement
// =====================================================
void example5() {
  int num1, num2, maxValue;

  std::cout << "Please enter two integers: ";
  std::cin >> num1 >> num2;

  // TODO:
  // determine maximum

  if (maxValue != 0) {
    maxValue = num1 + num2;
  } else if (maxValue == 0) {
    std::cout << "Please enter two integers: ";
    std::cin >> num1 >> num2;
    maxValue = num1 + num2;
  }

  std::cout << "The maximum of the two is " << maxValue << std::endl;
}

// =====================================================
// Example 6 - switch Statement
// =====================================================
void example6() {
  char choice;
  int num1, num2, result;

  std::cout << "Enter your choice (A, S or M) => ";
  std::cin >> choice;

  std::cout << "Enter two numbers: ";
  std::cin >> num1 >> num2;

  // TODO: complete switch statement
  switch (choice) {
  case 1:
    result = num1 + num2;
    std::cout << result;
    break;
  case 2:
    result = num1 - num2;
    std::cout << result;
    break;
  case 3:
    result = num1 * num2;
    std::cout << result;
    break;
  }
}

/*
    Choices:

    A -> Add
    S -> Subtract
    M -> Multiply
*/

// =====================================================
// Example 7 - while Loop
// =====================================================
void example7() {
  int sum = 0;
  int item;

  std::cout << "Enter the list of integers: " << std::endl;

  std::cin >> item;

  // TODO:
  // while item != -1
  // add item to sum
  // read next item

  while (item != -1) {
    sum += item;
    std::cin >> item;
  }

  std::cout << "The sum is " << sum << std::endl;
}

// =====================================================
// Example 8 - Structures
// =====================================================
struct Book {
  std::string title;
  std::string author;
  float value;
  int libcode;
};

int example8() {
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

// =====================================================
// Main Menu
// =====================================================
int main() {
  int choice;

  std::cout << "\nCP2406 Lecture 1 Examples\n";
  std::cout << "1. Hello World\n";
  std::cout << "2. Simple Output\n";
  std::cout << "3. cin Example\n";
  std::cout << "4. if Statement\n";
  std::cout << "5. if else Statement\n";
  std::cout << "6. switch Statement\n";
  std::cout << "7. while Loop\n";
  std::cout << "8. Structures\n";
  std::cout << "Choice: ";

  std::cin >> choice;

  switch (choice) {
  case 1:
    example1();
    break;
  case 2:
    example2();
    break;
  case 3:
    example3();
    break;
  case 4:
    example4();
    break;
  case 5:
    example5();
    break;
  case 6:
    example6();
    break;
  case 7:
    example7();
    break;

  case 8:
    std::cin.ignore();
    example8();
    break;

  default:
    std::cout << "Invalid choice\n";
  }

  return 0;
}
