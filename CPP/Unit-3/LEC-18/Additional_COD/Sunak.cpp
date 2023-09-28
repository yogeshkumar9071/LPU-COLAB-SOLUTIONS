// Sunak

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 10) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    ofstream outFile;
    outFile.open("triangle.txt", ios::out);
    for (int i = 0; i < n; ++i) {
        double base, height;
        cin >> base >> height;
        outFile << fixed << setprecision(2) << base << " " << height << endl;
    }
    outFile.close();

    ifstream inFile;
    inFile.open("triangle.txt", ios::in);
    double area;
    for (int i = 0; i < n; ++i) {
        double base, height;
        inFile >> base >> height;
        area = 0.5 * base * height;
        cout << fixed << setprecision(2) << area << endl;
    }
    inFile.close();

    return 0;
}
