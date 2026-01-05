// 14_File_handling/streams.cpp
// This program demonstrates streams and their types in C++.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Using ofstream to write to a file
    std::ofstream outFile("example.txt");
    if (outFile.is_open()) {
        outFile << "This is written using ofstream." << std::endl;
        outFile.close();
    }

    // Using ifstream to read from a file
    std::ifstream inFile("example.txt");
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << "Read using ifstream: " << line << std::endl;
        }
        inFile.close();
    }

    // Using fstream for both reading and writing
    std::fstream file("example.txt", std::ios::in | std::ios::out | std::ios::app);
    if (file.is_open()) {
        file << "This is written using fstream." << std::endl;
        file.seekg(0); // Move to the beginning of the file
        std::string line;
        while (std::getline(file, line)) {
            std::cout << "Read using fstream: " << line << std::endl;
        }
        file.close();
    }

    return 0;
}
