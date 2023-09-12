// You are required to create a program that can perform basic arithmetic operations on complex numbers. A complex number consists of a real part and an imaginary part. The program should provide the following functionality


#include <iostream>

using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() {
        real = 0.0;
        imaginary = 0.0;
    }

    void setValue(double r, double i) {
        real = r;
        imaginary = i;
    }

    Complex sum(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    void display() {
        cout << "Sum of two complex numbers is " << real << " + " << imaginary << "i" << endl;
    }

    ~Complex() {
         
    }
};

int main() {
    Complex c1, c2, c3;
    double real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1 >> real2 >> imaginary2;

    c1.setValue(real1, imaginary1);
    c2.setValue(real2, imaginary2);

    c3 = c1.sum(c2);

    c3.display();

    return 0;
}
