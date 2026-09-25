#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> subtreeSize;
vector<vector<int>> adj;

int dfs2(int u, int parent){
    for(int v : adj[u])
        if(v != parent)
            if(subtreeSize[v] > n/2)
                return dfs2(v, u);

    return u + 1;
}

void dfs1(int u, int parent){
    subtreeSize[u] = 1;
    for(int v : adj[u])
        if(v != parent){
            dfs1(v, u);
            subtreeSize[u] += subtreeSize[v];
        }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    adj.resize(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    subtreeSize.resize(n);
    dfs1(0, -1);
    cout << dfs2(0, -1);

    return 0;
}