#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, s = 0, p;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }

    p = s / 2;
    vector<vector<int>> dp(n + 1, vector<int> (p + 1, 0));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= p; j++)
            if(j - a[i - 1] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i - 1]] + a[i - 1]);
            else
                dp[i][j] = dp[i - 1][j];

    cout << min(dp[n][p], s - dp[n][p]) << ' ' << max(dp[n][p], s - dp[n][p]);

    return 0;
}