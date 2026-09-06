// a) Zero Argument & Parameterized Constructor
// Aim:

// To demonstrate the use of zero argument and parameterized constructors in C++.

// Algorithm:
// Start
// Define a class Test
// Create a zero-argument constructor to assign default values
// Create a parameterized constructor to initialize values using arguments
// Create objects using both constructors
// Display values
// Stop

#include <iostream>
using namespace std;

class Test {
    int a;

public:
    Test() {       // zero argument constructor
        a = 0;
    }

    Test(int x) {  // parameterized constructor
        a = x;
    }

    void display() {
        cout << "Value: " << a << endl;
    }
};

int main() {
    Test t1;
    Test t2(10);

    t1.display();
    t2.display();

    return 0;
}