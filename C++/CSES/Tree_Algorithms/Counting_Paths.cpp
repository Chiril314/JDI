#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int LOG = 18;

int n, q;
vector<int> depth, ans;
vector<vector<int>> adj, up;

void dfs(int v, int parent){
    for(int u : adj[v]){
        if(u == parent)
            continue;

        dfs(u, v);
        ans[v] += ans[u];
    }
}

void createTree(int v, int parent){
    for(int u : adj[v]){
        if(u == parent)
            continue;

        up[u][0] = v;
        depth[u] = depth[v] + 1;

        createTree(u, v);
    }
}

void init(){
    adj.resize(n);
    depth.resize(n);

    up.resize(n);
    ans.resize(n);

    for(int i = 0; i < n; i++){
        up[i].resize(LOG);
        fill(up[i].begin(), up[i].end(), -1);
    }

    fill(depth.begin(), depth.end(), 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    init();

    for(int i = 0; i < n - 1; i++){
        int v, u;
        cin >> v >> u;

        v--;
        u--;

        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    createTree(0, -1);
    for(int k = 1; k < LOG; k++)
        for(int i = 0; i < n; i++)
            if(up[i][k - 1] != -1)
                up[i][k] = up[up[i][k - 1]][k - 1];

    while(q--){
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        ans[a]++;
        ans[b]++;

        if(depth[a] > depth[b])
            swap(a, b);

        int diff = depth[b] - depth[a];
        for(int k = LOG - 1; k >= 0; k--)
            if(diff & (1 << k))
                b = up[b][k];

        if(a != b){
            for(int k = LOG - 1; k >= 0; k--)
                if(up[a][k] != up[b][k]){
                    a = up[a][k];
                    b = up[b][k];
                }
            
            a = up[a][0];
        }

        ans[a]--;
        if(up[a][0] != -1)
            ans[up[a][0]]--;
    }

    dfs(0, -1);
    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';

    return 0;
}