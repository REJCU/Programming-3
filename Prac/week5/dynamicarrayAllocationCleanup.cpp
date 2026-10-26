#include <iostream>
#include <ostream>
using namespace std;

// (int dynArr[], int size) {
//   const int dynArr[];

//   for (int i, i < size, i++) {
//     cout << dynArr[i] << " ";
//   }
//   cout << endl;
//   return 0;
// }

int *PushArray(int size) {
  int *arr = new int[size];
  for (int i = 0; i < size; i++) {
    arr[i] = i + 1;
  }
  return arr;
}

int outputArray(int arr[], int size) {
  cout << "elements of the array are ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}

int main() {

  int size;
  cout << "Enter the number of elements: ";
  cin >> size;

  int *arr = PushArray(size);
  outputArray(arr, size);

  cout << "average "
       << "\n";

  cout << endl;

  delete[] arr;
  return 0;
}
