#include <bits/stdc++.h>
using namespace std;

#define MAXN 202020

int n, m;
vector<vector<int>>adj(MAXN);
vector<bool>visited(MAXN, false);
vector<int>bridge;

void dfs (int node) {
  visited[node] = true;
  for (auto child : adj[node]) {
    if (visited[child] == false) {
     dfs(child);
    }
  }
}

int main() {
    cin >> n >> m;
    for (int i = 0 ; i < m; i++) {
      int u, v;
      cin >> u >> v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    for (int i = 1; i <= n; i++) {
      if (visited[i] == false) {
        bridge.push_back(i);
       dfs(i);
      }
    }
    cout << bridge.size() - 1 << endl;
    for (int i = 0; i < bridge.size() - 1; i++) {
      cout<<bridge[i] << " " << bridge[i + 1] << endl;
    }
    return 0;
}