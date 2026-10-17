#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// How to build: g++ -std=c++17 -Wall -o Structs Structs.cpp
// How to run: ./Structs

/*
    add code for struct here.
*/
struct Student {
    int32_t age;
    std::string first_name;
    std::string last_name;
    int32_t standard;
};

int main() {
    Student st;

    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;

    return 0;
}
