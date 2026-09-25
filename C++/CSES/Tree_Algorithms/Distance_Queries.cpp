#include <iostream>
#include <vector>
#include <cmath>
 
using namespace std;
 
const int LOG = 18;
 
int n, q;
vector<int> order;
vector<vector<int>> a, up;
 
void createTree(int v, int parent){
    for(int u : a[v]){
        if(u == parent)
            continue;
        
        up[u][0] = v;
        order[u] = order[v] + 1;

        createTree(u, v);
    }
}
 
void init(){
    a.resize(n);
    up.resize(n);

    order.resize(n);   
    for(int i = 0; i < n; i++){
        up[i].resize(LOG);
        fill(up[i].begin(), up[i].end(), -1);
    }
 
    fill(order.begin(), order.end(), 1);
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n >> q;
    init();
 
    for(int i = 0; i < n - 1; i++){
        int v, u;
        cin >> v >> u;
 
        v--;
        u--;
 
        a[v].push_back(u);
        a[u].push_back(v);
    }
 
    order[0] = 1;
    createTree(0, -1);
 
    for(int i = 1; i < LOG; i++)
        for(int j = 0; j < n; j++){
            if(up[j][i - 1] == -1)
                continue;
            up[j][i] = up[up[j][i - 1]][i - 1];
        }
 
    while(q--){
        int a, b, c, d;
        cin >> a >> b;
 
        a--;
        b--;
 
        c = a;
        d = b;
 
        if(order[a] > order[b])
            swap(a, b);
 
        int jump = max(-1, int(log2(order[b] - order[a]))), diff = order[b] - order[a];
        if(jump != -1)
            for(int k = jump; k >= 0; k--)
                if(diff - pow(2, k) >= 0){
                    diff -= pow(2, k);
                    b = up[b][k];
                }
 
        if(a != b)
            for(int k = LOG - 1; k >= 0; k--)
                if(up[a][k] != up[b][k]){
                    a = up[a][k];
                    b = up[b][k];
                }
        
        if(a != b)
            a = up[a][0];
 
        cout << order[c] + order[d] - (2 * order[a]) << "\n";
    }
 
    return 0;
}