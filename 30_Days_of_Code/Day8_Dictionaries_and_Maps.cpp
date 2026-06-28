#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

// How to build: g++ -std=c++17 -Wall -o Day8_Dictionaries_and_Maps Day8_Dictionaries_and_Maps.cpp
// How to run: ./Day8_Dictionaries_and_Maps

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  std::unordered_map<std::string, std::string> nameMap;
  int32_t T = 3;
  cin >> T;
  std::string name = "";
  std::string phone_number = "";
  int32_t count = T;
  while (count--) {
    cin >> name >> phone_number;
    nameMap[name] = phone_number;
  }
  std::string queryName = "";
  while (cin >> queryName) {
    if (nameMap.find(queryName) != nameMap.end()) {
      std::cout << queryName << "=" << nameMap[queryName] << std::endl;
    } else {
      std::cout << "Not found" << std::endl;
    }
    queryName = "";
  }

  return 0;
}