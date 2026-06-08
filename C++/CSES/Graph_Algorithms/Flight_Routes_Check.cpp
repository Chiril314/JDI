#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n), rev(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        a[u].push_back(v);
        rev[v].push_back(u);
    }
    
    queue<int> q1;
    q1.push(0);
    
    vector<bool> vis1(n);
    while(!q1.empty()){  
        int u = q1.front();
        q1.pop();

        for(int v : a[u])
            if(!vis1[v]){
                vis1[v] = true;
                q1.push(v);
            }
    }

    for(int i = 1; i < n; i++)
        if(!vis1[i]){
            cout << "NO\n" << 1 << ' ' << i + 1;
            return 0;
        }

    queue<int> q2;
    q2.push(0);
        
    vector<bool> vis2(n);
    while(!q2.empty()){  
        int u = q2.front();
        q2.pop();

        for(int v : rev[u])
            if(!vis2[v]){
                vis2[v] = true;
                q2.push(v);
            }
    }

    for(int i = 1; i < n; i++)
        if(!vis2[i]){
            cout << "NO\n" << i + 1 << ' ' << 1;
            return 0;
        }

    cout << "YES";

    return 0;
}