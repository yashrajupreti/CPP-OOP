// OOP Topics: Friend Function, Friend Class,
// Private Data Member, Object, Member Function

#include <iostream>
using namespace std;

// =====================================================
// Example 1: Friend Function
// =====================================================

/*
class Hello {
private:
    int a = 10;

    friend int hi(Hello);
};

int hi(Hello ob) {
    ob.a = 100;
    cout << ob.a << endl;
}

int main() {
    Hello s1;
    hi(s1);

    return 0;
}
*/

// =====================================================
// Example 2: Friend Class
// =====================================================

class Hello {
private:
    int a = 10;

    // Hello2 can access private members of Hello
    friend class Hello2;
};

class Hello2 {
public:
    void hi(Hello ob) {
        cout << ob.a << endl;
    }
};

int main() {

    Hello s1;
    Hello2 s2;

    s2.hi(s1);

    return 0;
}
