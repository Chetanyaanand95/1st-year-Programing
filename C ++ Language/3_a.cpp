// a) Functions Defined Inside Class
// Aim:

// To implement a class with member functions defined inside the class.

// Algorithm:
// Start
// Define a class Student
// Declare data members (name, marks)
// Define member functions inside class to input and display data
// Create object in main()
// Call functions using object
// Stop

#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    void input() {
        cout << "Enter name and marks: ";
        cin >> name >> marks;
    }

    void display() {
        cout << "Name: " << name << "\nMarks: " << marks;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}