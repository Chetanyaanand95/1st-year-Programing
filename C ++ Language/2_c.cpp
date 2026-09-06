// c) Call by Reference
// Aim:

// To demonstrate call by reference in C++.

// Algorithm:
// Start
// Declare a function swap(int &a, int &b)
// Inside function, swap values using reference
// In main(), declare two variables
// Input values
// Call function by passing variables
// Display updated values
// Stop

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    swap(x, y);

    cout << "After swap: " << x << " " << y;
    return 0;
}