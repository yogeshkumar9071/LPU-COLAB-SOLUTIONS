// You are working on a ticketing system for a popular music concert.

#include <iostream>

class TicketQueue {
private:
    int* tickets;
    int front;
    int rear;
    int capacity;

public:
    TicketQueue(int cap) : front(0), rear(-1), capacity(cap) {
        tickets = new int[capacity];
    }

    ~TicketQueue() {
        delete[] tickets;
    }

    void enqueue(int ticketNumber) {
        if (rear == capacity - 1) {
            std::cout << "Queue is full. Cannot enqueue more tickets." << std::endl;
            return;
        }

        tickets[++rear] = ticketNumber;
    }

    void reverseFirstK(int k) {
        if (k <= 0 || k > (rear - front + 1)) {
            std::cout << "Invalid value of k for reversing." << std::endl;
            return;
        }

        int i = front;
        int j = front + k - 1;

        while (i < j) {
            std::swap(tickets[i], tickets[j]);
            i++;
            j--;
        }
    }

    void display() {
        for (int i = front; i <= rear; ++i) {
            std::cout << tickets[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Input
    int n, k;
    std::cin >> n >> k;

    TicketQueue ticketQueue(n);

    for (int i = 0; i < n; ++i) {
        int ticketNumber;
        std::cin >> ticketNumber;
        ticketQueue.enqueue(ticketNumber);
    }

    // Reverse the first K elements
    ticketQueue.reverseFirstK(k);

    // Output
    ticketQueue.display();

    return 0;
}
