//Nandha  

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    void display() {
        Node* current = top;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    int getTop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data;
    }
};
int main() {
    int n;
    cin >> n;
    Stack stack;
    if (n == 0) {
        cout << "Stack is empty" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        stack.push(data);
    }
    stack.display();
    cout << "Top element is " << stack.getTop() << endl;
    stack.pop();
    if (stack.getTop() != -1) {
        stack.display();
        cout << "Top element is " << stack.getTop() << endl;
    }
    return 0;
}