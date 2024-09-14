#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ARRAY = 1000;

void readFile(int arr[]);

void printArr(int arr[]); 

float printAvg(int arr[]);

int main() {
  int arr[MAX_ARRAY];
  readFile(arr);
  cout << "Array: " << endl;
  printArr(arr);
  cout << "Average: " << endl;
  cout << printAvg(arr);
}

void readFile(int arr[]) {
  ifstream inFile("int.txt");

  int index = 0;

  while(inFile >> arr[index]) {
    index++;
  }
}

void printArr(int arr[]) {
  for(int i = 0; i < MAX_ARRAY; i++) {
    cout << arr[i] << endl;
  }
}

float printAvg(int arr[]) {
  float avg = 0.0;

  for(int i = 0; i < MAX_ARRAY; i++) {
    avg += arr[i];
  }

  return avg /= MAX_ARRAY;
}
