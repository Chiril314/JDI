#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, s = 0;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }

    vector<vector<long long>> dp(n, vector<long long> (n, 0));
    for(long long i = 0; i < n; i++)
        dp[i][i] = a[i];

    for(long long len = 2; len <= n; len++)
        for(long long l = 0; l + len - 1 < n; l++){
            long long r = l + len - 1;
            dp[l][r] = max(a[l] - dp[l + 1][r], a[r] - dp[l][r - 1]);
        }

    cout << (dp[0][n - 1] + s) / 2;

    return 0;
}