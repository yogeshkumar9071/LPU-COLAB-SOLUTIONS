//Manu is a software developer working on a project that involves handling and displaying data. He is designing a class called "Demo" to represent data objects. The class has two private integer variables: num1 and num2, a constructor, a display function, and a destructor.


#include <iostream>

class Demo {
private:
    int num1;
    int num2;

public:

    Demo(int n1, int n2) : num1(n1), num2(n2) {
        std::cout << "Inside Constructor" << std::endl;
    }

    void display() {
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
    }

    ~Demo() {
        std::cout << "Inside Destructor" << std::endl;
    }
};

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    Demo demoObj(n1, n2);

    demoObj.display();

    return 0;
}