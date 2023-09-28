// Laddu

#include <iostream>

const int MAX_SIZE = 10;

class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}

    void push(int item) {
        if (top < MAX_SIZE - 1) {
            data[++top] = item;
        }
    }

    void pop() {
        if (top >= 0) {
            --top;
        }
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() const {
        return top == -1;
    }
};

int main() {
    Stack stack;
    int choice, item;

    do {
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cin >> item;
                stack.push(item);
                break;

            case 2:
                if (stack.isEmpty()) {
                    std::cout << "Stack is empty!" << std::endl;
                } else {
                    stack.pop();
                }
                break;

            case 3:
                if (stack.isFull()) {
                    std::cout << "Stack is full!" << std::endl;
                } else {
                    std::cout << "Stack is not full." << std::endl;
                }
                break;

            case 4:
                if (stack.isEmpty()) {
                    std::cout << "Stack is empty!" << std::endl;
                } else {
                    std::cout << "Stack is not empty." << std::endl;
                }
                break;

            case 5:
                break;

            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
