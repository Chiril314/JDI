#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    vector<int> parent(n); 
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;

        if(p == -1)
            parent[i] = -1;
        else
            parent[i] = p - 1;
    }

    vector<int> depth(n, 0);
    for(int i = 0; i < n; i++){
        if(depth[i] != 0){
            ans = max(ans, depth[i]);
            continue;
        }

        int v = i;
        vector<int> chain;
        while(v != -1 && depth[v] == 0){
            chain.push_back(v);
            v = parent[v];
        }

        int b;
        if(v == -1)
            b = 0;
        else
            b = depth[v];
        
        for(int j = int(chain.size()) - 1; j >= 0; j--){
            b++;
            depth[chain[j]] = b;
        }

        ans = max(ans, b);
    }

    cout << ans;

    return 0;
}