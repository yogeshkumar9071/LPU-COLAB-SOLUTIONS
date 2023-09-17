//Naveen

#include <iostream>

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
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = top;
        top = newNode;
    }

    void pop() {
        if (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void deleteEven() {
        Node* current = top;
        Node* prev = nullptr;

        while (current != nullptr) {
            if (current->data % 2 == 0) {
                if (prev == nullptr) {
                    top = current->next;
                    delete current;
                    current = top;
                } else {
                    prev->next = current->next;
                    delete current;
                    current = prev->next;
                }
            } else {
                prev = current;
                current = current->next;
            }
        }
    }

    void printStack() {
        Node* current = top;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }
};

int main() {
    int n;
    std::cin >> n;

    Stack stack;

    for (int i = 0; i < n; ++i) {
        int element;
        std::cin >> element;
        stack.push(element);
    }

   
    stack.printStack();

    stack.deleteEven();

    stack.printStack();

    return 0;
}
