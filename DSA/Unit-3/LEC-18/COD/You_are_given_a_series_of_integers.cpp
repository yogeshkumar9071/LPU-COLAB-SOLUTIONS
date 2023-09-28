// You are given a series of integers, and your task is to process them using a Queue data structure. 

#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    int N;
    std::cin >> N;

    for (int i = 0; i < N; ++i) {
        int element;
        std::cin >> element;
        myQueue.push(element);
    }

    int sum = 0;
    while (!myQueue.empty()) {
        sum += myQueue.front();
        myQueue.pop();
    }

    if (sum == 0) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << sum << std::endl;
    }

    return 0;
}
