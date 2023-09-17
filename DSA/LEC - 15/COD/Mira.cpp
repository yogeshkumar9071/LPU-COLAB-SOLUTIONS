//Mira  

#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stk;
    int choice;
    do {
        cout << "";
        cout << "";
        cout << "";
        cout << "";
        cin >> choice;
        switch (choice) {
            case 1:
                int num;
                cout << "";
                cin >> num;
                stk.push(num);
                break;
            case 2:
                if (!stk.empty()) {
                    stk.pop();
                } else {
                    cout << "Stack is empty. Cannot perform a pop operation." << endl;
                }
                break;
            case 3:
                if (!stk.empty()) {
                    cout << "Elements in the stack:";
                    stack<int> temp = stk;
                    while (!temp.empty()) {
                        cout << " " << temp.top();
                        temp.pop();
                    }
                    cout << endl;
                } else {
                    cout << "Stack is empty." << endl;
                }
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}