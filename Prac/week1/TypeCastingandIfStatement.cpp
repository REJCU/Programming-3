#include <iostream>
#include <ostream>

using namespace std;

void conversionExample() {
  float inputNum;
  cout << "Enter a flaoting point number: ";
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

int main() {
  cout << "welcome to cp2406 2026" << endl;
  conversionExample();
}
