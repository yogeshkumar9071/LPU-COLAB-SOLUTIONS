//In a prestigious educational institute, Professor Smith designs a programming challenge for Computer Science students.

#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

double applyOperator(double operand1, double operand2, char op) {
    switch (op) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            return 0; // Error case
    }
}

double evaluatePostfix(const string& postfix) {
    stack<double> operands;

    for (char c : postfix) {
        if (isdigit(c)) {
            operands.push(c - '0'); // Convert char to int
        } else if (isOperator(c)) {
            double operand2 = operands.top();
            operands.pop();
            double operand1 = operands.top();
            operands.pop();
            double result = applyOperator(operand1, operand2, c);
            operands.push(result);
        }
    }

    return operands.top();
}

int main() {
    string postfix;
    cin >> postfix;

    double result = evaluatePostfix(postfix);
    cout << result;

    return 0;
}
