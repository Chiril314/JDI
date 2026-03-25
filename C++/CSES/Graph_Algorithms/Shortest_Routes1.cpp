#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

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

    vector<long long> dist(n, 2e18);

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    pq.push({0, 0});
    dist[0] = 0;

    while(!pq.empty()){
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(d != dist[u]) 
            continue;

        for(int i = 0; i < a[u].size(); i++){
            int v = a[u][i].first, w = a[u][i].second;
            long long nd = d + w;
            if(nd < dist[v]){
                dist[v] = nd;
                pq.push({nd, v});
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << dist[i] << ' ';

    return 0;
}