#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n);
    for(int i = 0; i < m; i++){
        int u, w;
        cin >> u >> w;

        u--; 
        w--;

        graph[u].push_back(w);
        graph[w].push_back(u);
    }

    vector<bool> v(n, 0);
    vector<int> from(n, -1), d(n, 1e9);

    queue<int> q;
    q.push(0);

    v[0] = 1;
    d[0] = 0;
    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int i = 0; i < graph[u].size(); i++){
            int w = graph[u][i];
            if(!v[w] && d[u] + 1 < d[w]){
                from[w] = u;
                q.push(w);
                d[w] = d[u] + 1;
            }
        }

        v[u] = true;
    }

    if(from[n - 1] == -1){
        cout << "IMPOSSIBLE";
        return 0;
    }

    vector<int> ans;
    for(int i = n - 1; i != -1; i = from[i])
        ans.push_back(i + 1);

    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << ' ';

    return 0;
}