// b) Multiple Inheritance
// Aim:

// To demonstrate multiple inheritance in C++.

// Algorithm:
// Start
// Define two base classes
// Define a derived class inheriting from both base classes
// Access functions of both base classes
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

class B {
public:
    void showB() {
        cout << "Class B\n";
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    return 0;
}