//You are tasked with implementing a double-ended queue data structure using a linked list.

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

public:
    Deque() : front(nullptr), rear(nullptr) {}

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
    }

    void displayEvenOdd() {
        Node* current = front;

        std::cout << "Even elements: ";
        while (current != nullptr) {
            if (current->data % 2 == 0) {
                std::cout << current->data << " ";
            }
            current = current->next;
        }

        current = rear; // Traverse in reverse order for odd elements

        std::cout << "\nOdd elements: ";
        while (current != nullptr) {
            if (current->data % 2 != 0) {
                std::cout << current->data << " ";
            }
            current = current->prev;
        }

        std::cout << std::endl;
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

    deque.displayEvenOdd();

    return 0;
}
