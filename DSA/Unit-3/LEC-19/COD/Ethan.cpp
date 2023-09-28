// Ethan

#include <iostream>
#include <deque>
#include <unordered_map>

int main() {
    std::deque<int> data;
    int input;

    while (true) {
        std::cin >> input;

        if (input == -1) {
            break;
        }

        data.push_back(input);
    }

    std::unordered_map<int, int> countMap;

    for (const auto& element : data) {
        countMap[element]++;
    }

    int mostRepeatedElement = -1;
    int maxCount = 0;

    for (const auto& pair : countMap) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mostRepeatedElement = pair.first;
        }
    }

    std::cout << "Most Repeated Element is " << mostRepeatedElement << " with Count " << maxCount << std::endl;

    return 0;
}
