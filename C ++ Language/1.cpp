// 📘 Practical 1
// 🟦 Question:

// Write a C++ program to implement various control structures:
// a) If-else statement
// b) Switch case statement
// c) For loop
// d) While loop
// e) Do-while loop

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