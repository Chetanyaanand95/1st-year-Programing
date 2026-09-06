// b) Call by Value
// Aim:

// To demonstrate call by value in C++.

// Algorithm:
// Start
// Declare a function swap(int a, int b)
// Inside function, swap values of a and b
// In main(), declare two variables
// Input values
// Call function by passing values
// Display values after function call
// Stop

#include <iostream>
using namespace std;

void swap(int a, int b) {
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