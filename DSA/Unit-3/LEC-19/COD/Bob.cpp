//Bob

#include <iostream>

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int value) : data(value), next(nullptr), prev(nullptr) {}
};

class Deque {
private:
    Node* front;
    Node* rear;
    int count;

public:
    Deque() : front(nullptr), rear(nullptr), count(0) {}

    bool isEmpty() {
        return front == nullptr;
    }

    void insertFront(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            newNode->next = front;
            front->prev = newNode;
            front = newNode;
        }

        count++;
    }

    void insertRear(int value) {
        Node* newNode = new Node(value);

        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            newNode->prev = rear;
            rear = newNode;
        }

        count++;
    }

    int getCount() const {
        return count;
    }
};

int main() {
    Deque deque;
    int input;

    while (true) {
        std::cin >> input;

        if (input == -1) {
            break;
        }

        if (input % 2 == 0) {
            deque.insertRear(input);
        } else {
            deque.insertFront(input);
        }
    }

    std::cout << "Number of elements in the deque: " << deque.getCount() << std::endl;

    return 0;
}
