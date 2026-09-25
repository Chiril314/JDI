#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> dp(n + 1, vector<int> (m + 1, 1e9));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(i == j)
                dp[i][j] = 0;
            else{
                for(int k = 1; k <= i / 2; k++)
                    dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);

                for(int k = 1; k <= j / 2; k++)
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
            }

    cout << dp[n][m];

    return 0;
}