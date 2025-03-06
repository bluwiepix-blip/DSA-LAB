# Priority Queue Implementation in C++

## Overview
This project implements a **Priority Queue** in C++ using templates and an array-based circular queue. It provides two implementations:
1. A fixed-priority queue with 10 priority levels.
2. A dynamic-priority queue where the number of priority levels is specified by the user at runtime.

The priority queue is built using an array of queues, where each queue represents a different priority level. Items with higher priority are dequeued before lower-priority items.

## Features
- **Generic Implementation**: The queue is implemented using templates to support different data types.
- **Circular Queue**: Efficient queue operations using a circular array.
- **Dynamic Memory Allocation**: The number of priority levels can be set at runtime.
- **Basic Queue Operations**:
  - Insert an item with a priority level.
  - Remove the highest-priority item.
  - Check if the queue is full or empty.

## Classes
### `Que<ItemType>`
A basic queue implementation using a circular array.
#### Methods:
- `Que()` - Default constructor.
- `Que(int max)` - Parameterized constructor to define the queue size.
- `~Que()` - Destructor to free allocated memory.
- `int IsFull() const` - Checks if the queue is full.
- `int IsEmpty() const` - Checks if the queue is empty.
- `void Insert(ItemType item)` - Inserts an item into the queue.
- `void Remove(ItemType& item)` - Removes an item from the front of the queue.

### `PQue<ItemType>` (Fixed Priority Queue)
A priority queue with 10 fixed priority levels.
#### Methods:
- `PQue()` - Default constructor initializes 10 priority levels.
- `int IsFull() const` - Checks if all priority levels are full.
- `int IsEmpty() const` - Checks if all priority levels are empty.
- `void Insert(ItemType newItem, int p)` - Inserts an item with a given priority.
- `void Remove(ItemType& item)` - Removes the highest-priority item.

### `PQue<ItemType>` (Dynamic Priority Queue)
A priority queue with a user-defined number of priority levels.
#### Methods:
- `PQue(int numLevels)` - Constructor initializes a dynamic number of priority levels.
- `~PQue()` - Destructor to free allocated memory.
- `int IsFull() const` - Checks if all priority levels are full.
- `int IsEmpty() const` - Checks if all priority levels are empty.
- `void Insert(ItemType newItem, int p)` - Inserts an item with a given priority.
- `void Remove(ItemType& item)` - Removes the highest-priority item.

## Compilation and Execution
### Compile the Code
```sh
g++ priority_queue.cpp -o priority_queue
```

### Run the Program
```sh
./priority_queue
```

### Sample Input/Output
#### Input:
```
Enter the number of priority levels: 5
Inserting elements in priority queue:
Removing elements from priority queue:
```
#### Output:
```
Removed: 15
Removed: 10
Removed: 30
Removed: 20
```

## Limitations
- The priority queue implementation uses an array of queues, which has a fixed size for each priority level.
- No error handling for excessive memory allocation in dynamic priority queues.

## Future Improvements
- Implement a **heap-based** priority queue for better efficiency.
- Allow **resizable** queues instead of fixed-size arrays.
- Improve error handling and exception handling.

## License
This project is open-source and available for modification and distribution under the MIT License.

