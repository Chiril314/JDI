#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<char>> a(n, vector<char>(n));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    if(a[0][0] == '*' || a[n - 1][n - 1] == '*'){
        cout << 0;
        return 0;
    }
    
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            if(a[i][j] == '*')
                continue;
            
            if(i > 0)
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % 1000000007;

            if(j > 0)
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % 1000000007;
        }

    cout << dp[n - 1][n - 1];

    return 0;
}