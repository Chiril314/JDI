#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, x;
    cin >> n >> x;

    vector<vector<long long>> dp(n, vector<long long> (x + 1, 0));
    
    long long a0;
    cin >> a0;
    
    if(a0 == 0)
        for(long long j = 0; j <= x; j++)
            dp[0][j] = 1;
    else
        dp[0][a0] = 1;
    
    for(long long i = 1; i < n; i++){
        long long a;
        cin >> a;

        if(a == 0){
            for(long long j = 1; j <= x; j++){
                if(j - 1 >= 1)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - 1]) % 1000000007;

                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % 1000000007;
                
                if(j + 1 <= x)
                    dp[i][j] = (dp[i][j] + dp[i - 1][j + 1]) % 1000000007;
            }
        } else{
            if(a - 1 >= 1)
                dp[i][a] = (dp[i][a] + dp[i - 1][a - 1]) % 1000000007;

            dp[i][a] = (dp[i][a] + dp[i - 1][a]) % 1000000007;
            
            if(a + 1 <= x)
                dp[i][a] = (dp[i][a] + dp[i - 1][a + 1]) % 1000000007;
        }
    }

    long long ans = 0;
    for(long long j = 1; j <= x; j++)
        ans = (ans + dp[n - 1][j]) % 1000000007;
    
    cout << ans;

    return 0;
}