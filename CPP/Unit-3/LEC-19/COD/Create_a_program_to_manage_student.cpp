// Create a program to manage student data that includes a student's roll number, name, and marks for five subjects. Store these data inside a file called "student.txt" in separate lines.

#include <iostream>
#include <fstream>
#include <string>

const int MAX_NAME_LENGTH = 30;
const int NUM_SUBJECTS = 5;

 
struct Student {
    int rollNumber;
    char name[MAX_NAME_LENGTH + 1];  
    int marks[NUM_SUBJECTS];
};

int main() {
    Student student;

     
    std::cin >> student.rollNumber;
    std::cin.ignore(); // Ignore newline character
    std::cin.getline(student.name, MAX_NAME_LENGTH + 1);

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        std::cin >> student.marks[i];
    }

     
    std::ofstream outputFile("student.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Failed to open file for writing." << std::endl;
        return 1;
    }

    
    outputFile << student.rollNumber << std::endl;
    outputFile << student.name << std::endl;

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        outputFile << student.marks[i] << ' ';
    }

    outputFile.close();

  
    std::ifstream inputFile("student.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return 1;
    }

    
    inputFile >> student.rollNumber;
    inputFile.ignore(); // Ignore newline character
    inputFile.getline(student.name, MAX_NAME_LENGTH + 1);

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        inputFile >> student.marks[i];
    }

    std::cout << student.rollNumber << std::endl;
    std::cout << student.name << std::endl;

    for (int i = 0; i < NUM_SUBJECTS; ++i) {
        std::cout << student.marks[i] << ' ';
    }

    inputFile.close();

    return 0;
}
