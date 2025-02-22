#include <iostream>
#include "staticstack.h"

using namespace std;

void reverseString(Stack& str) {
    Stack s;
    int item;
    while (!s.IsEmpty()) {
        s.Pop(item);
        s.Push(item);
    }

    while (!s.IsEmpty()) {
        s.Pop(item);
        s.Push(item);
    }
}

int main() {
    Stack s;
    int item;

    for (int i = 0; i < 10; i++)
        s.Push(i);

    cout << "Stack before reversing:" << endl;
    Stack temp = s; 
    while (!temp.IsEmpty()) {
        temp.Pop(item);
        cout << item << " ";
    }
    cout << endl;

    reverseString(s);

    cout << "Stack after reversing:" << endl;
    while (!s.IsEmpty()) {
        s.Pop(item);
        cout << item << " ";
    }
    cout << endl;

    return 0;
}git 