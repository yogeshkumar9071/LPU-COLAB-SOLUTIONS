// Imagine

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 50) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    vector<double> monthly_incomes;
    double income;
    int count = 0;

    while (cin >> income) {
        monthly_incomes.push_back(income);
        ++count;
    }

 
    if (count != n) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    
    ofstream outFile;
    outFile.open("income.txt", ios::out);
    for (double monthly_income : monthly_incomes) {
        outFile << fixed << setprecision(2) << monthly_income << " ";
    }
    outFile.close();

 
    ifstream inFile;
    inFile.open("income.txt", ios::in);
    while (inFile >> income) {
        cout << fixed << setprecision(1) << income * 12.0 << endl;
    }
    inFile.close();

    return 0;
}
