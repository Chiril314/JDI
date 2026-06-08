#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int cnt, mx = 1;
int find(int x, vector<int>& parent){
    if(parent[x] == x)
        return x;

    return parent[x] = find(parent[x], parent);
}

void merge(int a, int b, vector<int> &parent, vector<int> &sz){
    a = find(a, parent);
    b = find(b, parent);

    if(a == b)
        return;

    if(sz[a] < sz[b])
        swap(a, b);

    parent[b] = a;
    sz[a] += sz[b];
    
    mx = max(mx, sz[a]);
    cnt--;

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    vector<int> parent(n), sz(n, 1);
    for(int i = 0; i < n; i++)
        parent[i] = i;

    cnt = n;
    while(m--){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        merge(u, v, parent, sz);
        cout << cnt << ' ' << mx << "\n";
    }

    return 0;
}