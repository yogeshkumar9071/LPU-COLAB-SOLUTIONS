//You are given a Queue of N integers. Write a program to implement the dequeue operation using the linked list.

#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Underflow\nQueue is empty\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr;
        }
    }

    void display() {
        if (front == nullptr) {
            cout << "Underflow\nQueue is empty\n";
        } else {
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
    Queue q;
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        q.enqueue(num);
    }

    q.dequeue();
    q.display();

    return 0;
}
