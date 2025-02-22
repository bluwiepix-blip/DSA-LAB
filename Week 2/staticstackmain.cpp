#include <stdlib.h>
#include<iostream>
#include "staticstack.h"
using namespace std;

Stack::Stack() {
	top = -1;
}

int Stack::IsEmpty()const {
	if (top == -1)
		return 1;
	else
		return 0;
}

int Stack::IsFull() const {
	return (top == MAX_ITEMS - 1);
}

void Stack::Push(ItemType& newItem) {
	if (IsFull())
	{
		cout << "Stack Overflow" << endl;
		exit(1);
	}

	top++;
	items[top] = newItem;

}

void Stack::Pop(ItemType& item) {
	if (IsEmpty()) {
		cout << "Stack UnderFlow" << endl;
		exit(1);
	}
	item = items[top];
	top--;
}

ItemType Stack::Peek() const {
	if (IsEmpty()) {
		cout << "cannot peek." << endl;
		exit(1);
	}
	return items[top];
}