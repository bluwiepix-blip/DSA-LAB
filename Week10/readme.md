

# 📊 Graph Representation Using Adjacency Matrix in C++

This project demonstrates how to represent a **weighted directed graph** using an **adjacency matrix** in C++. It uses a 2D array to store edge weights and handles non-existing edges with a special marker.

---

## 📌 Features

* **Adjacency Matrix** representation
* Handles up to 10 vertices (modifiable)
* Uses `-1` to represent **no edge**
* Prints `0` for better visualization of missing edges

---

## 🛠️ How It Works

* The adjacency matrix `adj[MAX][MAX]` is initialized to `-1`, indicating no edges.
* When an edge is added via `addEdge(u, v, wt)`, it stores the weight at `adj[u][v]`.
* During printing:

  * If `adj[i][j] == -1`, it prints `0` (for no edge).
  * Otherwise, it prints the edge weight.

---

## 🔢 Sample Output

For the following edges:

```cpp
gm.addEdge(0, 1, 10);
gm.addEdge(0, 2, 20);
gm.addEdge(1, 3, 30);
```

### ➤ Output:

```
Adjacency Matrix:
0 10 20 0
0 0 0 30
0 0 0 0
0 0 0 0
```

---

## 💡 Code Explanation

### ➤ Constructor

Initializes all entries to `-1`, meaning no edge.

```cpp
for (int i = 0; i < MAX; i++)
    for (int j = 0; j < MAX; j++)
        adj[i][j] = -1;
```

### ➤ addEdge(u, v, wt)

Adds a directed edge from vertex `u` to `v` with weight `wt`.

### ➤ print()

Prints the entire adjacency matrix:

* `0` means no edge
* Any other value represents an edge weight

---

## 📋 Usage

```cpp
int main() {
    GraphMatrix gm(4);
    gm.addEdge(0, 1, 10);
    gm.addEdge(0, 2, 20);
    gm.addEdge(1, 3, 30);
    gm.print();
}
```

---

## 🧠 Ideal For

* Students learning **Graph Representations**
* Understanding **adjacency matrices** in graph theory
* Implementing basic **directed graphs**
