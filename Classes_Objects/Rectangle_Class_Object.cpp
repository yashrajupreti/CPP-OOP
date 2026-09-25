// OOP Topics: Class, Object, Data Members, Member Functions,
// Access Specifier, Encapsulation, Function Definition Outside Class,
// Scope Resolution Operator

#include<iostream>
using namespace std;

class rectangle {
    int length;
    int breadth;

public:
    void input();
    void area();
};

void rectangle::input() {
    cout << "enter value of length and breadth" << endl;
    cin >> length >> breadth;
}

void rectangle::area() {
    int result = length * breadth;
    cout << result << endl;
}

int main() {
    rectangle s1;
    s1.input();
    s1.area();
}
