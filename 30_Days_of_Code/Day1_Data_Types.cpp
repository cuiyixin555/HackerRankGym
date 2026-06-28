#include <iomanip>
#include <iostream>
#include <limits>

using namespace std;

// How to build: g++ -std=c++17 -Wall -o Day1_Data_Types Day1_Data_Types.cpp
// How to run: ./Day1_Data_Types

int main() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";

  int myInt;
  double myDouble;
  std::string myString;

  std::cin >> myInt;
  std::cin >> myDouble;
  std::cin.ignore();
  std::getline(std::cin, myString);

  std::cout << i + myInt << std::endl;
  std::cout << std::fixed << std::setprecision(1) << d + myDouble << std::endl;
  std::cout << s + myString << std::endl;

  return 0;
}