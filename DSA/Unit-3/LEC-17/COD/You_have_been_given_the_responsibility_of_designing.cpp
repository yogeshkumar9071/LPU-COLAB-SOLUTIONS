//You have been given the responsibility of designing a Queue data structure by utilizing an array-based methodology.

#include <iostream>
using namespace std;

const int MAX_SIZE = 20;

class Queue {
private:
    int front, rear;
    int queue[MAX_SIZE];

public:
    Queue() : front(-1), rear(-1) {}

    void enqueue(int value) {
        if (rear == MAX_SIZE - 1) {
            cout << "Queue is full. Cannot enqueue more elements." << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            queue[++rear] = value;
        }
    }

    void dequeueAll() {
        if (front == -1) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Dequeuing elements:";
            while (front <= rear) {
                cout << " " << queue[front++];
            }
            cout << endl;
        }
    }
};

int main() {
    Queue myQueue;

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        myQueue.enqueue(value);
    }

    myQueue.dequeueAll();

    return 0;
}
