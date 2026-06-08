#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<pair<int, long long>>> a(n);
    for(int i = 0; i < m; i++){
        int u, v;
        long long w;
        cin >> u >> v >> w;

        u--;
        v--;

        a[u].push_back({v, w});
    }

    priority_queue<pair<long long, int>, vector<pair<long long, int>>, greater<pair<long long, int>>> pq;
    vector<int> cnt(n, 0);
    pq.push({0, 0});

    vector<long long> ans;
    while(!pq.empty()){
        long long d = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(cnt[u] >= k)
            continue;

        cnt[u]++;
        if(u == n - 1)
            ans.push_back(d);

        for(pair<int,  long long> v : a[u])
            if(cnt[v.first] < k)
                pq.push({d + v.second, v.first});
    }

    for(long long x : ans)
        cout << x << ' ';

    return 0;
}