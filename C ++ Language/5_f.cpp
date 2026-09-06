// f) Class Type → Class Type
// Aim:

// To demonstrate conversion from one class type to another.

// Algorithm:
// Start
// Define two classes
// Use constructor in second class to accept object of first class
// Perform conversion
// Display result
// Stop

#include <iostream>
using namespace std;

class A {
public:
    int x;
    A(int a) { x = a; }
};

class B {
    int y;

public:
    B(A obj) {
        y = obj.x;
    }

    void display() { cout << y; }
};

int main() {
    A a1(20);
    B b1 = a1;
    b1.display();
    return 0;
}