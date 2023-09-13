//Dhivakar is working on a program that involves processing numerical data. He needs to write a program that allows the user to input a set of numbers, stores them in an array, and then writes the numbers to a file named "sample.dat". Additionally, the program should find the maximum and minimum values from the input numbers and display them on the console

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <climits> 

int main() {
    int N;
    std::cin >> N;

    std::vector<int> numbers(N);
    int maximum = INT_MIN; 
    int minimum = INT_MAX; 

    for (int i = 0; i < N; i++) {
        std::cin >> numbers[i];
        maximum = std::max(maximum, numbers[i]);
        minimum = std::min(minimum, numbers[i]);
    }
    std::cout << maximum << " " << minimum << std::endl;
    std::ofstream outputFile("sample.dat");
    if (outputFile.is_open()) {
        for (int i = 0; i < N; i++) {
            outputFile << numbers[i] << " ";
        }
        outputFile.close();
    } else {
        std::cerr << "Unable to open the file for writing." << std::endl;
    }

    return 0;
}