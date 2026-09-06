// c) Static Data Member
// Aim:

// To demonstrate the use of static data member in C++.

// Algorithm:
// Start
// Define a class with static variable
// Initialize static variable outside class
// Increment static variable using objects
// Display count
// Stop

#include <iostream>
using namespace std;

class Test {
public:
    static int count;

    Test() {
        count++;
    }
};

int Test::count = 0;

int main() {
    Test t1, t2, t3;
    cout << "Total objects: " << Test::count;
    return 0;
}