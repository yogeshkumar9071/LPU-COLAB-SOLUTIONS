// Michael

#include <iostream>
#include <deque>

int main() {
    std::deque<int> stockPrices;
    int input;

    while (true) {
        std::cin >> input;

        if (input == -1) {
            break;
        }

        stockPrices.push_back(input);
    }

    if (!stockPrices.empty()) {
        int minPrice = stockPrices.front();

        for (const int& price : stockPrices) {
            if (price < minPrice) {
                minPrice = price;
            }
        }

        std::cout << minPrice << std::endl;
    }

    return 0;
}
