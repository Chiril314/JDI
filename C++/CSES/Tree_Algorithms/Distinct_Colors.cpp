#include <iostream>
#include <vector>
#include <set>

using namespace std;

int n;
vector<int> color, ans;
vector<set<int>> s;
vector<vector<int>> adj;

void dfs(int u, int parent){
    s[u].insert(color[u]);
    for(int v : adj[u])
        if(v != parent){
            dfs(v, u);
            if(s[u].size() < s[v].size())
                swap(s[u], s[v]);

            for(int c : s[v])
                s[u].insert(c);
        }

    ans[u] = s[u].size();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    color.resize(n);
    for(int i = 0; i < n; i++)
        cin >> color[i];

    adj.resize(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    ans.resize(n);
    s.resize(n);

    dfs(0, -1);
    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';

    return 0;
}