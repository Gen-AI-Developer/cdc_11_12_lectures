// 14_File_handling/single_character_string.cpp
// This program demonstrates reading and writing single characters and strings in C++.

#include <iostream>
#include <fstream>

int main() {
    // Writing single characters and strings to a file
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile.put('A'); // Write a single character
        outFile << "BCD" << std::endl; // Write a string
        outFile.close();
    }

    // Reading single characters and strings from a file
    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        char ch;
        while (inFile.get(ch)) { // Read one character at a time
            std::cout << ch;
        }
        inFile.close();
    }

    return 0;
}
