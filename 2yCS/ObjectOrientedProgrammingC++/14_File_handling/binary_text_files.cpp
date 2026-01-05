// 14_File_handling/binary_text_files.cpp
// This program demonstrates reading and writing to binary and text files in C++.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    // --- Text File Operations ---
    std::ofstream textFile("example.txt"); // Open a text file for writing
    if (textFile.is_open()) {
        textFile << "Hello, this is a text file." << std::endl;
        textFile.close(); // Close the file
    }

    std::ifstream readTextFile("example.txt"); // Open the text file for reading
    if (readTextFile.is_open()) {
        std::string line;
        while (std::getline(readTextFile, line)) {
            std::cout << "Read from text file: " << line << std::endl;
        }
        readTextFile.close();
    }

    // --- Binary File Operations ---
    std::ofstream binaryFile("example.bin", std::ios::binary); // Open a binary file for writing
    if (binaryFile.is_open()) {
        int number = 12345;
        binaryFile.write(reinterpret_cast<char*>(&number), sizeof(number));
        binaryFile.close();
    }

    std::ifstream readBinaryFile("example.bin", std::ios::binary); // Open the binary file for reading
    if (readBinaryFile.is_open()) {
        int number;
        readBinaryFile.read(reinterpret_cast<char*>(&number), sizeof(number));
        std::cout << "Read from binary file: " << number << std::endl;
        readBinaryFile.close();
    }

    return 0;
}
