#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int32_t n;
    int32_t q;
    std::cin >> n >> q;
    std::vector<std::vector<int32_t>> vec(n);
    for (int i = 0; i < n; i++) {
        int len = 0;
        std::cin >> len;
        vec[i].resize(len);
        for (int j = 0; j < len; j++) {
            cin >> vec[i][j];
        }
    }
    int32_t index_q;
    int32_t index_v;
    for (int k = 0; k < q; k++) {
        std::cin >> index_q >> index_v;
        std::cout << vec[index_q][index_v] << std::endl;
    }

    return 0;
}