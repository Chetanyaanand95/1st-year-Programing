// 🟦 Question:

// Show the implementation for exception handling for strings in C++.

// 🔹 Exception Handling (String)
// Aim:

// To demonstrate exception handling using strings in C++.

// Algorithm:
// Start
// Declare a string variable
// Input a string from the user
// Use try block to check condition
// If string is empty, throw an exception (string message)
// Catch the exception using catch block
// Display error message
// Otherwise display valid string
// Stop

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    cin >> str;

    try {
        if(str.length() == 0)
            throw "Empty string error!";

        cout << "You entered: " << str;
    }
    catch(const char* msg) {
        cout << "Exception: " << msg;
    }

    return 0;
}