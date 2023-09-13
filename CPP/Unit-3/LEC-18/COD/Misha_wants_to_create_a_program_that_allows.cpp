//Misha wants to create a program that allows her to open and close a file using user input. She wants the program to prompt her to enter the name of the file she wants to open. Once the file is successfully opened, she intends to perform various operations with it. However, she wants to ensure that the program displays appropriate messages indicating whether the file was opened successfully or if there was an error.

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename;

    std::cout << "Enter the name of the file you want to open and close: ";
    std::cin >> filename;

    std::ofstream outputFile(filename);

    if (outputFile.is_open()) {
        outputFile.close();
        std::cout << "File '" << filename << "' opened successfully." << std::endl;
        std::cout << "File '" << filename << "' closed successfully." << std::endl;
    } else {
        std::cerr << "Error opening the file '" << filename << "'." << std::endl;
    }

    return 0;
}