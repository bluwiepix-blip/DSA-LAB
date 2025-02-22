# C++ Recursive Programs

This repository contains various C++ programs demonstrating recursion through different problems. Each program explores fundamental concepts of recursion, mathematical functions, and algorithmic thinking.

## Table of Contents
1. [Reverse Input](#reverse-input)
2. [Ackermann Function](#ackermann-function)
3. [Print Numbers](#print-numbers)
4. [Binomial Coefficient](#binomial-coefficient)
5. [Prime Number Check](#prime-number-check)
6. [Concepts Covered](#concepts-covered)

---

## Reverse Input

*File:* reverse_input.cpp

This program takes character input and prints them in reverse order using recursion.

### Concepts Covered:
- Recursion
- Character input handling
- Stack behavior in recursion

### Usage:
cpp
Enter a string: hello
Output: olleh


---

## Ackermann Function

*File:* ackermann.cpp

This program implements the Ackermann function, a classic example of a recursive function that grows rapidly.

### Concepts Covered:
- Recursive function calls
- Mathematical functions
- Stack depth consideration

### Usage:
cpp
Output: A(3,4) = 125


---

## Print Numbers

*File:* print_numbers.cpp

This program prints numbers from n to 0 recursively.

### Concepts Covered:
- Base case and recursive case
- Function call stack
- Recursive decrementing loop

### Usage:
cpp
Enter a number: 5
Output: 5 4 3 2 1 0


*Bug Fix:* The line cin n; should be corrected to cin >> n;.

---

## Binomial Coefficient

*File:* binomial_coeff.cpp

This program calculates the binomial coefficient C(n, k) recursively.

### Concepts Covered:
- Recursive mathematical functions
- Combination formula
- Divide and conquer approach

### Usage:
cpp
Enter n and k: 5 2
Output: C(5,2) = 10


---

## Prime Number Check

*File:* is_prime.cpp

This program checks whether a number is prime using recursion.

### Concepts Covered:
- Recursive number checking
- Efficient prime checking using i * i > n condition
- Base case optimizations

### Usage:
cpp
Enter a number: 7
Output: 7 is a prime number.


*Bug Fix:* A space is needed between "is not a prime number." in the else statement.

---

## Concepts Covered
This repository introduces and reinforces the following programming concepts:
- *Recursion:* All programs employ recursive functions to solve problems.
- *Mathematical Computation:* Programs implement fundamental mathematical operations like factorial, binomial coefficients, and Ackermann function.
- *Function Calls & Stack Behavior:* Understanding how function calls operate in recursive solutions.
- *Base Cases & Termination Conditions:* Ensuring recursion does not result in infinite loops.
- *Input Handling:* Proper user input retrieval and validation in C++.

---

## Compilation and Execution
To compile and run any of the programs, use the following command:

bash
g++ filename.cpp -o output
./output


Replace filename.cpp with the actual program file name.

---