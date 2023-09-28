// Meena

#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() : day(31), month(12), year(2022) {}

    Date(int d, int m, int y) {
        setDay(d);
        setMonth(m);
        setYear(y);
    }

    void display() const {
        std::cout << day << "-" << month << "-" << year << std::endl;
    }

    void setDay(int d) {
        day = (d >= 1 && d <= 31) ? d : 30;
    }

    void setMonth(int m) {
        month = (m >= 1 && m <= 12) ? m : 12;
    }

    void setYear(int y) {
        year = (y >= 2023 && y <= 2998) ? y : 2023;
    }
};

int main() {
    Date defaultDate;
    defaultDate.display();

    int inputDay, inputMonth, inputYear;
    std::cin >> inputDay >> inputMonth >> inputYear;

    Date userDate(inputDay, inputMonth, inputYear);

    userDate.display();

    return 0;
}
