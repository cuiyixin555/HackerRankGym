#include <iostream>
using namespace std;

class Box {
private:
    int l, b, h;

public:
    Box() : l(0), b(0), h(0) {}
    Box(int length, int breadth, int height) : l(length), b(breadth), h(height) {}
    Box(const Box& other) : l(other.l), b(other.b), h(other.h) {}

    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    long long CalculateVolume() { return (long long)l * b * h; }

    // A < B when:
    //   A.l < B.l
    //   A.l == B.l and A.b < B.b
    //   A.l == B.l and A.b == B.b and A.h < B.h
    bool operator<(const Box& other) const {
        if (l < other.l) {
            return true;
        }
        if (l == other.l && b < other.b) {
            return true;
        }
        if (l == other.l && b == other.b && h < other.h) {
            return true;
        }
        return false;
    }

    friend ostream& operator<<(ostream& out, const Box& box) {
        out << box.l << " " << box.b << " " << box.h;
        return out;
    }
};

// How to build: g++ -std=c++17 -Wall -o "Box_It!" "Box_It!.cpp"
// How to run: ./"Box_It!"
int main() {
    Box a(2, 3, 4);
    Box shorter(1, 9, 9);   // length smaller
    Box narrower(2, 2, 9);  // same length, breadth smaller
    Box lower(2, 3, 1);     // same length and breadth, height smaller
    Box taller(2, 3, 5);    // larger on the last dimension

    cout << (shorter < a) << "\n";  // 1
    cout << (narrower < a) << "\n"; // 1
    cout << (lower < a) << "\n";    // 1
    cout << (taller < a) << "\n";   // 0
    cout << a << "\n";              // 2 3 4

    return 0;
}
