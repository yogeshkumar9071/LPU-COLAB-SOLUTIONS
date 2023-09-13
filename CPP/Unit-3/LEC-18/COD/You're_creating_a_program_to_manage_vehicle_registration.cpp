//You're creating a program to manage vehicle registration information. Each vehicle is uniquely identified by its registration number, and you need to store details like the make, model, and year of manufacture for each vehicle.

#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string registrationNumber;
    string make;
    string model;
    int yearOfManufacture;

public:
    Vehicle(string regNum, string make, string model, int year) {
        registrationNumber = regNum;
        this->make = make;
        this->model = model;
        yearOfManufacture = year;
    }

    void displayDetails() {
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
    }
};

int main() {
    string regNum, make, model;
    int year;

    cin >> regNum;
    cin >> make;
    cin >> model;
    cin >> year;

    Vehicle vehicle(regNum, make, model, year);

    vehicle.displayDetails();

    return 0;
}
