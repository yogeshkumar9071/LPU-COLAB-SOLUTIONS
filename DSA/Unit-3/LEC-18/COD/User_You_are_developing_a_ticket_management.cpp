// User You are developing a ticket management system for a popular theater. 

#include<iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == 4) {
            cout << "Queue is full." << endl;
            return;
        }

        arr[++rear] = value;
        cout << value << " is inserted in the queue." << endl;
    }

    void dequeue() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Deleted number is: " << arr[++front] << endl;
    }

    void display() {
        if (front == rear) {
            cout << "Queue is empty." << endl;
            return;
        }

        cout << "Elements in the queue are: ";
        for (int i = front + 1; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int option, value;

    while (cin >> option) {
        switch (option) {
            case 1:
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            default:
                cout << "Invalid option." << endl;
        }
    }

    return 0;
}
