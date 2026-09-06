// e) Class Type → Basic Type
// Aim:

// To demonstrate conversion from class type to basic type.

// Algorithm:
// Start
// Define class with conversion function
// Return basic type value
// Assign object to basic variable
// Display result
// Stop

#include <iostream>
using namespace std;

class Test {
    int x;

public:
    Test(int a) { x = a; }

    operator int() {
        return x;
    }
};

int main() {
    Test t(15);
    int a = t;   // conversion
    cout << a;
    return 0;
}