#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// How to build: g++ -std=c++17 -Wall -o Day3_Intro_to_Conditional_Statements
// Day3_Intro_to_Conditional_Statements.cpp How to run:
// ./Day3_Intro_to_Conditional_Statements

int main() {
  string N_temp;
  getline(cin, N_temp);

  int N = stoi(ltrim(rtrim(N_temp)));
  if (N % 2 == 1) {
    printf("Weird\n");
  } else {
    if (N >= 2 && N <= 5) {
      printf("Not Weird\n");
    } else if (N >= 6 && N <= 20) {
      printf("Weird\n");
    } else if (N > 20) {
      printf("Not Weird\n");
    }
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
