// 14_File_handling/bof_eof.cpp
// This program demonstrates the concepts of BOF (Beginning of File) and EOF (End of File) in C++.

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file("example.txt"); // Open a file for reading

    if (file.is_open()) {
        std::cout << "Reading file from the beginning (BOF):" << std::endl;
        std::string line;

        while (!file.eof()) { // Check for EOF
            std::getline(file, line);
            if (!line.empty()) {
                std::cout << line << std::endl;
            }
        }

        file.close();
    } else {
        std::cout << "File could not be opened." << std::endl;
    }

    return 0;
}
