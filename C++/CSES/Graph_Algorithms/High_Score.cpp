#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> rev(n);
    vector<int> eu(m), ev(m);
    vector<long long> ew(m);
    for(int i = 0; i < m; i++){
        int u, v;
        long long w;
        cin >> u >> v >> w;

        u--; v--;

        eu[i] = u;
        ev[i] = v;
        ew[i] = w;

        rev[v].push_back(u);
    }
    
    vector<bool> canReach(n, false);
    queue<int> q;

    canReach[n - 1] = 1;
    q.push(n - 1);

    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i = 0; i < rev[x].size(); i++){
            int p = rev[x][i];
            if(!canReach[p]){
                canReach[p] = true;
                q.push(p);
            }
        }
    }

    const long long NEG_INF = -1000000000000000000LL;
    vector<long long> dist(n, NEG_INF);

    dist[0] = 0;
    bool flag = true;
    for(int k = 0; k < n - 1 && flag; k++){
        flag = false;
        for(int i = 0; i < m; i++){
            int u = eu[i], v = ev[i];
            long long w = ew[i];

            if(dist[u] == NEG_INF)
                continue;

            long long nd = dist[u] + w;
            if(nd > dist[v]){
                dist[v] = nd;
                flag = true;
            }
        }
    }

    for(int i = 0; i < m; i++){
        int u = eu[i], v = ev[i];
        long long w = ew[i];

        if(dist[u] == NEG_INF) continue;

        long long nd = dist[u] + w;
        if(nd > dist[v] && canReach[v]){
            cout << -1;
            return 0;
        }
    }

    cout << dist[n - 1];

    return 0;
}