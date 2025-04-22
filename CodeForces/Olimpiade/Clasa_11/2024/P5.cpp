#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    vector<bool> hasEdge(n * 100005, false); 

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        if(u > v) 
            swap(u, v);

        adj[u].push_back(v);
        adj[v].push_back(u);
        hasEdge[u * n + v] = true;
    }

    int ans = 0;
    for(int u = 1; u <= n; u++){
        vector<int> neighbors;

        int len = adj[u].size();
        for(int i = 0; i < len; i++){
            int v = adj[u][i];
            if(v > u)
                neighbors.push_back(v);
        }

        sort(neighbors.begin(), neighbors.end());

        int sz = neighbors.size();
        for(int i = 0; i < sz; i++){
            for(int j = i + 1; j < sz; j++){
                int a = neighbors[i], b = neighbors[j];
                if(a > b) 
                    swap(a, b);

                if(!hasEdge[a * n + b]){
                    hasEdge[a * n + b] = true;
                    ans++;
                    adj[a].push_back(b);
                    adj[b].push_back(a);
                }
            }
        }
    }

    cout << m + ans;

    return 0;
}