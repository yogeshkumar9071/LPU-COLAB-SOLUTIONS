// You've been assigned the challenge of developing a queue data structure using a linked list.

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);

        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    int dequeue() {
        if (front == nullptr) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return -1;   
        }

        Node* temp = front;
        int value = temp->data;

        if (front == rear) {
            front = rear = nullptr;
        } else {
            front = front->next;
        }

        delete temp;
        return value;
    }

    void displayDequeuedElements() {
        std::cout << "Dequeued elements: ";
        while (front != nullptr) {
            int value = dequeue();
            std::cout << value << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue myQueue;

    int input;
    std::cin >> input;

    while (input != -1) {
        myQueue.enqueue(input);
        std::cin >> input;
    }

    myQueue.displayDequeuedElements();

    return 0;
}



