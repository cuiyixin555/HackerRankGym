#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// How to build: g++ -std=c++17 -Wall -o Day6_Lets_Review Day6_Lets_Review.cpp
// How to run: ./Day6_Lets_Review

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int32_t T;
  cin >> T;
  while (T--) {
    std::string myString = "";
    cin >> myString;
    // getline(cin, myString);
    // cin >> myString                   getline(cin, myString);
    // Space / Tab / Newline             Newline
    // string can't contain space        string can contain space
    // auto skip leading space           not auto skip leading space
    std::string evenStr = "";
    std::string oddStr = "";
    int numLen = myString.length();
    for (int32_t i = 0; i < numLen; i++) {
      if (i % 2 == 0) {
        evenStr += myString[i];
      } else if (i % 2 == 1) {
        oddStr += myString[i];
      }
    }
    std::cout << evenStr << " " << oddStr << std::endl;
  }

  return 0;
}
