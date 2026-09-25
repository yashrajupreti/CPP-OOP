// OOP Topics: Constructor, Parameterized Constructor, Destructor,
// Private Data Members, Public Access Specifier, Object Creation

#include <iostream>
using namespace std;

// =====================================================
// Example 1: Default Constructor and Destructor
// =====================================================

class Hello {
public:

    // Default Constructor
    Hello() {
        cout << "Hello, this is a constructor" << endl;
    }

    // Destructor
    ~Hello() {
        cout << "Destructor" << endl;
    }
};

void example1() {
    Hello s1;
}


// =====================================================
// Example 2: Parameterized Constructor
// =====================================================

class Number {
private:
    int a, b;

public:

    // Parameterized Constructor
    Number(int aa, int bb) {
        a = aa;
        b = bb;

        cout << "First value: " << a << endl;
        cout << "Second value: " << b << endl;
    }
};

void example2() {
    Number s1(20, 40);
    Number s2(22, 45);
}


// =====================================================
// Main Function
// =====================================================

int main() {

    cout << "----- Example 1 -----" << endl;
    example1();

    cout << endl;

    cout << "----- Example 2 -----" << endl;
    example2();

    return 0;
}
