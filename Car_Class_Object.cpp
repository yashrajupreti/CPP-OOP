// OOP Topics: Class, Object, Data Members, Member Function,
// Public Access Specifier, Encapsulation, Member Access Operator

#include <iostream>
using namespace std;

class car {
public:

    string brand, model;
    int year;

    void car_do() {
        cout << "info about car is " << endl;
    }
};

int main() {
    car C1;

    C1.brand = "BMW";
    C1.model = "zen ao turbo";
    C1.year = 2025;

    cout << C1.brand << endl << C1.model << endl << C1.year << endl;
}
