// b) Pointer to Object
// Aim:

// To demonstrate pointer to object in C++.

// Algorithm:
// Start
// Define a class
// Create object
// Create pointer to object
// Access data using pointer
// Stop
// Program:
#include <iostream>
using namespace std;

class Test {
public:
    int x = 10;
};

int main() {
    Test t;
    Test *ptr = &t;

    cout << ptr->x;
    return 0;
}