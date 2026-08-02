#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// How to build: g++ -std=c++17 -Wall -o Day10_Binary_Numbers 30_Days_of_Code/Day10_Binary_Numbers.cpp
// How to run: ./Day10_Binary_Numbers
int main(int argc, char* argv[]) {
  string n_temp;
  getline(cin, n_temp);

  int n = stoi(ltrim(rtrim(n_temp)));
  string binaryStr = "";
  while (n) {
    binaryStr += std::to_string(static_cast<int32_t>(n % 2));
    n = n / 2;
  }
  std::reverse(binaryStr.begin(), binaryStr.end());
  int32_t maxCount = 0;
  int32_t curCount = 0;
  for (char c : binaryStr) {
    if (c == '1') {
      curCount++;
      maxCount = std::max(maxCount, curCount);
    } else {
      curCount = 0;
    }
  }

  std::cout << maxCount << std::endl;
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
