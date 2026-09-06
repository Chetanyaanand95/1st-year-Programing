// c) Destructor
// Aim:

// To demonstrate the use of destructor in C++.

// Algorithm:
// Start
// Define a class with constructor and destructor
// Display message in constructor
// Display message in destructor
// Create object in main()
// Observe automatic call of destructor
// Stop

#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Constructor called\n";
    }

    ~Test() {
        cout << "Destructor called";
    }
};

int main() {
    Test t;
    return 0;
}