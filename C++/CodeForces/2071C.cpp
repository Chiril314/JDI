#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int node, int parent, vector<vector<int>> &adj, vector<int> &dist, int d){
    dist[node] = d;
    for(int i = 0; i < adj[node].size(); i++){
        int nxt = adj[node][i];

        if(nxt != parent)
            dfs(nxt, node, adj, dist, d + 1);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        int n, st, en;
        cin >> n >> st >> en;

        vector<vector<int>> adj(n + 1);
        for(int i = 1; i < n; i++){
            int u, v;
            cin >> u >> v;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> dist(n + 1, -1);
        dfs(en, -1, adj, dist, 0);
        
        vector<pair<int, int>> nodes;
        for(int i = 1; i < n + 1; i++)
            nodes.push_back({dist[i], i});

        sort(nodes.begin(), nodes.end(), greater<>());
        
        vector<int> perm(n);
        for(int i = 0; i < n; i++)
            perm[i] = nodes[i].second;
        
        for(int i = 0; i < n; i++)
            cout << perm[i] << ' ';

        cout << endl;
    }

    return 0;
}