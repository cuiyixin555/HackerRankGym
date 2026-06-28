#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// How to build: g++ -std=c++17 -Wall -o Day5_Loops Day5_Loops.cpp
// How to run: ./Day5_Loops

int main() {
  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));
  int32_t loop = 10;
  for (int32_t t = 1; t <= loop; t++) {
    printf("%d x %d = %d\n", n, t, n * t);
  }
  return 0;
}

string ltrim(const string &str) {
  string s(str);

  s.erase(s.begin(),
          find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

  return s;
}

string rtrim(const string &str) {
  string s(str);

  s.erase(
      find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
      s.end());

  return s;
}
