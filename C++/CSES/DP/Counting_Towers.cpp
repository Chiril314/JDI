#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t, mx = 0;
    cin >> t;

    vector<int> ans(t);
    for(int i = 0; i < t; i++){
        cin >> ans[i];
        mx = max(mx, ans[i]);
    }

    vector<pair<long long, long long>> dp(mx + 1, {1, 1});
    for(int i = 2; i <= mx; i++){
        dp[i].first = (4 * dp[i - 1].first + dp[i - 1].second) % 1000000007;
        dp[i].second = (dp[i - 1].first + 2 * dp[i - 1].second) % 1000000007;
    }

    for(int i = 0; i < t; i++)
        cout << (dp[ans[i]].first + dp[ans[i]].second) % 1000000007 << endl;

    return 0;
}