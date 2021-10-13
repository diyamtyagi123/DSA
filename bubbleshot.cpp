#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) {
  for (int i = 0; i < size-1; i++) {
    for (int j = 0; j < size-(i-1); j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int arr[] ={-2,11,23,99,81,56,27,4,6,34,7,-7,8,33,65,78,26,58,-64,35,9,45,11,17,61};;
  int size = sizeof(arr) / sizeof(int);
  cout << "Sorted Array in Ascending Order:\n";  
  bubbleSort(arr, size);
}