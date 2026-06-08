#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
vector<int> cnt, order;
vector<bool> used;
vector<vector<pair<int, int>>> a;

void dfs(int u){
    while(!a[u].empty()){
        pair<int, int> c = a[u].back();
        a[u].pop_back();

        int v = c.first, id = c.second;

        if(used[id])
            continue;

        used[id] = true;
        dfs(v);
    }

    order.push_back(u);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    a.resize(n);
    cnt.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        
        u--;
        v--;
        
        cnt[u]++;
        cnt[v]++;
        
        a[u].push_back({v, i});
        a[v].push_back({u, i});
    }
    
    used.resize(m);
    for(int i = 0; i < n; i++)
        if(cnt[i] % 2 == 1){
            cout << "IMPOSSIBLE";
            return 0;
        }

    dfs(0);
    if(order.size() != m + 1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    for(int x : order)
        cout << x + 1 << ' ';

    return 0;
}