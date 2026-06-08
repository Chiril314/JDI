#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> a, rev;
vector<bool> vis;
vector<int> order, c;

void dfs1(int u){
    vis[u] = true;
    for(int v : a[u])
        if(!vis[v]) 
            dfs1(v);
    
    order.push_back(u);
}

void dfs2(int u, int id) {
    c[u] = id;
    for(int v : rev[u])
        if(c[v] == -1) 
            dfs2(v, id);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    a.resize(2 * m);
    rev.resize(2 * m);
    for(int i = 0; i < n; i++){
        char s1, s2;
        int u, v;
        cin >> s1 >> u >> s2 >> v;

        u--;
        v--;

        int U, notU;
        if(s1 == '+'){
            U = 2 * u;
            notU = 2 * u + 1;
        } else{
            U = 2 * u + 1;
            notU = 2 * u;
        }

        int V, notV;
        if(s2 == '+'){
            V = 2 * v;
            notV = 2 * v + 1;
        } else{
            V = 2 * v + 1;
            notV = 2 * v;
        }

        a[notU].push_back(V);
        a[notV].push_back(U);

        rev[V].push_back(notU);
        rev[U].push_back(notV);
    }

    vis.resize(2 * m);
    for(int i = 0; i < 2 * m; i++)
        if(!vis[i]) 
            dfs1(i);

    c.resize(2 * m, -1);
    reverse(order.begin(), order.end());

    int id = 0;
    for(int u : order)
        if(c[u] == -1){
            dfs2(u, id);
            id++;
        }

    vector<char> ans(m);
    for(int i = 0; i < m; i++){
        int pos = 2 * i, neg = 2 * i + 1;
        if(c[pos] == c[neg]){
            cout << "IMPOSSIBLE\n";
            return 0;
        }

        if(c[pos] > c[neg]) 
            ans[i] = '+';
        else 
            ans[i] = '-';
    }

    for(int i = 0; i < m; i++)
        cout << ans[i] << ' ';

    return 0;
}