//Create a class named "Money" with attributes "rupee" and "paisa." Implement a constructor that initializes rupees and paisas with default values of 0. 


#include <iostream>
class Money {
private:
    int rupee;
    int paisa;

public:

    Money() : rupee(0), paisa(0) {}

    void setRupee(int r) {
        rupee = r;
    }

    void setPaisa(int p) {

        rupee += p / 100;
        paisa = p % 100;
    }

    // Getter functions
    int getRupee() const {
        return rupee;
    }

    int getPaisa() const {
        return paisa;
    }
};

int main() {
    Money m1, m2;

    int rupee1, paisa1;
    std::cin >> rupee1 >> paisa1;

    int rupee2, paisa2;
    std::cin >> rupee2 >> paisa2;

    m1.setRupee(rupee1);
    m1.setPaisa(paisa1);

    m2.setRupee(rupee2);
    m2.setPaisa(paisa2);

    int totalRupees = m1.getRupee() + m2.getRupee();
    int totalPaisas = m1.getPaisa() + m2.getPaisa();

    totalRupees += totalPaisas / 100;
    totalPaisas %= 100;

    std::cout << totalRupees << "." << totalPaisas << std::endl;

    return 0;
}