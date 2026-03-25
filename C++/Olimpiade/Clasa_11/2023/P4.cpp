#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string a, t = "ORI2023";
    cin >> a;

    vector<long long> dp(8, 0);
    dp[0] = 1;

    for(char c : a)
        for(int j = 7; j >= 1; --j)
            if(c == t[j - 1])
                dp[j] = (dp[j] + dp[j - 1]) % 1000000007;
        
    cout << dp[7];

    return 0;
}
