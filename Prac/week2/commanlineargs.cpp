#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Usage: " << argv[0] << " <FirstName> <LastName>"
         << endl; // usage guide if user does not input two strings
    return 1;
  }

  string firstName = argv[1];
  string lastname = argv[2];
  string fullName = firstName + " " + lastname;

  cout << "Full name: " << fullName << endl;

  return 0;
}
