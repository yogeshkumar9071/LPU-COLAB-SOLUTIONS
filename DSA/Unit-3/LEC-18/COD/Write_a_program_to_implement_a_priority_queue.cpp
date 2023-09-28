// Write a program to implement a priority queue using an array-based approach. 

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class PriorityQueue {
private:
    int size;
    int elements[MAX_SIZE];
    int priorities[MAX_SIZE];

public:
    PriorityQueue() : size(0) {}

    void enqueue(int element, int priority) {
        if (isFull()) {
            cout << "Priority Queue is full. Cannot enqueue." << endl;
            return;
        }

        int i;
        for (i = size - 1; i >= 0 && priorities[i] > priority; --i) {
            elements[i + 1] = elements[i];
            priorities[i + 1] = priorities[i];
        }

        elements[i + 1] = element;
        priorities[i + 1] = priority;
        ++size;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority Queue is empty. Cannot dequeue." << endl;
            return;
        }

        for (int i = 0; i < size - 1; ++i) {
            elements[i] = elements[i + 1];
            priorities[i] = priorities[i + 1];
        }

        --size;
    }

    bool isEmpty() const {
        return size == 0;
    }

    bool isFull() const {
        return size == MAX_SIZE;
    }

    void printPriorityQueue() const {
        cout << "Priority Queue: ";
        for (int i = 0; i < size; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue priorityQueue;

    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int element, priority;
        cin >> element >> priority;
        priorityQueue.enqueue(element, priority);
    }

    priorityQueue.printPriorityQueue();

    priorityQueue.dequeue();
    priorityQueue.printPriorityQueue();

    return 0;
}
