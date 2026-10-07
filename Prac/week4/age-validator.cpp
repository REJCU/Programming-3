#include <cctype>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

bool isInteger(const string &s) {
  if (s.empty())
    return false;
  size_t i = (s[0] == '-' || s[0] == '+') ? 1 : 0;
  if (i == s.size())
    return false;
  for (; i < s.size(); ++i)
    if (!isdigit(static_cast<unsigned char>(s[i])))
      return false;
  return true;
}

int main() {
  ofstream log("errors.log", ios::app);
  int validCount = 0, invalidCount = 0, total = 0;
  while (true) {
    cout << "enter your age (Q to quit): ";
    string token;
    getline(cin, token);
    if (token == "Q" || token == "q")
      break;

    ++total;
    try {
      if (isInteger(token) == false) {
        throw invalid_argument("Age must be a whole number");
      }
      long age = stol(token);
      if (age < 0)
        throw invalid_argument("Age cannot be negative");
      if (age > 130)
        throw out_of_range("age out of range");
      ++validCount;
    } catch (const exception &ex) {
      ++invalidCount;
      cerr << ex.what() << "\n";
      if (log)
        log << "input='" << token << "' error=" << ex.what() << "\n";
    }
  }
  cout << "Total=" << total << ", valid=" << validCount
       << ", invalid=" << invalidCount << "\n";
}
