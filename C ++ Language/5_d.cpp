// d) Basic Type → Class Type
// Aim:

// To demonstrate conversion from basic type to class type.

// Algorithm:
// Start
// Define class with constructor
// Pass basic type value to constructor
// Store value in object
// Display result
// Stop

#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    void display() { cout << x; }
};

int main() {
    int a = 10;
    Test t = a;   // conversion
    t.display();
    return 0;
}