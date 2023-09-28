//You're creating a program to manage vehicle registration information

#include <iostream>
#include <cstring>

class Vehicle {
private:
    char registrationNumber[20];
    char make[20];
    char model[20];
    int yearOfManufacture;

public:
    Vehicle(const char regNum[], const char mk[], const char mdl[], int year) : yearOfManufacture(year) {
        std::strcpy(registrationNumber, regNum);
        std::strcpy(make, mk);
        std::strcpy(model, mdl);
    }

    void displayDetails() const {
        std::cout << "Registration Number: " << registrationNumber << std::endl;
        std::cout << "Make: " << make << std::endl;
        std::cout << "Model: " << model << std::endl;
        std::cout << "Year of Manufacture: " << yearOfManufacture << std::endl;
    }
};

int main() {
    char regNum[20], make[20], model[20];
    int year;

    std::cin.getline(regNum, 20);
    std::cin.getline(make, 20);
    std::cin.getline(model, 20);
    std::cin >> year;

    Vehicle vehicle(regNum, make, model, year);
    vehicle.displayDetails();

    return 0;
}
