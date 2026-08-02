#include <bits/stdc++.h>

using namespace std;

int main() {
  string S;
  getline(cin, S);
  try {
    int num = std::stoi(S);
    std::cout << num << std::endl;
  } catch (const invalid_argument &e) {
    std::cout << "Bad String" << std::endl;
  }

  return 0;
}
