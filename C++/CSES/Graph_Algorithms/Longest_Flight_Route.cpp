#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> cnt(n);
    vector<vector<int>> a(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        cnt[v]++;
        a[u].push_back(v);
    }

    queue<int> q;
    for(int i = 0; i < n; i++)  
        if(cnt[i] == 0)
            q.push(i);

    vector<int> c;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        c.push_back(u);
        for(int v : a[u]){
            cnt[v]--;
            if(cnt[v] == 0)
                q.push(v);
        }
    }

    vector<int> dp(n, -1e9);
    dp[0] = 1;

    vector<int> parent(n, -1);
    for(int u : c){
        if(dp[u] == -1e9)
            continue;

        for(int v : a[u])
            if(dp[u] + 1 > dp[v]){
                dp[v] = dp[u] + 1;
                parent[v] = u;
            }
    }

    if(dp[n - 1] == -1e9){
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> ans;
    for(int x = n - 1; x != -1; x = parent[x])
        ans.push_back(x);

    reverse(ans.begin(), ans.end());

    cout << ans.size() << "\n";
    for(int x : ans)
        cout << x + 1 << ' ';

    return 0;
}