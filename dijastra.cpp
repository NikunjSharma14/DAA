#include <iostream>
#include <limits>
using namespace std;

const int MAX_V = 1000; 
const int INF = numeric_limits<int>::max(); 

int graph[MAX_V][MAX_V]; 
int dist[MAX_V]; 
bool visited[MAX_V]; 

int dijkstra(int start, int n) {
    for (int i = 0; i < n; i++) {
        dist[i] = INF; 
        visited[i] = false; 
    }
    dist[start] = 0; 

    for (int i = 0; i < n; i++) {
        int u = -1;
        
        for (int j = 0; j < n; j++) {
            if (!visited[j] && (u == -1 || dist[j] < dist[u])) {
                u = j;
            }
        }

        if (dist[u] == INF) {
            break; 
        }

        visited[u] = true; 

        
        for (int v = 0; v < n; v++) {
            if (graph[u][v] != INF) { 
                int alt = dist[u] + graph[u][v]; 
                if (alt < dist[v]) { 
                    dist[v] = alt;
                }
            }
        }
    }

    return dist[n - 1]; 
}

int main() {
    int n = 6; 

    
    graph[0][1] = 2;
    graph[0][2] = 8;
    graph[0][3] = 1;
    graph[1][3] = 3;
    graph[1][4] = 7;
    graph[2][4] = 1;
    graph[3][4] = 5;
    graph[4][5] = 2;

    int start = 0; 
    int shortestDist = dijkstra(start, n);

    
    //cout << "Shortest distance from vertex " << start << " to vertex " << n - 1 << ": " << shortestDist << endl;

    return 0;
}
