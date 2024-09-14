/**
 * @file p2p3.cpp
 * @author Justin Haddock
 * @date 2024-09-13
 * @brief Takes integer data and writes into an array, of which the size is user-inputed.
 * 
 * Takes int.txt and reads as many integers as desired by the user (no greater than 1000).
 */

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ARRAY = 1000;


/**
 * Reads a file and writes into arr
 *
 * @param int arr[] The array storing the file data
 * @param int arrSize user-defined array size
 * @pre user input for arrSize
 * @return void 
 * @post printArr
 * 
 */
void readFile(int arr[], int arrSize);


/**
 * Prints the data stored in arr
 *
 * @param int arr[] The array storing the data
 * @param int arrSize User-defined array size
 * @pre readFile
 * @return void 
 * @post printAvg
 * 
 */
void printArr(int arr[], int arrSize); 


/**
 * Prints the average value of all data in arr
 *
 * @param int arr[] The arr storing the data
 * @param int arrSize User-defined array size
 * @pre printArr
 * @return float The average
 * @post program end
 * 
 */
float printAvg(int arr[], int arrSize);

int main() {
  int arrSize = 0;

  cout << "Enter desired size of array: ";
  cin >> arrSize;

  while(arrSize > MAX_ARRAY) {
    cout << "Invaild size. The limit is 1000. ";
    cin >> arrSize;
  }
  // Problem 2 correction
  int* arr = new int[arrSize];
  
  readFile(arr, arrSize);
  cout << "Array: " << endl;
  printArr(arr, arrSize);
  cout << "Average: " << endl;
  cout << printAvg(arr, arrSize);
  // Problem 3 correction
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
