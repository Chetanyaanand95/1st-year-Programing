// d) Const Data Member
// Aim:

// To demonstrate the use of const data member in C++.

// Algorithm:
// Start
// Define a class with const data member
// Initialize it using constructor
// Display the value
// Stop

#include <iostream>
using namespace std;

class Test {
    const int x;

public:
    Test(int a) : x(a) {}

    void display() {
        cout << "Value: " << x;
    }
};

int main() {
    Test t(10);
    t.display();
    return 0;
}