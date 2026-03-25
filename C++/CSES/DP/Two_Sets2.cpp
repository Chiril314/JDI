#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    const int MOD = 1000000007;

    long long n;
    cin >> n;

    long long s = n * (n + 1) / 2;
    if(s % 2){
        cout << 0;
        return 0;
    }

    long long k = s / 2;

    vector<long long> dp(k + 1, 0);
    dp[0] = 1;

    for(long long x = 1; x <= n - 1; x++)
        for(long long s = k; s >= x; s--){
            dp[s] += dp[s - x];
            if(dp[s] >= MOD)
                dp[s] -= MOD;
        }
    
    cout << dp[k];


    return 0;
}