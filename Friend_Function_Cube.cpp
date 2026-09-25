// OOP Topics: Friend Function, Class, Object,
// Private Data Member, Public Member Function,
// Passing Object as Argument

#include <iostream>
using namespace std;

class Demo {
    int num;

    // Friend function declaration
    friend int cube(Demo d);

public:
    void input() {
        cout << "Enter value of num: ";
        cin >> num;
    }
};

// Friend function definition
int cube(Demo d) {
    return d.num * d.num * d.num;
}

int main() {

    Demo d;

    d.input();

    cout << "Cube is: " << cube(d) << endl;

    return 0;
}
