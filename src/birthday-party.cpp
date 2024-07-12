//https://open.kattis.com/problems/birthday
//https://usaco.guide/problems/kattis-birthday-party/solution

// int main() {
//     setIO();
//     int n, m;
//     BirthdayParty bp; // Create an object of the BirthdayParty class
//     while (cin >> n >> m && (n || m)) {
//         bp.solve(n, m); // Call the solve method
//     }
//     return 0;
// }


#include "birthday-party.h"
#include <bits/stdc++.h>
using namespace std;

bool adj[105][105];
bool vis[105];

void dfs(int v, int n) {
    vis[v] = true;
    for (int to = 0; to < n; to++) {
        if (adj[v][to] && !vis[to]) { dfs(to, n); }
    }
}

void BirthdayParty::solve(int n, int m) {
    memset(adj, false, sizeof(adj));
    vector<pair<int, int>> edges;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = true;
        adj[v][u] = true;
        edges.push_back({u, v});
    }
    for (pair<int, int> x : edges) {
        adj[x.first][x.second] = false;
        adj[x.second][x.first] = false;
        memset(vis, false, sizeof(vis));
        dfs(0, n);
        bool isConnected = true;
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                cout << "Yes" << '\n';
                isConnected = false;
                break;
            }
        }
        if (isConnected) {
            adj[x.first][x.second] = true;
            adj[x.second][x.first] = true;
        } else {
            return;
        }
    }
    cout << "No" << '\n';
}
