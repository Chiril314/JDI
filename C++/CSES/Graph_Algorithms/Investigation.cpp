#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> a(n);
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;

        u--;
        v--;

        a[u].push_back({v, w});
    }

    vector<long long> dist(n, 4e18);
    vector<int> ways(n, 0), mn(n, 1e9), mx(n, -1e9);

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> q;
    q.push({0, 0});

    dist[0] = 0;
    ways[0] = 1;
    mn[0] = 0;
    mx[0] = 0;

    while(!q.empty()){
        long long d = q.top().first;
        int u = q.top().second;
        q.pop();

        if(d > dist[u])
            continue;

        for(pair<int, int> v : a[u]){
            long long nd = d + v.second;
            if(nd < dist[v.first]){
                dist[v.first] = nd;
                ways[v.first] = ways[u];
                mn[v.first] = mn[u] + 1;
                mx[v.first] = mx[u] + 1;

                q.push({dist[v.first], v.first});
            } else if (nd == dist[v.first]) {
                ways[v.first] += ways[u];
                ways[v.first] %= 1000000007;
                mn[v.first] = min(mn[v.first], mn[u] + 1);
                mx[v.first] = max(mx[v.first], mx[u] + 1);
            }
        }
    }

    cout << dist[n - 1] << ' ' << ways[n - 1] << ' ' << mn[n - 1] << ' ' << mx[n - 1];

    return 0;
}