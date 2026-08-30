#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// How to build: g++ -std=c++17 -Wall -o Arrays_Introduction Arrays_Introduction.cpp
// How to run: ./Arrays_Introduction
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int32_t N = 0;
    int32_t input_num = 0;
    cin >> N;
    std::vector<int32_t> arr;
    while (N--) {
        std::cin >> input_num;
        arr.push_back(input_num);
    }
    std::reverse(arr.begin(), arr.end());

    for (int32_t n : arr) {
        std::cout << n << " ";
    }

    return 0;
}
