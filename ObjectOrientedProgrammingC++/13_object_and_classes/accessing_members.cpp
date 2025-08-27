// 13_object_and_classes/accessing_members.cpp
// This program demonstrates accessing data members and member functions using objects.

#include <iostream>
#include <string>

// Define a class named 'Book'
class Book {
public:
    // Data members
    std::string title;
    std::string author;

    // Member function to display book details
    void displayDetails() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
    }
};

int main() {
    // Create an object of the class 'Book'
    Book book1;

    // Assign values to data members
    book1.title = "C++ Programming";
    book1.author = "Bjarne Stroustrup";

    // Access member function
    book1.displayDetails();

    return 0;
}
