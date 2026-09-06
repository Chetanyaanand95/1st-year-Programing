// b) Unary Operator Overloading
// Aim:

// To demonstrate overloading of unary operator.

// Algorithm:
// Start
// Define class with data member
// Overload unary minus -
// Apply operator on object
// Display result
// Stop

#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    void operator-() { x = -x; }

    void display() { cout << x; }
};

int main() {
    Test t(5);
    -t;
    t.display();
    return 0;
}