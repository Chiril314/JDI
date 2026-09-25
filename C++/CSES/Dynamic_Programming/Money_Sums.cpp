#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, s = 0, cnt = 0;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }

    vector<vector<int>> dp(n + 1, vector<int> (s + 1, 0));
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= s; j++){
            dp[i][j] = dp[i - 1][j];
            if(j - a[i - 1] >= 0)
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i - 1]] + a[i - 1]);
        }

    vector<bool> ans(s + 1, false);
    for(int i = 0; i <= s; i++)
        if(!ans[dp[n][i]]){
            ans[dp[n][i]] = true;
            cnt++;
        }

    cout << cnt - 1 << endl;
    for(int i = 1; i < (int)ans.size(); i++)    
        if(ans[i])
            cout << i << ' ';

    return 0;
}