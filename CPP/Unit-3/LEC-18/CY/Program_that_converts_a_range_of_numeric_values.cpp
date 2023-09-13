//Create a C++ program that converts a range of numeric values into their corresponding textual representation (e.g., 1 to "One," 23 to "Two Three"). The program should take a start and end value as input and display the number-text pairs within that range.


#include <iostream>
#include <string>

class NumToText {
private:
    int num;
    std::string text;

    std::string getTextForBaseData(int digit) {
        switch (digit) {
            case 0: return "Zero";
            case 1: return "One";
            case 2: return "Two";
            case 3: return "Three";
            case 4: return "Four";
            case 5: return "Five";
            case 6: return "Six";
            case 7: return "Seven";
            case 8: return "Eight";
            case 9: return "Nine";
            default: return "";
        }
    }

public:
    NumToText(int number) : num(number) {
        if (num >= 0 && num <= 9) {
            text = getTextForBaseData(num);
        } else if (num >= 10) {
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                temp /= 10;
                text = getTextForBaseData(digit) + text;
            }
        }
    }

    void display() {
        std::cout << "Number - " << num << "; Text - " << text << std::endl;
    }
};

int main() {
    int start, end;
    std::cin >> start >> end;

    if (start < 0) {
        start = 0;
    }

    for (int i = start; i <= end; ++i) {
        NumToText numText(i);
        numText.display();
    }

    return 0;
}
