#include <iostream>
#include <vector>
#include <algorithm>
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
 
    queue<int> q1;
    vector<bool> seen(n);
 
    q1.push(k);
    seen[k] = true;
 
    while(!q1.empty()){
        int v = q1.front();
        q1.pop();
 
        k = v;
        for(int u : a[v])
            if(!seen[u]){
                seen[u] = true;
                q1.push(u);
            }
    }
 
    vector<pair<int, int>> dist(n);
    fill(seen.begin(), seen.end(), false);
 
    queue<pair<int, int>> q2;
    seen[k] = true;
 
    q2.push({k, 0});
    while(!q2.empty()){
        int v = q2.front().first, w = q2.front().second;
        q2.pop();
        
        k = v;
        for(int u : a[v])
            if(!seen[u]){
                seen[u] = true;
                q2.push({u, w + 1});
                dist[u].first = w + 1;
            }
    }
 
    fill(seen.begin(), seen.end(), false);
    seen[k] = true;
 
    q2.push({k, 0});
    while(!q2.empty()){
        int v = q2.front().first, w = q2.front().second;
        q2.pop();
 
        for(int u : a[v])
            if(!seen[u]){
                seen[u] = true;
                q2.push({u, w + 1});
                dist[u].second = w + 1;
            }
    }
 
    for(int i = 0; i < n; i++)
        cout << max(dist[i].first, dist[i].second) << ' ';
 
    return 0;
}