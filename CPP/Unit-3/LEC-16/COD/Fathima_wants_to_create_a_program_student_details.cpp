//Fathima wants to create a program to manage student details. She needs to define a student class that stores the roll number, name, and fee of a student. The program should allow the user to enter the student's details and display them. It should also demonstrate the use of a copy constructor to create a copy of a student object.

#include <iostream>
#include <string>
#include <iomanip>

class Student {
private:
    int rollNumber;
    std::string name;
    double fee;

public:
    Student(int rollNumber, const std::string& name, double fee) {
        this->rollNumber = rollNumber;
        this->name = name;
        this->fee = fee;
    }
    Student(const Student& other) {
        this->rollNumber = other.rollNumber;
        this->name = other.name;
        this->fee = other.fee;
    }
    void display(bool showCopiedDetails = false) {
        if (showCopiedDetails) {
            std::cout << "Copied Student Details:" << std::endl;
        } else {
            std::cout << "Student Details:" << std::endl;
        }
        std::cout << rollNumber << " " << name << " " << std::fixed << std::setprecision(2) << fee << std::endl;
    }
};

int main() {
    int rollNumber;
    std::string name;
    double fee;
    std::cin >> rollNumber;
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cin >> fee;
    Student student(rollNumber, name, fee);
    student.display();
    Student copiedStudent(student);
    copiedStudent.display(true);

    return 0;
}