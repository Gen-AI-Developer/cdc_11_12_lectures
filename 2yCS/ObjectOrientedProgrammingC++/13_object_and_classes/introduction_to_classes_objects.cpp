// 13_object_and_classes/introduction_to_classes_objects.cpp
// This program introduces classes and objects in C++.

#include <iostream>
#include <string>

// Define a class named 'Student'
class Student {
public:
    // Data members
    std::string name;
    int age;

    // Member function to display student details
    void displayDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
    }
};

int main() {
    // Create an object of the class 'Student'
    Student student1;

    // Assign values to data members
    student1.name = "John Doe";
    student1.age = 20;

    // Call the member function
    student1.displayDetails();

    return 0;
}
