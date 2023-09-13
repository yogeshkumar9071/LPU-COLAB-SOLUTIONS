//Jyothi wants to encapsulate the integer primitive data type in C++ by defining her own class, and she would like you to create the class for her using an initializer list. While creating the Integer object, it should set the default value to 0. Help her create the Integer class that will perform the necessary operation.


#include <iostream>

class Integer {
private:
    int value;

public:
    Integer() : value(0) {}

    void setValue(int n) {
        value = n;
    }

    int getValue() {
        return value;
    }
};

int main() {
    int N;
    std::cin >> N;

    Integer obj;

    for (int i = 0; i < N; i++) {
        std::cout << obj.getValue() << std::endl;
        if (obj.getValue() == 0) {
            obj.setValue(10);
        } else {
            obj.setValue(0);
        }
    }

    return 0;
}