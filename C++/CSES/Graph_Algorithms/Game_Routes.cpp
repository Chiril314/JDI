#include <iostream>
#include <vector>
#include <queue>

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

    vector<int> ans(n);
    ans[0] = 1;

    for(int i = 0; i < n; i++){
        int u = c[i];
        for(int v : a[u])
            ans[v] = (ans[v] + ans[u]) % 1000000007;
    }

    cout << ans[n - 1];

    return 0;
}