#include <iostream>
#include <vector>

using namespace std;

long long n, timer = 0;
vector<long long> values, pathSum, tin, tout, segTree;
vector<vector<long long>> adj;

long long query(long long ind, long long l, long long r, long long pos){
    if(l == r)
        return segTree[ind];

    long long m = l + (r - l) / 2;
    if(pos <= m)
        return segTree[ind] + query(2 * ind + 1, l, m, pos);
    else
        return segTree[ind] + query(2 * ind + 2, m + 1, r, pos);
}

void update(long long ind, long long l, long long r, long long cl, long long cr, long long diff){
    if(r < cl || cr < l)
        return;

    if(cl <= l && r <= cr){
        segTree[ind] += diff;
        return;
    }

    long long m = l + (r - l) / 2;
    update(2 * ind + 1, l, m, cl, cr, diff);
    update(2 * ind + 2, m + 1, r, cl, cr, diff);
}

void dfs(long long u, long long parent, long long sum){
    sum += values[u];

    tin[u] = timer;
    pathSum[timer] = sum;
    
    timer++;
    for(long long v : adj[u])
        if(v != parent) 
            dfs(v, u, sum);

    tout[u] = timer - 1;
}

void build(long long ind, long long l, long long r){
    if(l == r){
        segTree[ind] = pathSum[l];
        return;
    }

    long long m = l + (r - l) / 2;
    build(2 * ind + 1, l, m);
    build(2 * ind + 2, m + 1, r);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long q;
    cin >> n >> q;

    values.resize(n);
    for(long long i = 0; i < n; i++)
        cin >> values[i];

    adj.resize(n);
    for(long long i = 0; i < n - 1; i++){
        long long v, u;
        cin >> v >> u;

        v--;
        u--;

        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    tin.resize(n);
    tout.resize(n);

    pathSum.resize(n);
    dfs(0, -1, 0);

    segTree.resize(4 * n);
    build(0, 0, n - 1);

    while(q--){
        long long type, s;
        cin >> type >> s;

        s--;
        if(type == 1){
            long long x;
            cin >> x;

            long long diff = x - values[s];
            values[s] = x;
            update(0, 0, n - 1, tin[s], tout[s], diff);
        } else
            cout << query(0, 0, n - 1, tin[s]) << "\n";
    }

    return 0;
}