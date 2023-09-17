//Lala

#include <iostream>
using namespace std;

const int MAX_SIZE = 15;

class Stack {
private:
    int top;
    int elements[MAX_SIZE];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top < MAX_SIZE - 1) {
            elements[++top] = x;
        } else {
            cout << "Stack Overflow" << endl;
            return; // Exit the push function without adding the element.
        }
    }

    void pop() {
        if (top >= 0) {
            top--;
        }
    }

    void display() {
        for (int i = 0; i <= top; ++i) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() {
        return top == -1;
    }

    int getTop() {
        if (top >= 0) {
            return elements[top];
        } else {
            return -1; // Return -1 to indicate an empty stack.
        }
    }
};

int main() {
    int n;
    cin >> n;

    Stack stack;

    if (n > MAX_SIZE) {
        cout << "Stack Overflow" << endl;
        return 0; // Exit the program if n is greater than MAX_SIZE.
    }

    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        stack.push(element);
    }

    if (!stack.isEmpty()) {
         
        stack.display();

        int topElement = stack.getTop();
        cout << "Top element: " << topElement << endl;

        stack.pop();

        
        stack.display();

        if (stack.isEmpty()) {
            cout << "Stack is empty." << endl;
        }
    } else {
        cout << "Stack is empty." << endl;
    }

    return 0;
}
