//Julie

#include <iostream>

using namespace std;

 
const int MAX_SIZE = 100;

 
class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
     
    Stack() {
        top = -1;
    }

    
    bool push(int value) {
        if (top >= MAX_SIZE - 1) {
            return false; // Stack Overflow
        }
        arr[++top] = value;
        return true;
    }

     
    bool pop(int &value) {
        if (top < 0) {
            return false; // Stack Underflow
        }
        value = arr[top--];
        return true;
    }

 
    void display() {
        if (top < 0) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Elements in the stack:";
        for (int i = top; i >= 0; i--) {
            cout << " " << arr[i];
        }
        cout << endl;
    }
};

int main() {
    Stack stack;

    while (true) {
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                int value;
                cin >> value;
                if (stack.push(value)) {
                    cout << "Element " << value << " pushed onto the stack." << endl;
                } else {
                    cout << "Stack Overflow. Cannot push more elements." << endl;
                }
                break;
            }
            case 2: {
                int value;
                if (stack.pop(value)) {
                    cout << "Element " << value << " popped from the stack." << endl;
                } else {
                    cout << "Stack Underflow. Cannot perform pop operation." << endl;
                }
                break;
            }
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}

