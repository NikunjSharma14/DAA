#include <iostream>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;

const int MAXN = 1000;
int n;
bool vis[MAXN];
vector<int> adj_list[MAXN];
vector<int> rev_adj_list[MAXN];

// Function to perform Breadth First Search (BFS)
void bfs(int start) {
    queue<int> q;
    vis[start] = true;
    q.push(start);
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : adj_list[u]) {
            if (!vis[v]) {
                vis[v] = true;
                q.push(v);
            }
        }
    }
}

// Function to perform Depth First Search (DFS)
void dfs(int u, stack<int>& stk) {
    vis[u] = true;
    for (int v : rev_adj_list[u]) {
        if (!vis[v]) {
            dfs(v, stk);
        }
    }
    stk.push(u);
}

int main() {
    memset(vis, false, sizeof(vis));

   
    int m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        rev_adj_list[v].push_back(u); // Reverse the edges
    }

    // Perform BFS
    cout << "BFS traversal: ";
    bfs(1);
    cout << endl;

    // Perform DFS using the reversed graph
    stack<int> stk;
    memset(vis, false, sizeof(vis));
    dfs(1, stk);

    // Print the DFS traversal
    cout << "DFS traversal: ";
    while (!stk.empty()) {
        int u = stk.top();
        stk.pop();
        if (!vis[u]) {
            dfs(u, stk);
        }
        cout << u << " ";
    }
    cout << endl;

    return 0;
}
