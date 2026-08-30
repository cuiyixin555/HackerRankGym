#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    // Complete this function
    int a_value = *a;
    int b_value = *b;
    *a = a_value + b_value;
    int new_b = a_value - b_value;
    *b = abs(new_b);
}

// How to build: g++ -std=c++17 -Wall -o Pointer Pointer.cpp
// How to run: ./Pointer
int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}