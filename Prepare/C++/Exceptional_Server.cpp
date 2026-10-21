#include <cmath>
#include <exception>
#include <iostream>
#include <new>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

class Server {
private:
    static int load;

public:
    static int compute(long long A, long long B) {
        load += 1;
        if (A < 0) {
            throw std::invalid_argument("A is negative");
        }
        vector<int> v(A, 0);
        int real = -1;
        int cmplx = sqrt(-1);
        if (B == 0) throw 0;
        real = (A / B) * real;
        int ans = v.at(B);
        (void)cmplx;
        return real + A - B * ans;
    }

    static int getLoad() { return load; }
};
int Server::load = 0;

// How to build: g++ -std=c++17 -Wall -o Exceptional_Server Exceptional_Server.cpp
// How to run: ./Exceptional_Server
int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;

        try {
            cout << Server::compute(A, B) << "\n";
        } catch (const bad_alloc&) {
            cout << "Not enough memory\n";
        } catch (const exception& e) {
            cout << "Exception: " << e.what() << "\n";
        } catch (...) {
            cout << "Other Exception\n";
        }
    }
    cout << Server::getLoad() << "\n";
    return 0;
}
