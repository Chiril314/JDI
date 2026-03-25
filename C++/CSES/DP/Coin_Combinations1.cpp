#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x;
    cin >> n >> x;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> dp(x + 1, 0);
    dp[0] = 1;
    for(long long i = 1; i <= x; i++)
        for(long long j = 0; j < n; j++)
            if(i - a[j] >= 0)
                dp[i] += (dp[i - a[j]] % 1000000007);

    cout << dp[x] % 1000000007;

    return 0;
}