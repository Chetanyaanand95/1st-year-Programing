// b) Switch Case Statement
// Aim:

// To implement switch case statement in C++.

// Algorithm:
// Start
// Declare an integer variable n
// Input a number from the user (1 to 3)
// Use switch statement to check the value of n
// If n = 1, display "Monday"
// If n = 2, display "Tuesday"
// If n = 3, display "Wednesday"
// Otherwise, display "Invalid Input"
// Stop

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number (1-3): ";
    cin >> n;

    switch(n) {
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        default: cout << "Invalid";
    }

    return 0;
}