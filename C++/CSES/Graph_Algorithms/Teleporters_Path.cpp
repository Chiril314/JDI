#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> order, outDeg, inDeg;
vector<vector<int>> g;

void dfs(int u){
    while(!g[u].empty()){
        int c = g[u].back();
        g[u].pop_back();

        dfs(c);
    }

    order.push_back(u);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    g.resize(n);
    inDeg.resize(n);
    outDeg.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        inDeg[v]++;
        outDeg[u]++;
        g[u].push_back(v);
    }

    for(int i = 0; i < n; i++){
        if(i == 0){
            if(outDeg[i] != inDeg[i] + 1){
                cout << "IMPOSSIBLE";
                return 0;
            }
        } else if(i == n - 1){
            if(inDeg[i] != outDeg[i] + 1){
                cout << "IMPOSSIBLE";
                return 0;
            }
        } else if(inDeg[i] != outDeg[i]){
            cout << "IMPOSSIBLE";
            return 0;
        }
    }

    dfs(0);
    if((int)order.size() != m + 1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    reverse(order.begin(), order.end());
    if(order.front() != 0 || order.back() != n - 1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    for(int x : order)
        cout << x + 1 << ' ';

    return 0;
}