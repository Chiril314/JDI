#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k = 0;
    cin >> n;

    vector<vector<int>> a(n);
    for(int i = 0; i < n - 1; i++){
        int v, u;
        cin >> v >> u;
        
        v--;
        u--;
        
        a[v].push_back(u);
        a[u].push_back(v);
    }
    
    queue<pair<int, int>> q;
    vector<int> seen(n);

    seen[0] = true;
    q.push({0, 0});

    while(!q.empty()){
        int v = q.front().first;
        q.pop();

        k = v;
        for(int u : a[v])
            if(!seen[u]){
                seen[u] = true;
                q.push({u, 0});
            }
    }

    fill(seen.begin(), seen.end(), false);
    seen[k] = true;

    q.push({k, 0});
    while(!q.empty()){
        int v = q.front().first, w = q.front().second;
        q.pop();

        k = w;
        for(int u : a[v]){
            if(!seen[u]){
                seen[u] = true; 
                q.push({u, w + 1});
            }
        }
    }

    cout << k;

    return 0;
}