// Kamali

#include <iostream>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 0) {
        cout << "Stack is empty" << endl;
        return 0;
    } else if (n > 10) {
        cout << "Stack is full" << endl;
        return 0;
    }

    stack<int> inputStack;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        inputStack.push(num);
    }

    cout << "Original stack: ";
    stack<int> originalStack = inputStack; // Create a duplicate of the stack
    vector<int> originalElements;
    while (!originalStack.empty()) {
        originalElements.push_back(originalStack.top());
        originalStack.pop();
    }

    for (int i = originalElements.size() - 1; i >= 0; i--) {
        cout << originalElements[i] << " ";
    }
    cout << endl;

    stack<int> sortedStack;
    while (!inputStack.empty()) {
        int temp = inputStack.top();
        inputStack.pop();

        while (!sortedStack.empty() && temp > sortedStack.top()) {
            inputStack.push(sortedStack.top());
            sortedStack.pop();
        }
        sortedStack.push(temp);
    }

    cout << "Sorted stack: ";
    vector<int> sortedElements;
    while (!sortedStack.empty()) {
        sortedElements.push_back(sortedStack.top());
        sortedStack.pop();
    }

    for (int i = 0; i < sortedElements.size(); i++) {
        cout << sortedElements[i] << " ";
    }
    cout << endl;

    return 0;
}
