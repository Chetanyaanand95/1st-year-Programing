// d) Virtual Function (Separate)
// Aim:

// To demonstrate virtual function in C++.

// Algorithm:
// Start
// Define base class with virtual function
// Define derived class overriding function
// Use base pointer to call derived function
// Stop
// Program:
#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Class A";
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B";
    }
};

int main() {
    A *ptr;
    B obj;
    ptr = &obj;
    ptr->show();
    return 0;
}