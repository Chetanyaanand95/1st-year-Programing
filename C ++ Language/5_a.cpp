// a) Increment & Decrement Operator Overloading
// Aim:

// To demonstrate overloading of increment and decrement operators.

// Algorithm:
// Start
// Define a class with integer data member
// Overload ++ and -- operators
// Create object and apply operators
// Display result
// Stop

#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    void operator++() { ++x; }
    void operator--() { --x; }

    void display() { cout << x; }
};

int main() {
    Test t(5);
    ++t;
    t.display();
    return 0;
}