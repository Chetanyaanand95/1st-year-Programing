// 📘 Practical 9
// 🟦 Question:

// Write a program to show the implementation of exception handling in C++.

// 🔹 Exception Handling
// Aim:

// To demonstrate the use of exception handling in C++.

// Algorithm:
// Start
// Declare two integer variables
// Input values from the user
// Use try block to perform division
// If denominator is zero, throw an exception
// Catch the exception using catch block
// Display appropriate message
// Stop

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if(b == 0)
            throw b;

        cout << "Result = " << a / b;
    }
    catch(int x) {
        cout << "Error: Division by zero!";
    }

    return 0;
}