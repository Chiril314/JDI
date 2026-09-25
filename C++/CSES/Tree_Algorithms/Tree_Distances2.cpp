#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

long long n;
vector<long long> ans, subtree;
vector<vector<long long>> a;

void dfs1(long long v, long long parent, long long depth){
    subtree[v] = 1;
    ans[0] += depth;

    for(long long u : a[v]){
        if(u == parent)
            continue;
        dfs1(u, v, depth + 1);
        subtree[v] += subtree[u];
    }
}

void dfs2(long long v){
    for(long long u : a[v]){
        if(ans[u] != 0)
            continue;
        ans[u] = ans[v] + n - (2 * subtree[u]);
        dfs2(u); 
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    a.resize(n);

    for(long long i = 0; i < n - 1; i++){
        long long u, v;
        cin >> u >> v;

        u--;
        v--;

        a[u].push_back(v);
        a[v].push_back(u);
    }

    ans.resize(n);
    subtree.resize(n);

    dfs1(0, -1, 0);
    dfs2(0);

    for(long long i = 0 ; i < n; i++)
        cout << ans[i] << ' ';

    return 0;
} 