// OOP Topics: Class, Object, Array of Objects,
// Private Data Members, Member Functions,
// Scope Resolution Operator, Encapsulation

#include <iostream>
using namespace std;

class Hello {
    int num;

public:
    void input();
    void check_evenodd();
};

// Function definition outside the class
void Hello::input() {
    cout << "Enter number: " << endl;
    cin >> num;
}

// Function to check even or odd
void Hello::check_evenodd() {
    if (num % 2 == 0) {
        cout << "Number is even." << endl;
    } else {
        cout << "Number is odd." << endl;
    }
}

int main() {

    Hello s1[50];  // Array of Objects

    int user;

    cout << "Enter the number of values: " << endl;
    cin >> user;

    // Input for each object
    for (int i = 0; i < user; i++) {
        s1[i].input();
    }

    // Check even or odd
    for (int i = 0; i < user; i++) {
        s1[i].check_evenodd();
    }

    return 0;
}
