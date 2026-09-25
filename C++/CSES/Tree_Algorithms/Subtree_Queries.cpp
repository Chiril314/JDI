#include <iostream>
#include <vector>

using namespace std;

long long n, timer = -1;
vector<long long> values, tin, tout, segTree, pos, flat;
vector<vector<long long>> adj;

long long query(long long ind, long long l, long long r, long long cl, long long cr){
    if(l >= cl && r <= cr)
        return segTree[ind];

    if(r < cl || l > cr)
        return 0LL;

    long long m = l + (r - l) / 2;
    long long left = query(ind * 2 + 1, l, m, cl, cr);
    long long right = query(ind * 2 + 2, m + 1, r, cl, cr);

    return left + right;
}

void update(long long ind, long long val){
    segTree[ind] += val;
    if(ind == 0)
        return;

    update((ind - 1) / 2, val);
}

void buildSegTree(long long ind, long long l, long long r){
    if(l == r){
        segTree[ind] = values[flat[l]];
        pos[flat[l]] = ind;
        return;
    }

    long long m = l + (r - l) / 2;
    buildSegTree(2 * ind + 1, l, m);
    buildSegTree(2 * ind + 2, m + 1, r);

    segTree[ind] = segTree[2 * ind + 1] + segTree[2 * ind + 2];
}

void dfs(long long v, long long parent){
    tin[v] = ++timer;

    flat[tin[v]] = v;
    for(long long u : adj[v]){
        if(u == parent)
            continue;

        dfs(u, v);
    }

    tout[v] = timer;
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
    pos.resize(n);
    flat.resize(n);
    dfs(0, -1);

    segTree.resize(4 * n);
    buildSegTree(0, 0, n - 1);

    while(q--){
        long long type;
        cin >> type;

        if(type == 1){
            long long s, x, diff;
            cin >> s >> x;

            s--;

            diff = x - segTree[pos[s]];
            update(pos[s], diff);
        } else{
            long long s;
            cin >> s;

            s--;

            cout << query(0, 0, n - 1, tin[s], tout[s]) << "\n";
        }
    }

    return 0;
}