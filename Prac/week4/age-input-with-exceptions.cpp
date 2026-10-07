#include "cctype"
#include "iostream"
#include "stdexcept"
#include "string"
#include <exception>
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
  cout << "Enter age: ";
  string token;
  getline(cin, token);

  try {
    if (isInteger(token) == false) {
      throw invalid_argument("Age must be a whole number");
    }
    long age = stol(token);
    if (age < 0)
      throw invalid_argument("Age cannot be negative");
    if (age > 130)
      throw out_of_range("age out of range");
    cout << "Valid age: " << age << "\n";
  } catch (const invalid_argument &ex) {
    cerr << "Invalid argument: " << ex.what() << "\n";
  } catch (const out_of_range &ex) {
    cerr << "out of range: " << ex.what() << "\n";
  } catch (const exception &ex) {
    cerr << "Other error: " << ex.what() << "\n";
  }
}
