//Create a program that manages distances using the Distance class.

#include <iostream>

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(float f, float i) : feet(static_cast<int>(f)), inches(i) {}

    Distance(const Distance& other) : feet(other.feet), inches(other.inches) {}

    void setDistance(float f, float i) {
        feet = static_cast<int>(f);
        inches = i;
    }

    void addDistance(const Distance& d1, const Distance& d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        if (inches >= 12.0) {
            inches -= 12.0;
            feet++;
        }
    }

    void displayDistance() const {
        std::cout << "distance = " << feet << "'" << inches << "\"" << std::endl;
    }
};

int main() {
    float feet1, inches1, feet2, inches2;

    std::cin >> feet1 >> inches1;
    std::cin >> feet2 >> inches2;

    Distance d1(feet1, inches1);
    Distance d2 = d1; // Copy constructor is called

    Distance sum;
    sum.addDistance(d1, d2);

    sum.displayDistance();

    return 0;
}
