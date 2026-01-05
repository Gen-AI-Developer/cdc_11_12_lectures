// 13_object_and_classes/constructors_destructors.cpp
// This program demonstrates constructors, destructors, and constructor overloading in C++.

#include <iostream>
#include <string>

// Define a class named 'Person'
class Person {
private:
    std::string name;
    int age;

public:
    // Default constructor
    Person() {
        name = "Unknown";
        age = 0;
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    Person(const std::string& personName, int personAge) {
        name = personName;
        age = personAge;
        std::cout << "Parameterized constructor called." << std::endl;
    }

    // Destructor
    ~Person() {
        std::cout << "Destructor called for " << name << std::endl;
    }

    // Member function to display details
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create objects using different constructors
    Person person1; // Default constructor
    Person person2("Bob", 25); // Parameterized constructor

    // Display details
    person1.displayDetails();
    person2.displayDetails();

    return 0;
}
