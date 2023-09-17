// As part of a C++ programming exercise, you need to create a program for basic calculations. The program should take three double-point values, a, b, and c

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double sum = a + b;
    double product = b * c;

    
    sum = round(sum * 100) / 100;
    product = round(product * 100) / 100;

    
    ofstream outFile("operations.txt");

    
    outFile << fixed << setprecision(2) << sum << endl;
    outFile << fixed << setprecision(2) << product << endl;

    
    outFile.close();


    ifstream inFile("operations.txt");
    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
