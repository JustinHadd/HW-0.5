#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ARRAY = 1000;

void readFile(int arr[], int arrSize);

void printArr(int arr[], int arrSize); 

float printAvg(int arr[], int arrSize);

int main() {
  int arrSize = 0;

  cout << "Enter desired size of array: ";
  cin >> arrSize;

  while(arrSize > MAX_ARRAY) {
    cout << "Invaild size. The limit is 1000. ";
    cin >> arrSize;
  }

  int* arr = new int[arrSize];
  
  readFile(arr, arrSize);
  cout << "Array: " << endl;
  printArr(arr, arrSize);
  cout << "Average: " << endl;
  cout << printAvg(arr, arrSize);

  delete[] arr;
}

void readFile(int arr[], int arrSize) {
  ifstream inFile("int.txt");

  for(int i = 0; i < arrSize; i++) {
    inFile >> arr[i];
  }
}

void printArr(int arr[], int arrSize) {
  for(int i = 0; i < arrSize; i++) {
    cout << arr[i] << endl;
  }
}

float printAvg(int arr[], int arrSize) {
  float avg = 0.0;

  for(int i = 0; i < arrSize; i++) {
    avg += arr[i];
  }

  return avg /= arrSize;
}
