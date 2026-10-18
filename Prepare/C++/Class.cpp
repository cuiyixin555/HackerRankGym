#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
private:
    int age;
    int standard;
    std::string first_name;
    std::string last_name;

public:
    void set_age(int param_age) { age = param_age; }
    void set_standard(int param_standard) { standard = param_standard; }
    void set_first_name(std::string param_first_name) { first_name = param_first_name; }
    void set_last_name(std::string param_last_name) { last_name = param_last_name; }
    int get_age() { return age; }
    int get_standard() { return standard; }
    std::string get_first_name() { return first_name; }
    std::string get_last_name() { return last_name; }
    std::string to_string() {
        return std::to_string(age) + "," + first_name + "," + last_name + "," +
               std::to_string(standard);
    }
};

// How to build: g++ -std=c++17 -Wall -o Class Class.cpp
// How to run: ./Class
int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}