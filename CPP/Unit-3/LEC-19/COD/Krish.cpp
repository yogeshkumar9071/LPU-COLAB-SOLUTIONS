// Krish

#include <iostream>
#include <fstream>

int main() {
    int n;
    std::cin >> n;

    if (n < 1 || n > 100) {
        std::cout << "Invalid entry" << std::endl;
        return 0;
    }

    std::ofstream outputFile("numbers.dat", std::ios::binary);
    if (!outputFile.is_open()) {
        std::cerr << "Failed to open file for writing." << std::endl;
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        outputFile.write(reinterpret_cast<char*>(&num), sizeof(int));
    }

    outputFile.close();

    std::ifstream inputFile("numbers.dat", std::ios::binary);
    if (!inputFile.is_open()) {
        std::cerr << "Failed to open file for reading." << std::endl;
        return 1;
    }

    int num;
    while (inputFile.read(reinterpret_cast<char*>(&num), sizeof(int))) {
        std::cout << num << ' ';
    }

    inputFile.close();

    return 0;
}
