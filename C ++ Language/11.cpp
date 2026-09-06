// 📘 Practical 11
// 🟦 Question:

// Design a class File Demo to open a file in read mode and display the total number of words and lines in the file.

// 🔹 File Handling (Read + Count Words & Lines)
// Aim:

// To read a file and count the number of words and lines using a class in C++.

// Algorithm:
// Start
// Define a class FileDemo
// Declare file object using ifstream
// Open file in read mode
// Initialize word and line counters to 0
// Read file line by line
// Increment line count for each line
// Count words in each line
// Display total words and lines
// Stop

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

class FileDemo {
public:
    void count() {
        ifstream file("data.txt");
        string line;
        int words = 0, lines = 0;

        while(getline(file, line)) {
            lines++;

            stringstream ss(line);
            string word;

            while(ss >> word) {
                words++;
            }
        }

        cout << "Total Lines: " << lines << endl;
        cout << "Total Words: " << words << endl;

        file.close();
    }
};

int main() {
    FileDemo f;
    f.count();
    return 0;
}