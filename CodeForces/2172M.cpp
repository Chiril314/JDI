#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> r(n);
    for(int i = 0; i < n; i++){
        cin >> r[i];
        r[i]--;
    }

    vector<vector<int>> g(n); 
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        g[u - 1].push_back(v - 1);
        g[v - 1].push_back(u - 1);
    }

    vector<int> dist(n, -1);
    dist[0] = 0;

    queue<int> q;
    q.push(0);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : g[u]){
            if(dist[v] == -1){
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }

    vector<int> ans(k, 0);
    for(int i = 0; i < n; i++)
        ans[r[i]] = max(ans[r[i]], dist[i]);

    for(int i = 0; i < k; i++)
        cout << ans[i] << ' ';

    return 0;
}