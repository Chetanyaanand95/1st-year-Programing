// b) Functions Defined Outside Class
// Aim:

// To implement a class with member functions defined outside the class.

// Algorithm:
// Start
// Define a class with function declarations
// Define functions outside class using scope resolution operator ::
// Create object in main()
// Call functions
// Stop

#include <iostream>
using namespace std;

class Student {
    string name;
    int marks;

public:
    void input();
    void display();
};

void Student::input() {
    cout << "Enter name and marks: ";
    cin >> name >> marks;
}

void Student::display() {
    cout << "Name: " << name << "\nMarks: " << marks;
}

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}