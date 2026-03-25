#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> dp(n);
    dp[0] = a[0];
    for(int i = 1; i < n; i++)
        dp[i] = max(a[i], dp[i - 1] + a[i]);
    
    long long mx = dp[0];
    for(int i = 1; i < n; i++)
        mx = max(mx, dp[i]);
    
    cout << mx;

    return 0;   
}