#include <iostream>
#include <string>
using namespace std;

// How to build: g++ -std=c++17 -Wall -o Strings Strings.cpp
// How to run: ./Strings

int main() {
    // Complete the program
    std::string str1;
    std::string str2;
    cin >> str1;
    cin >> str2;
    int len1 = str1.size();
    int len2 = str2.size();
    std::string combine = str1 + str2;
    char c = str1[0];
    char d = str2[0];
    str2[0] = c;
    str1[0] = d;
    std::cout << len1 << " " << len2 << std::endl;
    std::cout << combine << std::endl;
    std::cout << str1 << " " << str2 << std::endl;
    return 0;
}
