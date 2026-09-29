#include <fstream>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int pointer() {
  int age = 21;
  int *agePtr = &age;

  cout << "Address of age: " << agePtr << endl;
  cout << "Value of age using indirection: " << *agePtr << endl;

  return 0;
}

int arrayOfHeights() {
  float heights[10];

  cout << "enter the heights of 10 students: \n";
  for (int i = 0; i < 10; ++i) {
    cout << "Student " << (i + 1) << ": ";
    cin >> heights[i];
  }
  cout << "The height of the 6th student is " << heights[5] << endl;
  return 0;
}

int dynamicArray() {
  int numStudents;
  cout << "enter the num of students: ";
  cin >> numStudents;

  float *heights = new float[numStudents];

  for (int i = 0; i < numStudents; ++i) {
    cout << "Student " << (i + 1) << ": ";
    cin >> heights[i];
  }

  if (numStudents >= 6) {
    cout << "the height of the 6th student is: " << heights[5] << endl;
  } else {
    cout << "there are less than 6 students." << endl;
  }

  delete[] heights;
  return 0;
}

// done seperately
int commandlineargs(int argc, char *argv[]) {
  if (argc < 3) {
    cout << "Usage: " << argv[0] << " <FirstName> <LastName>" << endl;
    return 1;
  }

  string firstName = argv[1];
  string lastname = argv[2];
  string fullName = firstName + " " + lastname;

  cout << "Full name: " << fullName << endl;

  return 0;
}

int readFile() { // still need to write more error checking and other
  string inputFile;
  string outputfile;

  cout << "Enter input file: " << endl;
  cin >> inputFile;
  cout << "Enter output file: " << endl;
  cin >> outputfile;

  ifstream file(inputFile, ios::in);

  if (!file.is_open())
    cout << "failed to open: " << inputFile << "\n";
  else {
    ofstream writefile(outputfile);
    string str;
    while (getline(file, str)) {
      writefile << str << endl;
    }
    writefile.close();
    cout << "File copied successfully" << '\n';
  }
  file.close();
  return 0;
}

int main() {
  int choice;
  cout << "enter a num (1-4): ";
  cin >> choice;

  switch (choice) {
  case 1:
    pointer();
    break;
  case 2:
    arrayOfHeights();
    break;
  case 3:
    dynamicArray();
    break;
  case 4:
    // do not forget to do this in the recording
    // commandlineargs(int argc, char *argv[]);  // i want to find a way to
    // make it accept the command line args
    readFile();
    break;
    return 0;
  }
}
