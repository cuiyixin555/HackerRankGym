#include <iostream>
#include <string>
#include <vector>

using namespace std;

/**
 *    Name: printArray
 *    Print each element of the generic vector on a new line. Do not return
 * anything.
 *    @param A generic vector
 **/

// Write your code here
template <typename T> void printArray(const std::vector<T> vec) {
  for (int i = 0; i < vec.size(); i++) {
    std::cout << vec[i] << std::endl;
  }
}

// How to build: g++ -std=c++17 -Wall -o Day21_Generics Day21_Generics.cpp
// How to run: ./Day21_Generics
int main() {
  int n;

  cin >> n;
  vector<int> int_vector(n);
  for (int i = 0; i < n; i++) {
    int value;
    cin >> value;
    int_vector[i] = value;
  }

  cin >> n;
  vector<string> string_vector(n);
  for (int i = 0; i < n; i++) {
    string value;
    cin >> value;
    string_vector[i] = value;
  }

  printArray<int>(int_vector);
  printArray<string>(string_vector);

  return 0;
}