#include <iostream>
#include <ostream>
using namespace std;

int main() {

  int size;
  cout << "Enter the number of elements: ";
  cin >> size;

  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }

  cout << "elements of the array are ";

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  delete[] arr;
  return 0;
}
