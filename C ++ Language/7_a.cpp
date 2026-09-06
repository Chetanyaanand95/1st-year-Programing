// a) Polymorphism
// ▶ Compile Time Polymorphism (Function Overloading)
// Aim:

// To demonstrate function overloading in C++.

// Algorithm:
// Start
// Define multiple functions with same name but different parameters
// Call functions with different arguments
// Display results
// Stop

#include <iostream>
using namespace std;

class Test {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Test t;
    cout << t.add(2,3) << endl;
    cout << t.add(2,3,4);
    return 0;
}