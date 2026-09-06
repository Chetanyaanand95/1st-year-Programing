// ▶ Run Time Polymorphism (Virtual Function)
// Aim:

// To demonstrate runtime polymorphism using virtual function.

// Algorithm:
// Start
// Define base class with virtual function
// Define derived class overriding function
// Use base class pointer
// Call function using pointer
// Display result
// Stop
// Program:
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base Class";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived Class";
    }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show();
    return 0;
}