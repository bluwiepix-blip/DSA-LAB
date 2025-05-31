

## 📁 Sorting & Searching Algorithms —

This project contains implementations and performance analysis of various **sorting algorithms** written in C++. It includes basic user interaction, time measurements, comparison/exchange counts, and array generation.

---

### 📌 Contents

* Exercise 13.1:

  * Bubble Sort
  * Selection Sort
  * Insertion Sort
  * Heap Sort
  * Time measurement demo

* Exercise 13.2:

  * Performance comparison (Comparisons and Exchanges)
  * Random array generation
  * Statistical output (CSV format)

* Exercise 13.3:

  * Sorting with `time_t` comparison for performance

---

## 🧪 Exercise 13.1 — Basic Sorting Implementations

### 1. Time Measurement Program

Measures the time taken by the user to input their name using `time.h`.

```cpp
time_t start, end;
char szInput[25];
double dif;

time(&start);
cin >> szInput;
time(&end);

dif = difftime(end, start);
```

---

### 2. Bubble Sort

* Compares adjacent elements
* Swaps if out of order
* Time Complexity: **O(n²)**

### 3. Selection Sort

* Finds the smallest element
* Swaps it with the current index
* Time Complexity: **O(n²)**

### 4. Insertion Sort

* Builds sorted list one item at a time
* Efficient for small or nearly sorted datasets
* Time Complexity: **O(n²)**

### 5. Heap Sort

* Builds a Max Heap
* Extracts elements in sorted order
* Time Complexity: **O(n log n)**

---

## 📊 Exercise 13.2 — Sorting Performance Stats

This part compares sorting algorithms by counting:

* `Comparisons`: How many times elements were compared
* `Exchanges`: How many swaps were performed

### Algorithms:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Heap Sort

### Output Format:

Prints CSV line per input size:

```
N,BubbleComp,BubbleExch,SelectionComp,SelectionExch,InsertionComp,InsertionExch,HeapComp,HeapExch
```

### Sizes Tested:

```
10, 100, 1000, 5000, 10000, 20000, 50000
```

---

## ⏱️ Exercise 13.3 — Sorting with Clock Timing

This part uses `time.h` to measure how long sorting takes with `clock_t`.

You can plug any sorting function (Bubble, Insertion, etc.) into this framework and check how long it takes for varying array sizes.

```cpp
clock_t start = clock();
// Sorting algorithm here
clock_t end = clock();
double time_taken = double(end - start) / CLOCKS_PER_SEC;
```

---

## 🔧 How to Compile

Use any standard C++ compiler:

```bash
g++ yourfilename.cpp -o output
./output
```

---

## 📈 Learning Outcomes

* Understand working of fundamental sorting algorithms
* Learn to measure time and performance
* Develop ability to evaluate algorithms by comparisons and exchanges
* Understand scalability and time complexity

---

## ✅ Requirements

* C++11 or above
* Console or terminal

---

## 📚 References

* C++ Standard Library
* Data Structures and Algorithms textbooks
* Classroom Exercise Sheet — Chapter 13
