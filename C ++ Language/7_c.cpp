// c) Pointer to Array of Objects
// Aim:

// To demonstrate pointer to array of objects.

// Algorithm:
// Start
// Define class
// Create array of objects
// Use pointer to access array
// Display values
// Stop
// Program:
#include <iostream>
using namespace std;

class Test {
public:
    int x;
};

int main() {
    Test t[3] = {1, 2, 3};
    Test *ptr = t;

    for(int i = 0; i < 3; i++) {
        cout << (ptr + i)->x << " ";
    }

    return 0;
}