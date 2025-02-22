#include"dynamicstack.h"
#include<stdlib.h>

template<class ItemType>
Stack <ItemType>::Stack(){
    maxStack=500;
    top=-1;
    items=new ItemType[500];
}
template<class ItemType>
Stack<ItemType>::Stack (int max){
    maxStack=max;
    top=-1;
    items=new ItemType[max];
}
template<class ItemType>
Stack<ItemType>::~Stack(){
    delete[items];
}
template<class ItemType>
int Stack<ItemType>::IsEmpty() const{
return (top==-1);
}
template<class ItemType>
int Stack<ItemType>>::IsFull(){
    return (top==maxStack-1);
}
template<class ItemType>
void Stack<ItemType> ::Push(ItemType newItem){
    if (IsFull()){
        cout<<"Stack OverFlow:"<<endl;
        exit(1);
    }
    top++;
    items[top]=newItem;
}
template<class ItemType>
void Stack <ItemType> :: Pop(ItemType item){
    if(IsEmpty()){
        cout<<"Stack Underflow."<<endl;
        exit(1);
    }
    item=items[top];
    top--;
}
template <class ItemType>
ItemType Stack<ItemType>::Peek() const {
    if (IsEmpty()) {
        scout << "Cannot peek, stack is empty." << endl;
        exit(1);
    }
    return items[top];
}
template <class ItemType>
bool Stack<ItemType>::isValidParentheses(const string& expression) {
    Stack<char> stack;
    for (char ch : expression) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.Push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (stack.IsEmpty()) return false;
            char topChar;
            stack.Pop(topChar);
            if ((ch == ')' && topChar != '(') ||
                (ch == '}' && topChar != '{') ||
                (ch == ']' && topChar != '[')) {
                return false;
            }
        }
    }
    return stack.IsEmpty();
}

int getPrecedence(char op) {  
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

template <class ItemType>
string Stack<ItemType>::infixToPostfix(const string& infix) {
    Stack<char> stack;
    string postfix;

    for (size_t i = 0; i < infix.length(); i++) { 
        char ch = infix[i]; 

        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            stack.Push(ch);
        } else if (ch == ')') {
            char topChar;
            while (!stack.IsEmpty()) {
                stack.Pop(topChar);
                if (topChar == '(') break;
                postfix += topChar;
            }
        } else {
            while (!stack.IsEmpty() && getPrecedence(stack.Peek()) >= getPrecedence(ch)) {
                char topChar;
                stack.Pop(topChar);
                postfix += topChar;
            }
            stack.Push(ch);
        }
    }

    while (!stack.IsEmpty()) {
        char topChar;
        stack.Pop(topChar);
        postfix += topChar;
    }
    
    return postfix;
}

template <class ItemType>
int Stack<ItemType>::evaluatePostfix(const string& postfix) {
    Stack<int> stack;
    for (char ch : postfix) {
        if (isdigit(ch)) {
            int val = ch - '0';
            stack.Push(val);
        } else {
            int val1, val2;
            stack.Pop(val2);
            stack.Pop(val1);
            switch (ch) {
                case '+': stack.Push(val1 + val2); break;
                case '-': stack.Push(val1 - val2); break;
                case '*': stack.Push(val1 * val2); break;
                case '/': stack.Push(val1 / val2); break;
            }
        }
    }
    int result;
    stack.Pop(result);
    return result;
}


