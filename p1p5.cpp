/**
 * @file p1p5.cpp
 * @author Justin Haddock
 * @date 2024-09-13
 * @brief Takes a file and outputs integer info
 * 
 * Takes an input file filled with integers, and outputs all integers stored within an array, as well as their average.
 */

#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ARRAY = 1000;


/**
 * Takes an input file, and writes information to arr
 *
 * @param int arr[] The array that holds the input data
 * @pre program start and var declaration
 * @return void 
 * @post printArr
 * 
 */

void readFile(int arr[]);


/**
 * Prints the array.
 *
 * @param int arr[] The array
 * @pre readFile
 * @return void 
 * @post printAvg
 * 
 */
void printArr(int arr[]); 


/**
 * Prints the average of all values in arr
 *
 * @param int arr[] The array
 * @pre printArr
 * @return float The average
 * @post program end
 * 
 */
float printAvg(int arr[]);

int main() {
  int arr[MAX_ARRAY];
  readFile(arr);
  cout << "Array: " << endl;
  printArr(arr);
  cout << "Average: " << endl;
  cout << printAvg(arr);
}
// readFile is correcting problem 5.
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
// printAvg is correcting problem 1.
float printAvg(int arr[]) {
  float avg = 0.0;

  for(int i = 0; i < MAX_ARRAY; i++) {
    avg += arr[i];
  }

  return avg /= MAX_ARRAY;
}
