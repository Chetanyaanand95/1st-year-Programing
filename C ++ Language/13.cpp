// 📘 Practical 13
// 🟦 Question:

// Show the implementation of template class library for swap function in C++.

// 🔹 Template (Swap Function)
// Aim:

// To demonstrate the use of template for swap function in C++.

// Algorithm:
// Start
// Define a template function swap()
// Pass two variables of any data type
// Use temporary variable to swap values
// Display values before and after swapping
// Stop

#include <iostream>
using namespace std;

template <class T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before Swap: " << x << " " << y << endl;

    swapValues(x, y);

    cout << "After Swap: " << x << " " << y;

    return 0;
}