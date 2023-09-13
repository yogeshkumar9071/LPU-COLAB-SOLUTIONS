//Build a student information system using the Student class. The system allows you to input and display student details, including their names and birth years. There is a default student named "XYZ" born in 2023. You can modify this information and track when student objects are destroyed using constructors and destructors


#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int birthYear;

public:
    Student() {
        name = "XYZ";
        birthYear = 2023;
    }
    Student(const std::string& newName, int newBirthYear) {
        name = newName;
        birthYear = newBirthYear;
    }
    ~Student() {
        if (name != "XYZ") {
            std::cout << "Destroyed object: " << name << std::endl;
        }
    }
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Year born: " << birthYear << std::endl;
    }
};

int main() {
    std::string newName;
    int newBirthYear;
    std::cin >> newName >> newBirthYear;
    Student student(newName, newBirthYear);
    Student defaultStudent;
    defaultStudent.displayInfo();
    student.displayInfo();

    return 0;
}