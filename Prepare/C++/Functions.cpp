#include <cstdio>
#include <iostream>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d) {
    int res = max(a, max(b, max(c, d)));
    return res;
}

// How to build: g++ -std=c++17 -Wall -o Day0_Hello_World Day0_Hello_World.cpp
// How to run: ./Day0_Hello_World
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}