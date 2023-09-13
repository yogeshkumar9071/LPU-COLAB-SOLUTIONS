//Ragul wants to write a program to calculate the sum of a series of numbers and store them in a file. He wants to take input from the user for the number of elements in the series and the values of each element. Calculate the sum of the numbers and store them in a file named "sample.txt".

#include <iostream>
#include <fstream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += numbers[i];
    }

    std::ofstream outputFile("sample.txt");

    if (!outputFile.is_open()) {
        std::cerr << "Cannot open file." << std::endl;
        return 1;
    }

    outputFile << sum << std::endl;
    outputFile.close();

    std::cout << sum << std::endl;

    return 0;
}