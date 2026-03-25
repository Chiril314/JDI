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

    vector<vector<pair<int, long long>>> a(n);
    for(int i = 0; i < m; i++){
        int u, v;
        long long w;

        cin >> u >> v >> w;

        u--;
        v--;

        a[u].push_back({v, w});
    }

    vector<vector<long long>> dist(n, vector<long long> (2, 1e18));

    dist[0][0] = 0;

    priority_queue<pair<long long, pair<int, int>>, vector<pair<long long, pair<int, int>>>, greater<pair<long long, pair<int, int>>>> q;
    q.push({0LL, {0, 0}});

    while(!q.empty()){
        long long d = q.top().first;
        int u = q.top().second.first, used = q.top().second.second;
        q.pop();
    
        if(d != dist[u][used])
            continue;
        
        for(int i = 0; i < a[u].size(); i++){
            int v = a[u][i].first;
            long long w = a[u][i].second;

            if(d + w < dist[v][used]){
                dist[v][used] = d + w;
                q.push(make_pair(dist[v][used], make_pair(v, used)));
            }

            if(used == 0){
                long long nd = d + (w / 2);
                if(nd < dist[v][1]){
                    dist[v][1] = nd;
                    q.push({nd, {v, 1}});
                }
            }
        }
    }

    cout << dist[n - 1][1];

    return 0;
}