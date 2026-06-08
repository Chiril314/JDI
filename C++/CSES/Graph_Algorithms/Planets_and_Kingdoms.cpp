#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<vector<int>> a, rev;
vector<int> order, ans;
vector<bool> vis;

void dfs1(int u){
    vis[u] = true;
    for(int v : a[u])
    if(!vis[v])
    dfs1(v);

order.push_back(u);
}

void dfs2(int u, int id){
    ans[u] = id;
    for(int v : rev[u])
        if(ans[v] == 0)
            dfs2(v, id);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    a.resize(n);
    rev.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        a[u].push_back(v);
        rev[v].push_back(u);
    }

    vis.resize(n);
    for(int i = 0; i < n; i++)
        if(!vis[i])
            dfs1(i);

    ans.resize(n);
    reverse(order.begin(), order.end());

    int id = 0;
    for(int u : order)
        if(ans[u] == 0){
            id++;
            dfs2(u, id);
        }

    cout << id << "\n";
    for(int i = 0; i < n; i++)  
        cout << ans[i] << ' ';

    return 0;
}