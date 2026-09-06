// d) Multilevel Inheritance
// Aim:

// To demonstrate multilevel inheritance in C++.

// Algorithm:
// Start
// Define base class
// Define derived class inheriting base
// Define another class inheriting derived class
// Access base class function from last class
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

class C : public B {
};

int main() {
    C obj;
    obj.show();
    return 0;
}