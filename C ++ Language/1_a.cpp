// a) If-Else Statement
// Aim:

// To implement if-else statement in C++ to check whether a number is even or odd.

// Algorithm:
// Start
// Declare an integer variable n
// Input the value of n from the user
// Check the condition n % 2 == 0
// If true, display "Even"
// Otherwise, display "Odd"
// Stop

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}