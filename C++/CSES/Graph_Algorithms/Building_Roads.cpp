#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--; 
        v--;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    vector<bool> vis(n);
    vector<int> ans;

    for(int i = 0; i < n; i++)
        if(!vis[i]){
            ans.push_back(i);

            queue<int> q;
            q.push(i);

            vis[i] = true;
            while(!q.empty()){
                int u = q.front();
                q.pop();

                for(int v : a[u])
                    if(!vis[v]){
                        vis[v] = true;
                        q.push(v);
                    }
            }
        }

    cout << ans.size() - 1 << "\n";
    for(int i = 1; i < ans.size(); i++)
        cout << ans[0] + 1 << ' ' << ans[i] + 1 << "\n";

    return 0;
}