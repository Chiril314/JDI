#include <iostream>
#include <vector>
#include <set>
#include <queue>

using namespace std;

set<pair<int, int>> connectSegments(const set<pair<int, int>>& a) {
    set<pair<int, int>> ans;
    if(a.empty()) 
        return ans;

    auto it = a.begin();
    int l = it->first, r = it->second;

    it++;
    for(; it != a.end(); it++){
        if(it->first <= r + 1){
            r = max(r, it->second);
        } else{
            ans.insert({l, r});
            l = it->first;
            r = it->second;
        }
    }

    ans.insert({l, r});
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, pair<int, int>>>> g(n);
    vector<set<pair<int, int>>> ans(n);
    for(int i = 0; i < n - 1; i++){
        int a, b, l, r;
        cin >> a >> b >> l >> r;

        a--;
        b--;

        g[a].push_back({b, {l, r}});
        g[b].push_back({a, {l, r}});
    }

    queue<int> q;
    q.push(0);

    vector<bool> vis(n);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        vis[u] = true;
        for(int i = 0; i < g[u].size(); i++){
            int v = g[u][i].first;
            if(!vis[v]){
                ans[v] = ans[u];
                ans[v].insert(g[u][i].second);

                ans[v] = connectSegments(ans[v]);
                q.push(v);
            }
        }
    }

    for(int i = 1; i < n; i++){
        int a = 0;
        for(auto it = ans[i].begin(); it != ans[i].end(); it++){
            //cout << it->first << "-" << it->second << ",  ";
            a += (it->second - it->first + 1);
        }
        cout << a << endl;
    }

    return 0;
}