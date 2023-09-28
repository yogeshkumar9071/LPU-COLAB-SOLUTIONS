// Lisa

#include <iostream>
#include <stack>

int main() {
    int n;
    std::cin >> n;

    std::stack<int> stackA;
    std::stack<int> stackB;

    for (int i = 0; i < n; ++i) {
        int value;
        std::cin >> value;
        stackA.push(value);
    }

    // Display elements of stack A after pushing
    std::cout << "Stack A elements:";
    while (!stackA.empty()) {
        std::cout << " " << stackA.top();
        stackB.push(stackA.top()); // Push elements to stack B while printing stack A
        stackA.pop();
    }
    std::cout << std::endl;

    // Display reversed elements of stack A (stack B)
    std::cout << "Elements in Stack B (reversed):";
    while (!stackB.empty()) {
        std::cout << " " << stackB.top();
        stackB.pop();
    }
    std::cout << std::endl;

    return 0;
}
