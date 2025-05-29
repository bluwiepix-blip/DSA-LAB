


# **Binary Search Tree (BST) for Sorting Strings - README**

## **Overview**

This program implements a Binary Search Tree (BST) to sort an array of strings. It demonstrates key functionalities such as inserting, deleting, and retrieving items in a BST. The program is designed to sort the strings by utilizing the BST property where for any given node, the left subtree contains values less than the node, and the right subtree contains values greater than the node. The sorted strings are then written to an output file (`out.txt`).

## **Features**

* **Insertion**: Insert strings into the BST in sorted order.
* **Deletion**: Remove specific strings from the BST.
* **Retrieval**: Search for strings in the BST.
* **Sorting**: The strings are automatically sorted as they are inserted into the BST.
* **File Output**: The sorted strings are printed to a file (`out.txt`).

## **How It Works**

1. **Tree Structure**:

   * The program uses a templated `TreeType` class, which allows it to store any type of item (in this case, strings).
   * Each node in the tree contains a string (`info`) and pointers to the left and right child nodes.

2. **Inserting Strings**:

   * The strings are inserted one by one into the BST. As the tree grows, each insertion ensures that the BST properties (left < root < right) are maintained.

3. **Deleting Items**:

   * A string can be deleted from the BST, and the tree is adjusted to maintain its structure.

4. **Sorting the Array**:

   * Once all the strings are inserted, an in-order traversal is performed to print the strings in ascending order (sorted).
   * The sorted strings are written to `out.txt` using an output file stream.

5. **File Output**:

   * The sorted strings are printed into `out.txt`, and a confirmation message is displayed on the console.

## **Instructions**

1. **Compilation**:

   * To compile and run this program, ensure you have a C++ compiler. Save the file as `BST_Sort.cpp` and use the following command to compile:

     ```bash
     g++ -o BST_Sort BST_Sort.cpp
     ```

2. **Execution**:

   * After compiling, run the program:

     ```bash
     ./BST_Sort
     ```

3. **Output**:

   * The program will create a file `out.txt` containing the sorted strings.
   * You will also see a message in the console confirming that the sorting was successful.

## **Example Output**

If the input array of strings is:

```cpp
string emaarrayofstring[10] = { "Real", "Eyes", "Realise ", "Real ", "Lies" };
```

The `out.txt` file will contain:

```
Eyes        Lies        Real        Realise        Real
```

The program ensures that the strings are sorted in ascending order based on their lexicographical order.

## **Code Explanation**

* **TreeType class**: The class that defines the binary search tree (BST) and contains methods for inserting, deleting, retrieving, and printing the tree.
* **TreeNode struct**: A struct that defines the node of the BST, holding an item and pointers to the left and right children.
* **makenode()**: A helper function that creates a new node with a given value.
* **IsEmpty()**: Checks if the tree is empty.
* **IsFull()**: Checks if the tree is full (not implemented correctly in this code).
* **Numberofnodes()**: Returns the total number of nodes in the tree.
* **InsertItem()**: Inserts an item into the tree.
* **DeleteItem()**: Deletes an item from the tree.
* **RetrieveItem()**: Retrieves an item from the tree.
* **PrintTree()**: Prints the items in the tree in sorted order.



## **License**

This project is open-source and available under the MIT License. Feel free to modify, share, and distribute it.
