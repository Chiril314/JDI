#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> b[i];

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= x; j++)
            if(j - a[i - 1] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i - 1]] + b[i - 1]);
            else
                dp[i][j] = dp[i - 1][j];

    cout << dp[n][x];

    return 0;
}