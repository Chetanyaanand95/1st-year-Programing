// 📘 Practical 12
// 🟦 Question:

// Design a class to handle multiple files and file operations in C++.

// 🔹 Multiple File Handling
// Aim:

// To design a class to perform operations on multiple files in C++.

// Algorithm:
// Start
// Define a class FileDemo
// Declare file objects (ofstream, ifstream)
// Create function to write data into multiple files
// Create function to read data from files
// Open files using write/read mode
// Perform file operations
// Display file content
// Close files
// Stop

#include <iostream>
#include <fstream>
using namespace std;

class FileDemo {
public:
    void writeFile() {
        ofstream f1("file1.txt");
        ofstream f2("file2.txt");

        f1 << "Hello from File 1";
        f2 << "Hello from File 2";

        f1.close();
        f2.close();
    }

    void readFile() {
        ifstream f1("file1.txt");
        ifstream f2("file2.txt");

        string data;

        cout << "File 1 Content: ";
        while(getline(f1, data)) {
            cout << data;
        }

        cout << "\nFile 2 Content: ";
        while(getline(f2, data)) {
            cout << data;
        }

        f1.close();
        f2.close();
    }
};

int main() {
    FileDemo f;
    f.writeFile();
    f.readFile();
    return 0;
}