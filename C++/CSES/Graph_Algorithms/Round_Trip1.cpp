#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> a;
vector<int> parent, ans;
vector<bool> vis;

bool dfs(int u, int p){
    vis[u] = true;
    parent[u] = p;

    for(int v : a[u]){
        if(v == p)
            continue;

        if(!vis[v]){
            if(dfs(v, u))
                return true;
        } else{
            ans.push_back(v);
            int curr = u;
            while(curr != v){
                ans.push_back(curr);
                curr = parent[curr];
            }

            ans.push_back(v);

            return true;
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    a.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    vis.resize(n);
    parent.resize(n);

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            if(dfs(i, -1)){
                cout << ans.size() << "\n";
                for(int x : ans)
                    cout << x + 1 << ' ';
                
                return 0;
            }
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}