// c) Hierarchical Inheritance
// Aim:

// To demonstrate hierarchical inheritance in C++.

// Algorithm:
// Start
// Define one base class
// Define multiple derived classes inheriting same base class
// Create objects of derived classes
// Call base class function
// Stop
// Program:
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class\n";
    }
};

class B : public A {
};

class C : public A {
};

int main() {
    B b;
    C c;

    b.show();
    c.show();
    return 0;
}