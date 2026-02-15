#include <iostream>
#include <climits>
#include <vector>
#include <set>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> v(n);

    for(int i = 0; i < m; i++){
        int a, b, w;
        cin >> a >> b >> w;
 
        a--;
        b--;

        v[a].push_back({b, w});
        v[b].push_back({a, w});
    }

    vector<long long> dist(n, LLONG_MAX);
    vector<int> parent(n, -1);

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;

    dist[0] = 0;
    pq.push({0, 0});

    while(!pq.empty()){
        pair<long long, int> cr = pq.top();
        pq.pop();

        long long d = cr.first;
        int u = cr.second;
        if(d != dist[u])
            continue;
        
        for(int i = 0; i < v[u].size(); i++){
            int to = v[u][i].first, wgt = v[u][i].second;

            long long nd = d + wgt;
            if(nd < dist[to]){
                dist[to] = nd;
                parent[to] = u;
                pq.push({nd, to});
            }
        }
    }

    if(dist[n - 1] == LLONG_MAX){
        cout << -1;
        return 0;
    }

    vector<int> path;
    int c = n - 1;
    while(c != -1){
        path.push_back(c + 1);
        c = parent[c];
    }

    reverse(path.begin(), path.end());
    for(int i = 0; i < path.size(); i++)
        cout << path[i] << ' ';

    return 0;
}