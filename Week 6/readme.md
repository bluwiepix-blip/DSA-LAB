# Linked List Implementation in C++

## Overview
This project is a simple implementation of a **singly linked list** in C++ using templates. The list supports standard operations such as insertion, deletion, traversal, and reversal.

## Features
- **Push:** Insert elements at the beginning of the list.
- **Pop:** Remove and return the first element of the list.
- **Insert After:** Insert a new element after a specific value.
- **Delete Item:** Remove an element from the list.
- **Display:** Print the contents of the list.
- **Reverse:** Reverse the order of the linked list.

## Code Structure
The implementation follows an **object-oriented approach** using **class templates**, allowing the list to store any data type.

### Class: `List<ItemType>`
#### Protected Members:
- `struct node`: A structure representing a node of the linked list.
- `NODEPTR listptr`: A pointer to the head of the list.

#### Public Methods:
- **`List()`** – Constructor initializing an empty list.
- **`~List()`** – Destructor to release allocated memory.
- **`bool emptyList()`** – Checks if the list is empty.
- **`void push(ItemType newvalue)`** – Inserts a new value at the beginning of the list.
- **`ItemType pop()`** – Removes and returns the first element of the list.
- **`void insertafter(ItemType oldvalue, ItemType newvalue)`** – Inserts a new value after a given value.
- **`void deleteItem(ItemType oldValue)`** – Removes a specific value from the list.
- **`void display()`** – Prints the elements of the list.
- **`void reverse()`** – Reverses the linked list.

## Usage
### Compiling the Code
To compile and run the program, use a C++ compiler such as **g++**:
```sh
 g++ linked_list.cpp -o linked_list
 ./linked_list
```

### Sample Output
```
Pushing elements: 10, 20, 30, 40, 50
List contents: 50 -> 40 -> 30 -> 20 -> 10 -> NULL
Reversing the list...
List contents: 10 -> 20 -> 30 -> 40 -> 50 -> NULL
```



