//You have been tasked with creating a simple program to set and display time using the Clock class. The Clock class is designed with a constructor that has default arguments for hours (h), minutes (m), and seconds (s).


#include <iostream>
#include <iomanip>

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    void displayTime() {
        std::cout << std::setfill('0') << std::setw(2) << hours << ":" 
                  << std::setw(2) << minutes << ":" << std::setw(2) << seconds << std::endl;
    }
};

int main() {
    int h, m, s;
    std::cin >> h >> m >> s;
    Clock time(h, m, s);
    time.displayTime();

    return 0;
}