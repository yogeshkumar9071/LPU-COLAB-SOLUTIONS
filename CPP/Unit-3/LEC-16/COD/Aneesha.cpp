//Aneesha

#include <iostream>

class Base {
private:
    int value;

public:
    Base(int val) : value(val) {
        std::cout << "Base Class Constructor" << std::endl;
        std::cout << "Value set: " << value << std::endl;
    }
};

class InitializerList {
private:
    Base baseObj;

public:
    InitializerList(int val) : baseObj(val) {
        std::cout << "InitilizerList's Constructor" << std::endl;
    }
};

int main() {
    int x;
    std::cin >> x;

    InitializerList obj(x);

    return 0;
}
