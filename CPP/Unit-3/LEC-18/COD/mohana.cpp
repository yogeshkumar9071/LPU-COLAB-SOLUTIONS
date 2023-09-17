// mohana wants

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int N;
    cin >> N;

    ofstream outFile("marks.dat", ios::out);

    if (!outFile) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    for (int i = 0; i < N; ++i) {
        int studentID;
        cin >> studentID;

        outFile << studentID;

        for (int j = 0; j < 5; ++j) {
            int mark;
            cin >> mark;
            outFile << "," << mark;
        }

        outFile << "," << endl;  // Comma after the last mark, and a newline
    }

    outFile.close();

    ifstream inFile("marks.dat", ios::in);

    if (!inFile) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    string line;
    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
