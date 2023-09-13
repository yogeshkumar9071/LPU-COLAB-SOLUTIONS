//Gokul wants to create a class Numbers with three parameters, num1, num2, and num3, which are received as inputs from the user and stored as member variables as integer data types. The class should not allow the user to create a numbers object using a default constructor. Use a parameterized constructor to create the given class.


#include <iostream>
#include <algorithm>

class Numbers {
private:
    int num1;
    int num2;
    int num3;

public:
    Numbers(int n1, int n2, int n3) {
        num1 = n1;
        num2 = n2;
        num3 = n3;
    }
    void print() {
        std::cout << num1 << " " << num2 << " " << num3 << std::endl;
    }
    void printSum() {
        int sum = num1 + num2 + num3;
        std::cout << sum << std::endl;
    }
    void printGreatest() {
        int greatest = std::max({num1, num2, num3});
        std::cout << greatest << std::endl;
    }
};

int main() {
    int n1, n2, n3;
    std::cin >> n1 >> n2 >> n3;
    Numbers numbers(n1, n2, n3);
    numbers.print();
    numbers.printSum();
    numbers.printGreatest();

    return 0;
}