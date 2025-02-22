#include<iostream>
#include"dynamicstack.cpp"

using namespace std;

int main(){
    Stack<int> IntStack;
    Stack<char> CharStack;

    string expression;
    cout << "Enter a parenthesized expression: ";
    cin >> expression;
    if (IntStack.isValidParentheses(expression)) {
        cout << "Valid expression" << endl;
    } else {
        cout << "Invalid expression" << endl;
    }

    string infix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    string postfix = IntStack.infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;

cout << "Enter a valid postfix expression: ";
    cin >> postfix;
    int result = IntStack.evaluatePostfix(postfix);
    cout << "Postfix evaluation result: " << result << endl;

    return 0;
}
    