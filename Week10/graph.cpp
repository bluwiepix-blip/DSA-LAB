#include <iostream>

using namespace std;

const int MAX = 10;

class GraphMatrix {
    int adj[MAX][MAX];
    int numVertices;

public:
    GraphMatrix(int vertices) {
        numVertices = vertices;
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                adj[i][j] = -1; // @brief :no edge
    }

    void addEdge(int u, int v, int wt) {
        adj[u][v] = wt;
        //@brief :For undirected graph: adj[v][u] = wt;
    }

    void print() {
        cout << "Adjacency Matrix:\n";
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                if (adj[i][j] == -1)
                    cout << "0 ";
                else
                    cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    GraphMatrix gm(4);
    gm.addEdge(0, 1, 10);
    gm.addEdge(0, 2, 20);
    gm.addEdge(1, 3, 30);
    gm.print();
}