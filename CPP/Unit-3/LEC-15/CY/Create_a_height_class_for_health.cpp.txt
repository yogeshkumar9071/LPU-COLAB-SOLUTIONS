//You are tasked with creating a Height class for a health and fitness application. The class should have the following features:
#include <iostream>

class Height {
private:
    int feet;
    double inches;

public:
    Height() {
        feet = 0;
        inches = 0.0;
    }

    void setHeight(int ft) {
        feet = ft;
        inches = 0.0;
    }

    void setHeight(double ft) {
        feet = static_cast<int>(ft);
        inches = (ft - feet) * 12.0;
    }

    void setHeight(int ft, double in) {
        feet = ft;
        inches = in;
    }

    void show() {
        std::cout << "Feet=" << feet << " inches=" << inches << std::endl;
    }
};

int main() {

    Height h1, h2, h3;

    int feet1;
    std::cin >> feet1;
    h1.setHeight(feet1);

    double feet2;
    std::cin >> feet2;
    h2.setHeight(feet2);

    int feet3;
    double inches3;
    std::cin >> feet3 >> inches3;
    h3.setHeight(feet3, inches3);

    h1.show();
    h2.show();
    h3.show();

    return 0;
}