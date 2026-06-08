#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int jump_node(int x, int k, vector<vector<int>>& up){
    for(int j = 0; j < 20; j++)
        if(k & (1 << j))
            x = up[x][j];

    return x;
}

bool on_cycle(int x, vector<int>& distToCycle){
    return distToCycle[x] == 0;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> to(n), cnt(n);
    vector<vector<int>> rev(n);

    for(int i = 0; i < n; i++){
        cin >> to[i];
        to[i]--;

        cnt[to[i]]++;
        rev[to[i]].push_back(i);
    }

    vector<vector<int>> up(n, vector<int> (20));
    for(int i = 0; i < n; i++)
        up[i][0] = to[i];

    for(int i = 1; i < 20; i++)
        for(int j = 0; j < n; j++)
            up[j][i] = up[up[j][i - 1]][i - 1];

    queue<int> q;
    for(int i = 0; i < n; i++)
        if(cnt[i] == 0)
            q.push(i);

    while(!q.empty()){
        int u = q.front();
        q.pop();

        int v = to[u];
        cnt[v]--;

        if(cnt[v] == 0)
            q.push(v);
    }

    vector<int> cycleId(n, -1), cyclePos(n, -1), distToCycle(n, -1);
    vector<int> entryCycleNode(n, -1), vis(n, 0), cycleLen;

    int c = 0;
    for(int i = 0; i < n; i++){
        if(cnt[i] > 0 && !vis[i]){
            vector<int> cyc;
            int u = i;

            while(!vis[u]){
                vis[u] = 1;
                cyc.push_back(u);
                u = to[u];
            }

            int len = (int)cyc.size();
            cycleLen.push_back(len);

            for(int j = 0; j < len; j++){
                int node = cyc[j];
                cycleId[node] = c;
                cyclePos[node] = j;
                distToCycle[node] = 0;
                entryCycleNode[node] = node;
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

        for(int v : rev[u]){
            if(distToCycle[v] != -1)
                continue;

            distToCycle[v] = distToCycle[u] + 1;
            cycleId[v] = cycleId[u];
            entryCycleNode[v] = entryCycleNode[u];
            bfs.push(v);
        }
    }

    while(t--){
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        if(cycleId[a] != cycleId[b]){
            cout << -1 << "\n";
            continue;
        }


        if(on_cycle(a, distToCycle) && !on_cycle(b, distToCycle)){
            cout << -1 << "\n";
            continue;
        }

        if(on_cycle(a, distToCycle) && on_cycle(b, distToCycle)){
            int len = cycleLen[cycleId[a]];
            int ans = (cyclePos[b] - cyclePos[a] + len) % len;
            cout << ans << "\n";
            continue;
        }

        if(!on_cycle(a, distToCycle) && on_cycle(b, distToCycle)){
            int c = entryCycleNode[a];
            int len = cycleLen[cycleId[a]];
            int around = (cyclePos[b] - cyclePos[c] + len) % len;
            cout << distToCycle[a] + around << "\n";
            continue;
        }

        if(distToCycle[a] < distToCycle[b]){
            cout << -1 << "\n";
            continue;
        }

        int diff = distToCycle[a] - distToCycle[b];
        int x = jump_node(a, diff, up);

        if(x == b)
            cout << diff << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}