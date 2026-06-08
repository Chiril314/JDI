#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n), cnt(n);
    vector<vector<int>> g(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i]--;
        
        cnt[a[i]]++;
        g[a[i]].push_back(i);
    }

    queue<int> q;
    for(int i = 0; i < n; i++)
        if(cnt[i] == 0)
            q.push(i);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        int v = a[u];
        cnt[v]--;

        if(cnt[v] == 0)
            q.push(v);
    }

    vector<int> cycleId(n, -1), distToCycle(n, -1), vis(n, 0), cycleLen;
    int c = 0;
    for(int i = 0; i < n; i++){
        if(cnt[i] > 0 && !vis[i]){
            vector<int> cyc;
            int u = i;

            while(!vis[u]){
                vis[u] = 1;
                cyc.push_back(u);
                u = a[u];
            }

            int len = (int)cyc.size();
            cycleLen.push_back(len);

            for(int j = 0; j < len; j++){
                int node = cyc[j];
                cycleId[node] = c;
                distToCycle[node] = 0;
            }

            c++;
        }
    }

    queue<int> bfs;
    for(int i = 0; i < n; i++)
        if(distToCycle[i] == 0)
            bfs.push(i);

    while(!bfs.empty()){
        int u = bfs.front();
        bfs.pop();

        for(int v : g[u]){
            if(distToCycle[v] != -1)
                continue;

            distToCycle[v] = distToCycle[u] + 1;
            cycleId[v] = cycleId[u];
            bfs.push(v);
        }
    }

    for(int i = 0; i < n; i++)
        cout << distToCycle[i] + cycleLen[cycleId[i]] << ' ';

    return 0;
}