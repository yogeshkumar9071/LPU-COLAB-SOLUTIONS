// You are required to create a class called Euclids, which computes the Greatest Common Divisor (GCD) using Euclid's algorithm for two positive integers. The Euclids class takes two integer parameters in a setData method and has three methods: setData, computeGCD, and display.

#include <iostream>
#include <cmath>  

using namespace std;

class Euclids {
private:
    int num1;
    int num2;

public:
    void setData(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    int computeGCD() {
        if (num1 <= 0 || num2 <= 0) {
            return 0;
        }

        while (num2 != 0) {
            int temp = num2;
            num2 = num1 % num2;
            num1 = temp;
        }

        return num1;
    }

    void display() {
        cout << num1 << " " << num2 << endl;
        cout << computeGCD() << endl;
    }
};

int main() {
    Euclids gcdCalculator;
    int input1, input2;

    cin >> input1 >> input2;

    gcdCalculator.setData(input1, input2);

    gcdCalculator.display();

    return 0;
}
