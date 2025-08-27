// 14_File_handling/file_modes.cpp
// This program demonstrates opening files in different modes in C++.

#include <iostream>
#include <fstream>

int main() {
    // Open a file in write mode
    std::ofstream outFile("example.txt", std::ios::out);
    if (outFile.is_open()) {
        outFile << "Writing to the file." << std::endl;
        outFile.close();
    }

    // Open a file in append mode
    std::ofstream appendFile("example.txt", std::ios::app);
    if (appendFile.is_open()) {
        appendFile << "Appending to the file." << std::endl;
        appendFile.close();
    }

    // Open a file in read mode
    std::ifstream inFile("example.txt", std::ios::in);
    if (inFile.is_open()) {
        std::string line;
        while (std::getline(inFile, line)) {
            std::cout << line << std::endl;
        }
        inFile.close();
    }

    return 0;
}
