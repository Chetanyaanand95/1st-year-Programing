// b) Dynamic Constructor
// Aim:

// To demonstrate the use of dynamic constructor in C++.

// Algorithm:
// Start
// Define a class with pointer data member
// Create constructor to allocate memory using new
// Assign value to allocated memory
// Display value
// Stop

#include <iostream>
using namespace std;

class Test {
    int *p;

public:
    Test(int x) {
        p = new int;
        *p = x;
    }

    void display() {
        cout << "Value: " << *p;
    }
};

int main() {
    Test t(20);
    t.display();
    return 0;
}