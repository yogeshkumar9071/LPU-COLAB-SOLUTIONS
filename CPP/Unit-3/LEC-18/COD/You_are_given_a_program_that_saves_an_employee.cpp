// You are given a program that saves an employee object to a binary file and calculates the size of the file. The employee object contains an ID. You need to modify the program to correctly calculate the size of the file.

#include <iostream>
#include <fstream>

using namespace std;

class Employee {
public:
    int id;

    Employee(int empId) {
        id = empId;
    }
};

int main() {
    int eid;
    cin >> eid;

    Employee emp(eid);

    ofstream file("employee.bin", ios::binary);

    if (!file) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    file.write(reinterpret_cast<char*>(&emp), sizeof(emp));
    file.close();

    ifstream inFile("employee.bin", ios::binary | ios::ate);
    if (!inFile) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    int fileSize = inFile.tellg();
    inFile.close();

    cout << "size is: " << fileSize << " bytes." << endl;

    return 0;
}
