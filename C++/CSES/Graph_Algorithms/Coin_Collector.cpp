#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;

vector<vector<int>> g, rg, dag;
vector<long long> coins, compCoins, dp;
vector<int> comp, order;
vector<bool> vis;

void dfs1(int u){
    vis[u] = true;
    for(int v : g[u])
        if(!vis[v])
            dfs1(v);

    order.push_back(u);
}

void dfs2(int u, int c){
    comp[u] = c;
    compCoins[c] += coins[u];

    for(int v : rg[u])
        if(comp[v] == -1)
            dfs2(v, c);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;

    coins.resize(n);
    for(int i = 0; i < n; i++)
        cin >> coins[i];

    g.resize(n);
    rg.resize(n);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        g[u].push_back(v);
        rg[v].push_back(u);
    }

    vis.resize(n);
    for(int i = 0; i < n; i++)
        if(!vis[i])
            dfs1(i);

    comp.resize(n, -1);
    compCoins.resize(n);
    reverse(order.begin(), order.end());

    int comps = 0;
    for(int u : order)
        if(comp[u] == -1){
            dfs2(u, comps);
            comps++;
        }

    dag.resize(comps);
    vector<int> cnt(comps, 0);
    for(int u = 0; u < n; u++)
        for(int v : g[u]){
            int a = comp[u], b = comp[v];
            if(a != b){
                dag[a].push_back(b);
                cnt[b]++;
            }
        }

    queue<int> q;
    dp.resize(comps);
    for(int i = 0; i < comps; i++){
        dp[i] = compCoins[i];
        if(cnt[i] == 0)
            q.push(i);
    }

    while(!q.empty()){
        int u = q.front();
        q.pop();

        for(int v : dag[u]){
            dp[v] = max(dp[v], dp[u] + compCoins[v]);

            cnt[v]--;
            if(cnt[v] == 0)
                q.push(v);
        }
    }

    long long ans = 0;
    for(int i = 0; i < comps; i++)
        ans = max(ans, dp[i]);

    cout << ans;

    return 0;
}