// 📘 Practical 14
// 🟦 Question:

// Design the template class library for sorting in ascending and descending order in C++.

// 🔹 Template Class (Sorting)
// Aim:

// To implement a template class for sorting elements in ascending and descending order.

// Algorithm:
// Start
// Define a template class Sort
// Declare array and size
// Create function for ascending sort
// Create function for descending sort
// Use simple sorting (bubble sort)
// Display sorted array
// Stop

#include <iostream>
using namespace std;

template <class T>
class Sort {
    T arr[10];
    int n;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void ascending() {
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(arr[i] > arr[j]) {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "Ascending: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }

    void descending() {
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(arr[i] < arr[j]) {
                    T temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        cout << "\nDescending: ";
        for(int i = 0; i < n; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Sort<int> s;

    s.input();
    s.ascending();
    s.descending();

    return 0;
}