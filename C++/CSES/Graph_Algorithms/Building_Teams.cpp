#include <iostream>
#include <vector>
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

    vector<bool> v(n, false);
    vector<int> d(n, 1e9);
    queue<int> q;
    for(int i = 0; i < n; i++){
        if(d[i] == 1e9){
            q.push(i);
            v[i] = true;
            d[i] = 0;

            while(!q.empty()){
                int u = q.front();
                q.pop();

                for(int j = 0; j < graph[u].size(); j++){
                    int w = graph[u][j];
                    if(!v[w] && d[u] + 1 < d[w]){
                        q.push(w);
                        d[w] = d[u] + 1;
                    }
                }

                v[u] = true;
            }
        }
    }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < graph[i].size(); j++){
            int w = graph[i][j];
            if(d[i] == d[w]){
                cout << "IMPOSSIBLE";
                return 0;
            }
        }

    for(int i = 0; i < n; i++)
        cout << (d[i] % 2) + 1 << ' ';

    return 0;
}