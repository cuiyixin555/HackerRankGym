#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

// How to build: g++ -std=c++17 -Wall -o Day26_Nested_Logic
// Day26_Nested_Logic.cpp How to run: ./Day26_Nested_Logic
int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  // actually date
  int actualDay, actualMonth, actualYear;
  // expected date
  int expectedDay, expectedMonth, expectedYear;

  // read actual date
  cin >> actualDay >> actualMonth >> actualYear;
  cin >> expectedDay >> expectedMonth >> expectedYear;

  int fine = 0;

  if (actualYear > expectedYear) {
    fine = 10000;
  } else if (actualYear == expectedYear && actualMonth > expectedMonth) {
    fine = 500 * (actualMonth - expectedMonth);
  } else if (actualYear == expectedYear && actualMonth == expectedMonth &&
             actualDay > expectedDay) {
    fine = 15 * (actualDay - expectedDay);
  } else {
    fine = 0;
  }

  std::cout << fine << std::endl;

  return 0;
}
