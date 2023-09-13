//Usha wants to write a program that performs mathematical calculations on a given number. Usha to enter an integer value. After receiving the input, it creates an object of class Demo using the entered value. The Demo class has a constructor that initializes a private data member n with the given value. Then it calls the display() member function of the Demo class to calculate and display the square and square root of the entered number. After calculating, a destructor is called indicating that the object is destroyed.

#include <iostream>
#include <cmath>
class Demo {
private:
    int n;
public:
    Demo(int value) {
        n = value;
        std::cout << "Inside Constructor" << std::endl;
    }
    ~Demo() {
        std::cout << "Inside Destructor" << std::endl;
    }
    void display() {
        int square = n * n;
        double squareRoot = sqrt(n);
        std::cout << "square = " << square << std::endl;
        std::cout << "square root = " << squareRoot << std::endl;
    }
};
int main() {
    int n;
    std::cin >> n;
    Demo demoObject(n);
    demoObject.display();
    return 0;
}