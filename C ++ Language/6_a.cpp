//  Single Inheritance
// Aim:

// To demonstrate single inheritance in C++.

// Algorithm:
// Start
// Define a base class
// Define a derived class inheriting from base class
// Access base class function using derived class object
// Display output
// Stop
// Program:


#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base Class";
    }
};

class B : public A {
};

int main() {
    B obj;
    obj.show();
    return 0;
}