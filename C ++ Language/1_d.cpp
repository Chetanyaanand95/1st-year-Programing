// d) While Loop
// Aim:

// To print numbers from 1 to 5 using while loop.

// Algorithm:
// Start
// Initialize i = 1
// Check condition i ≤ 5
// If true, display i
// Increment i by 1
// Repeat until condition becomes false
// Stop

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while(i <= 5) {
        cout << i << " ";
        i++;
    }

    return 0;
}