// 13_object_and_classes/members_of_class.cpp
// This program demonstrates data members, member functions, and access specifiers in a class.

#include <iostream>
#include <string>

// Define a class named 'Car'
class Car {
private:
    // Private data member
    std::string brand;

public:
    // Public data member
    int speed;

    // Public member function to set the brand
    void setBrand(const std::string& carBrand) {
        brand = carBrand;
    }

    // Public member function to get the brand
    std::string getBrand() {
        return brand;
    }

    // Public member function to display car details
    void displayDetails() {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Speed: " << speed << " km/h" << std::endl;
    }
};

int main() {
    // Create an object of the class 'Car'
    Car car1;

    // Set values using member functions
    car1.setBrand("Toyota");
    car1.speed = 120;

    // Display car details
    car1.displayDetails();

    return 0;
}
