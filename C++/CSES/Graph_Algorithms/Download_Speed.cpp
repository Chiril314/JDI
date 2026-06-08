#include <iostream>

using namespace std;

int n, m;
vector<vector<pair<int, int>>> a;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
         
    a.resize(n);
    for(int i = 0; i < m; i++){
        int u, v, w;
        cin >> u >> v >> w;

        u--;
        v--;

        a[u].push_back({v, w});
    }

    queue<pair<int, int>> q;
    q.push({0, 1e9});

    while(!q.empty()){
        int u = q.front().first, mx = q.front().second;
        q.pop();


    }

    return 0;
}