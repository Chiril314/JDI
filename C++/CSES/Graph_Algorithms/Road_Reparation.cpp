#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_set(int x, vector<int>& parent){
    if(parent[x] == x)
        return x;

    return parent[x] = find_set(parent[x], parent);
}

bool unite(int a, int b, vector<int>& parent, vector<int>& sz){
    a = find_set(a, parent);
    b = find_set(b, parent);

    if(a == b)
        return false;

    if(sz[a] < sz[b])
        swap(a, b);

    parent[b] = a;
    sz[a] += sz[b];

    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pair<int, pair<int, int>>> edges(m);
    for(int i = 0; i < m; i++){
        cin >> edges[i].second.first >> edges[i].second.second >> edges[i].first;
    
        edges[i].second.first--;
        edges[i].second.second--;
    }

    sort(edges.begin(), edges.end());

    vector<int> parent(n), sz(n, 1);
    for(int i = 0; i < n; i++)
        parent[i] = i;

    int cnt = 0;
    long long ans = 0;

    for(int i = 0; i < m; i++){
        int u = edges[i].second.first, v = edges[i].second.second, w = edges[i].first;
        if(unite(u, v, parent, sz)){
            ans += w;
            cnt++;
        }
    }

    if(cnt != n - 1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    cout << ans;

    return 0;
}