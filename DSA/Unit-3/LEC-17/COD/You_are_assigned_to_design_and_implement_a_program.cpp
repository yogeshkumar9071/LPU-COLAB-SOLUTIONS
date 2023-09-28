// You are assigned to design and implement a program that simulates a customer queue system for a business.

#include <iostream>
using namespace std;

 
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CustomerQueue {
private:
    Node* front;
    Node* rear;

public:
    CustomerQueue() : front(nullptr), rear(nullptr) {}

 
    void enqueue(int customerId) {
        Node* newNode = new Node(customerId);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Customer ID " << customerId << " is enqueued." << endl;
    }

    // Dequeue the customer at the front of the line
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            Node* temp = front;
            front = front->next;
            if (front == nullptr) {
                rear = nullptr;
            }
            cout << "Dequeued customer ID: " << temp->data << endl;
            delete temp;
        }
    }

    // Display the current customer IDs in the line
    void display() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Customer IDs in the queue are: ";
            Node* temp = front;
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    CustomerQueue queue;

    int option, customerId;

    while (cin >> option) {
        switch (option) {
            case 1:
                cin >> customerId;
                queue.enqueue(customerId);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            default:
                cout << "Invalid option." << endl;
        }
    }

    return 0;
}
