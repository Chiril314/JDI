#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> s(n + 1);
        vector<int> dp(n + 1, 1);
        
        for(int i = 1; i <= n; i++) 
            cin >> s[i];
        
        int ans = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 2 * i; j <= n; j += i){
                if(s[j] > s[i]){
                    dp[j] = max(dp[j], dp[i] + 1);
                    ans = max(ans, dp[j]);
                }
            }
        }
        
        cout << ans << endl;
    }

    return 0;
}
