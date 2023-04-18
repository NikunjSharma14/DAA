#include <iostream>
#include <vector>

using namespace std;

bool is_complete_graph(vector<vector<int>> graph) {
    int n = graph.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i != j && !graph[i][j]) {
                // If there is no edge between vertices i and j, the graph is not complete
                return false;
            }
        }
    }
    // If we have checked all pairs of vertices and found an edge between each pair, the graph is complete
    return true;
}

int main() {
    vector<vector<int>> graph = {{0, 1, 1, 1},
                                 {1, 0, 1, 1},
                                 {1, 1, 0, 1},
                                 {1, 1, 0, 0}};
    if(is_complete_graph(graph)) {
        cout << "The graph is complete" << endl;
    } else {
        cout << "The graph is not complete" << endl;
    }
    return 0;
}