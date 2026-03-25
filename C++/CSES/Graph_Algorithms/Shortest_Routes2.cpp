#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<long long>> dp(n, vector<long long> (n, 2e18));
    for(int i = 0; i < m; i++){
        long long u, v, w;
        cin >> u >> v >> w;

        u--;
        v--;

        dp[u][v] = min(dp[u][v], w);
        dp[v][u] = min(dp[v][u], w);
    }


    for(int i = 0; i < n; i++)
        dp[i][i] = 0;

    for(int k = 0; k < n; k++)
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++){
                if(i != j && dp[k][j] + dp[i][k] < dp[i][j])
                    dp[i][j] = dp[k][j] + dp[i][k];
            }

    while(q--){
        int x, y;
        cin >> x >> y;

        if(dp[x - 1][y - 1] == 2e18)
            cout << -1 << endl;
        else
            cout << dp[x - 1][y - 1] << endl;
    }

    return 0;
}