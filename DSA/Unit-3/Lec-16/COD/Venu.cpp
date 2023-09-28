//Venu

#include <iostream>
#include <stack>
#include <cctype>

using namespace std;

bool isValidPostfixExpression(const string& postfix) {
    stack<int> operands;

    for (char ch : postfix) {
        if (isdigit(ch)) {
            operands.push(ch - '0');
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            if (operands.size() < 2) {
                return false;  // Not enough operands for the operator
            }

            int operand2 = operands.top();
            operands.pop();

            int operand1 = operands.top();
            operands.pop();

            switch (ch) {
                case '+':
                    operands.push(operand1 + operand2);
                    break;
                case '-':
                    operands.push(operand1 - operand2);
                    break;
                case '*':
                    operands.push(operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        return false;  // Division by zero
                    }
                    operands.push(operand1 / operand2);
                    break;
            }
        } else if (!isspace(ch)) {
            return false;  // Invalid character
        }
    }

    return operands.size() == 1;  // All operands used, and there is exactly one result
}

int main() {
    string postfix;
    getline(cin, postfix);

    if (isValidPostfixExpression(postfix)) {
        cout << "Valid postfix expression" << endl;
    } else {
        cout << "Invalid postfix expression" << endl;
    }

    return 0;
}
