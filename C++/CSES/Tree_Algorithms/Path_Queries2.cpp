#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, timer = 0;
vector<int> values, segTree, parent, depth, sz, heavy, head, pos, flat;
vector<vector<int>> adj;

int query(int l, int r){
    l += n;
    r += n;

    int ans = 0;
    while(l <= r){
        if(l % 2 == 1)
            ans = max(ans, segTree[l++]);

        if(r % 2 == 0)
            ans = max(ans, segTree[r--]);

        l /= 2;
        r /= 2;
    }

    return ans;
}

int path_query(int a, int b){
    int ans = 0;

    while(head[a] != head[b]){
        if(depth[head[a]] < depth[head[b]])
            swap(a, b);

        ans = max(ans, query(pos[head[a]], pos[a]));
        a = parent[head[a]];
    }

    if(depth[a] > depth[b])
        swap(a, b);

    ans = max(ans, query(pos[a], pos[b]));

    return ans;
}

void update(int p, int x){
    p += n;
    segTree[p] = x;

    for(p /= 2; p > 0; p /= 2)
        segTree[p] = max(segTree[2 * p], segTree[2 * p + 1]);
}

void build(){
    for(int i = 0; i < n; i++)
        segTree[n + i] = flat[i];

    for(int i = n - 1; i > 0; i--)
        segTree[i] = max(segTree[2 * i], segTree[2 * i + 1]);
}

void dfs2(int u, int h){
    head[u] = h;

    pos[u] = timer++;
    if(heavy[u] != -1)
        dfs2(heavy[u], h);

    for(int v : adj[u])
        if(v != parent[u] && v != heavy[u])
            dfs2(v, v);
}

void dfs1(int u, int p){
    sz[u] = 1;
    parent[u] = p;

    int biggest = 0;
    for(int v : adj[u]){
        if(v != p){
            depth[v] = depth[u] + 1;
            dfs1(v, u);

            sz[u] += sz[v];
            if(sz[v] > biggest){
                biggest = sz[v];
                heavy[u] = v;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> n >> q;

    values.resize(n);
    for(int i = 0; i < n; i++)
        cin >> values[i];

    adj.resize(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;

        u--;
        v--;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    sz.resize(n);
    pos.resize(n);
    
    head.resize(n);
    depth.resize(n);

    parent.resize(n);
    heavy.resize(n, -1);

    dfs1(0, -1);
    dfs2(0, 0);

    flat.resize(n);
    for(int i = 0; i < n; i++)
        flat[pos[i]] = values[i];

    segTree.resize(2 * n);
    build();

    while(q--){
        int type, a, b;
        cin >> type >> a >> b;

        a--;
        if(type == 1)
            update(pos[a], b);
        else{
            b--;
            cout << path_query(a, b) << " ";
        }
    }

    return 0;
}