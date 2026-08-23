#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string isPrime(int n) {
    if (n < 2) {
      return "Not prime";
    }

    if (n == 2) {
      return "Prime";
    }

    if (n % 2 == 0) {
      return "Not prime";
    }

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2) {
      if (n % i == 0) {
        return "Not prime";
      }
    }

    return "Prime";
  }
};

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  Solution sol;
  int t, n;

  cin >> t;

  while (t-- > 0) {
    cin >> n;
    cout << sol.isPrime(n) << endl;
  }

  return 0;
}
