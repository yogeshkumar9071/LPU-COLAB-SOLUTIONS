//Sri wants to write a program that calculates the sum of two numbers and stores the result in a file named "sum.txt". Sri needs to implement the program using file stream operations. If there is an error opening the file, the program displays an error message on the console.

#include <iostream>
#include <fstream>

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    int sum = n1 + n2;

    std::ofstream outputFile("sum.txt");

    if (outputFile.is_open()) {
        outputFile << "Sum successfully written to the file 'sum.txt'." << std::endl;
        outputFile << "Sum: " << sum << std::endl;
        outputFile.close();

        std::cout << "Sum successfully written to the file 'sum.txt'." << std::endl;
        std::cout << "Sum: " << sum << std::endl;
    } else {
        std::cerr << "Error opening the file 'sum.txt' for writing." << std::endl;
    }

    return 0;
}