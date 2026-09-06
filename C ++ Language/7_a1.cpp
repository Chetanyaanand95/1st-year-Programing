// ▶ Compile Time Polymorphism (Operator Overloading)
// Aim:

// To demonstrate operator overloading.

// Algorithm:
// Start
// Define class with data member
// Overload operator +
// Add two objects
// Display result
// Stop
// Program:
#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    Test operator+(Test t) {
        return Test(x + t.x);
    }

    void display() { cout << x; }
};

int main() {
    Test t1(5), t2(3);
    Test t3 = t1 + t2;
    t3.display();
    return 0;
}