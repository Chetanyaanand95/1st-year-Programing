// 📘 Practical 8
// 🟦 Question:

// Write a program to demonstrate string operations in C++.

// 🔹 String Operations
// Aim:

// To demonstrate various string operations in C++.

// Algorithm:
// Start
// Declare two string variables
// Input two strings from the user
// Perform string operations:
// Find length of string
// Concatenate two strings
// Compare two strings
// Display results
// Stop

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter first string: ";
    cin >> s1;

    cout << "Enter second string: ";
    cin >> s2;

    // Length
    cout << "Length of first string: " << s1.length() << endl;

    // Concatenation
    cout << "Concatenation: " << s1 + s2 << endl;

    // Comparison
    if(s1 == s2)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}