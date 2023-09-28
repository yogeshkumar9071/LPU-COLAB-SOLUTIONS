// You are tasked with implementing a ticketing system for a concert event using a queue using a linked list data structure. 

#include <iostream>
#include <vector>

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

class TicketQueue {
private:
    Node* front;
    Node* rear;
    int capacity;

public:
    TicketQueue(int cap) : front(nullptr), rear(nullptr), capacity(cap) {}

    void enqueue(int ticketNumber) {
        Node* newNode = new Node(ticketNumber);

        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void displayZigzagPattern() {
        std::vector<int> tickets;

        // Copy ticket numbers to a vector
        Node* current = front;
        while (current != nullptr) {
            tickets.push_back(current->data);
            current = current->next;
        }

        int n = tickets.size();
        int i = 0;
        int j = n - 1;

        // Print in zigzag pattern
        while (i <= j) {
            std::cout << tickets[i++] << " ";

            if (i <= j) {
                std::cout << tickets[j--] << " ";
            }
        }
    }
};

int main() {
    int capacity;
    std::cin >> capacity;

    TicketQueue ticketQueue(capacity);

    int ticketNumber;
    std::cin >> ticketNumber;

    while (ticketNumber != -1) {
        ticketQueue.enqueue(ticketNumber);
        std::cin >> ticketNumber;
    }

    ticketQueue.displayZigzagPattern();

    return 0;
}
