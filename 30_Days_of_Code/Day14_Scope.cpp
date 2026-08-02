#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

class Difference {
private:
  vector<int> elements;

public:
  int maximumDifference;

  // Init constructor
  Difference(vector<int>& elements) { this->elements = elements; }

  // Add your code here
  void computeDifference() {
    sort(elements.begin(), elements.end());
    maximumDifference = abs(elements[elements.size() - 1] - elements[0]);
  }
}; // End of Difference class

// How to build: g++ -std=c++17 -Wall -o Day14_Scope 30_Days_of_Code/Day14_Scope.cpp
// How to run: ./Day14_Scope
int main() {
  int N;
  cin >> N;

  vector<int> a;

  for (int i = 0; i < N; i++) {
    int e;
    cin >> e;

    a.push_back(e);
  }

  Difference d(a);

  d.computeDifference();

  cout << d.maximumDifference;

  return 0;
}