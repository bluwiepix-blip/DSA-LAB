Stack Implementation in C++ 
A robust Stack Data Structure implemented in C++, supporting both static and dynamic allocation. This project provides core stack operations along with additional expression handling features such as parenthesis validation, infix-to-postfix conversion, and postfix evaluation.

📌 Features
✅ Stack Operations: Push, Pop, Peek, Check Empty/Full Status
✅ Parenthesis Validation: Ensures balanced brackets in an expression
✅ Infix to Postfix Conversion: Converts an infix expression to postfix notation
✅ Postfix Evaluation: Computes the result of a postfix expression
✅ Static & Dynamic Stack: Implements both array-based and dynamically allocated stacks
✅ Template-Based Implementation: Supports flexibility for different data types

📁 Project Structure
bash
Copy
Edit
📂 Stack-Project/
│── 📜 staticstack.h         # Header file for static stack
│── 📜 staticstack.cpp       # Implementation of static stack
│── 📜 dynamicstack.h        # Header file for dynamic stack (template-based)
│── 📜 dynamicstack.cpp      # Implementation of dynamic stack
│── 📜 main.cpp              # Main driver program
│── 📜 README.md             # Project documentation
⚙️ Installation & Compilation
🔹 Prerequisites
Ensure you have:

A C++ compiler (GCC, Clang, or MSVC) installed
A C++ IDE (VS Code, CodeBlocks, or Dev-C++)
🔹 Compilation Command
sh
Copy
Edit
g++ main.cpp dynamicstack.cpp staticstack.cpp -o stack_program
🔹 Running the Program
sh
Copy
Edit
./stack_program
💡 Usage Guide
1️⃣ Parenthesis Validation
Enter an expression with brackets (), {}, [].
The program will check if the parentheses are balanced.
2️⃣ Infix to Postfix Conversion
Input a mathematical expression in infix notation (e.g., A+B*C).
The program will convert it into postfix notation.
3️⃣ Postfix Expression Evaluation
Enter a postfix expression containing numbers and operators.
The program will compute the result.
📌 Example Output
📝 Input:
less
Copy
Edit
Enter a parenthesized expression: {[()]}
Enter an infix expression: A+B*C
Enter a valid postfix expression: 23*5+
💻 Output:
r
Copy
Edit
Valid expression
Postfix expression: ABC*+
Postfix evaluation result: 11
🔧 Possible Enhancements
🚀 Implement exception handling instead of exit(1).
🚀 Extend infix-to-postfix conversion to support multi-character operands.
🚀 Optimize reverseString function for correct reversal.