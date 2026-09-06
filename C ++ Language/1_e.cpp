// e) Do-While Loop
// Aim:

// To print numbers from 1 to 5 using do-while loop.

// Algorithm:
// Start
// Initialize i = 1
// Execute loop body:
// Display i
// Increment i
// Check condition i ≤ 5
// If true, repeat loop
// Stop

#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while(i <= 5);

    return 0;
}