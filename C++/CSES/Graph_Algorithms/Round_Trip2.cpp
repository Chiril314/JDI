#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> a;
vector<int> state, parent, ans;

bool dfs(int u){
    state[u] = 1;
    for(int v : a[u]){
        if(state[v] == 0){
            parent[v] = u;
            if(dfs(v))
                return true;
        } else if(state[v] == 1){
            ans.push_back(v);

            int curr = u;
            while(curr != v){
                ans.push_back(curr);
                curr = parent[curr];
            }

            ans.push_back(v);
            reverse(ans.begin(), ans.end());

            return true;
        }
    }

    state[u] = 2;

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
    }

    state.assign(n, 0);
    parent.assign(n, -1);

    for(int i = 0; i < n; i++)
        if(state[i] == 0)
            if(dfs(i)){
                cout << ans.size() << "\n";
                for(int x : ans)
                    cout << x + 1 << ' ';

                return 0;
            }

    cout << "IMPOSSIBLE";

    return 0;
}