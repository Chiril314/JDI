#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    
    vector<int> c(n);
    for(int i = 0; i < n; i++)
        cin >> c[i];

    vector<int> dp(x + 1, 1e9);
    dp[0] = 0;

    for(int i = 0; i < n; i++)
        for(int j = c[i]; j <= x; j++)
            dp[j] = min(dp[j], dp[j - c[i]] + 1);

    if(dp[x] == 1e9)
        cout << -1;
    else
        cout << dp[x];

    return 0;
}