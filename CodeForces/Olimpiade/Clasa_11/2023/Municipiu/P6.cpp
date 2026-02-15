#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long n, c1, c2;
    cin >> n >> c1 >> c2;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> dp(n + 1, -1e18); 
    dp[1] = a[0];

    for(long long i = 1; i <= n; i++){
        if(i + 1 <= n){
            long long s = dp[i] + a[i] - c1;
            if(s > dp[i + 1])
                dp[i + 1] = s;
        }

        for(long long k = 2; i * k <= n; k++){
            long long c = i * k, s = dp[i] + a[c - 1] - c2 * k;
            if(s > dp[c]) 
                dp[c] = s;
        }
    }

    cout << dp[n];

    return 0;
}