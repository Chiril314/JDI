#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int LOG = 18;

int n, q;
vector<int> order;
vector<vector<int>> tree;
vector<vector<long long>> up;

void setOrder(int v){
    for(int u : tree[v]){
        order[u] = order[v] + 1;
        setOrder(u);
    }
}

void setup(){
    order.resize(n);
    tree.resize(n);

    up.resize(n);
    for(int i = 0; i < n; i++){
        up[i].resize(LOG);
        fill(up[i].begin(), up[i].end(), 0);
    }

    fill(order.begin(), order.end(), 1);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    
    setup();
    for(long long i = 1; i < n; i++){
        cin >> up[i][0];
        up[i][0]--;
        tree[up[i][0]].push_back(i);
    }

    for(long long i = 1; i < LOG; i++)
        for(long long j = 1; j < n; j++){
            if(up[j][i - 1] == 0)
                continue;
            up[j][i] = up[up[j][i - 1]][i - 1];
        }

    order[0] = 1;
    setOrder(0);

    while(q--){
        int a, b;
        cin >> a >> b;

        a--;
        b--;

        if(order[a] > order[b])
            swap(a, b);

        int jump = max(-1, (int)(log2(order[b] - order[a]))), diff = order[b] - order[a];
        if(jump != -1)
            for(int k = jump; k >= 0; k--)
                if(diff - pow(2, k) >= 0){
                    diff -= pow(2, k);
                    b = up[b][k];
                }

        if(a == b){
            cout << a + 1 << "\n";
            continue;
        }

        for(int k = LOG - 1; k >= 0; k--)
            if(up[a][k] != up[b][k]){
                a = up[a][k];
                b = up[b][k];
            }

        cout << up[a][0] + 1 << "\n";
    }

    return 0;
}