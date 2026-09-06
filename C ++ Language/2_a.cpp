// a) Normal Function
// Aim:

// To implement a normal function in C++ to add two numbers.

// Algorithm:
// Start
// Declare a function add()
// Inside the function, declare two variables
// Input two numbers
// Calculate their sum
// Display the result
// Call the function from main()
// Stop

#include <iostream>
using namespace std;

void add() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Sum = " << a + b;
}

int main() {
    add();
    return 0;
}