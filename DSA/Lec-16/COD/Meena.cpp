// Meena

#include <iostream>
#include <stack>
#include <string>
#include <sstream>

using namespace std;

int evaluatePostfixExpression(const string& expression) {
    stack<int> operandStack;

    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            int operand = stoi(token);
            operandStack.push(operand);
        } else if (token == "+") {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();
            operandStack.push(operand1 + operand2);
        } else if (token == "-") {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();
            operandStack.push(operand1 - operand2);
        } else if (token == "*") {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();
            operandStack.push(operand1 * operand2);
        } else if (token == "/") {
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();
            operandStack.push(operand1 / operand2);
        }
    }

    return operandStack.top();
}

int main() {
    string expression;
    getline(cin, expression);

    int result = evaluatePostfixExpression(expression);
    cout << result << endl;

    return 0;
}
