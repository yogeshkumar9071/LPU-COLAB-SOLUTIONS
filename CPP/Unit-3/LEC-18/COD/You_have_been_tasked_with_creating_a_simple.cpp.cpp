//You have been tasked with creating a simple program to set and display time using the Clock class. The Clock class is designed with a constructor that has default arguments for hours (h), minutes (m), and seconds (s).

#include <iostream>
#include <iomanip>

using namespace std;

class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    void displayTime() {
        cout << setfill('0') << setw(2) << hours << ":"
             << setfill('0') << setw(2) << minutes << ":"
             << setfill('0') << setw(2) << seconds << endl;
    }
};

int main() {
    int h, m, s;
    cin >> h >> m >> s;

    Clock clock(h, m, s);
    clock.displayTime();

    return 0;
}
