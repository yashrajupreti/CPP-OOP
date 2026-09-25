// OOP Topics: Class, Object, Public Access Specifier,
// Data Members, Member Access Operator, Encapsulation

#include<iostream>
using namespace std;

class hello {
public:
    string name = "rohan";
    int password = 56754;
};

int main() {
    int b;
    string a;

    hello S1;

    S1.name;
    S1.password;

    cout << "enter users name:" << endl;
    cin >> a;

    cout << "enter password:" << endl;
    cin >> b;

    if (a == S1.name && b == S1.password) {
        cout << "name matched:" << "password matched:" << endl;
    } else {
        cout << "name and password are not matched:" << endl;
    }
}
