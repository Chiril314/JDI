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

    vector<int> ans;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        ans.push_back(u);
        for(int v : a[u]){
            cnt[v]--;
            if(cnt[v] == 0)
                q.push(v);
        }
    }

    if(ans.size() == n)
        for(int x : ans)
            cout << x + 1 << ' ';
    else
        cout << "IMPOSSIBLE";

    return 0;
}