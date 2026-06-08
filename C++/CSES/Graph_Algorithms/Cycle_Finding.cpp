#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<pair<int, int>, long long>> a(m);
    for (int i = 0; i < m; i++) {
        int u, v;
        long long w;
        cin >> u >> v >> w;
        
        u--;
        v--;
        
        a[i] = {{u, v}, w};
    }

    vector<long long> dist(n, 0);
    vector<int> parent(n, -1);

    int x = -1;
    for(int i = 0; i < n; i++){
        x = -1;
        for(int j = 0; j < m; j++){
            int u = a[j].first.first, v = a[j].first.second;
            long long w = a[j].second;

            if(dist[u] + w < dist[v]){
                dist[v] = dist[u] + w;
                parent[v] = u;
                x = v;
            }
        }
    }

    if(x == -1){
        cout << "NO\n";
        return 0;
    }

    for(int i = 0; i < n; i++)
        x = parent[x];
    
    vector<int> ans;
    ans.push_back(x);

    int cur = parent[x];
    while(cur != x){
        ans.push_back(cur);
        cur = parent[cur];
    }

    ans.push_back(x);
    reverse(ans.begin(), ans.end());

    cout << "YES\n";
    for(int v : ans)
        cout << v + 1 << ' ';

    return 0;
}