// e) Hybrid Inheritance
// Aim:

// To demonstrate hybrid inheritance in C++.

// Algorithm:
// Start
// Combine two types of inheritance (multiple + hierarchical)
// Define classes accordingly
// Access functions
// Stop
// Program:
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {
};

class C : public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.B::showA();   // avoid ambiguity
    obj.C::showA();
    return 0;
}