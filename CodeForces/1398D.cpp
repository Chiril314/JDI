#include <iostream>
#include <algorithm>

using namespace std;

int dp[201][201][201];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int R, G, B;
    cin >> R >> G >> B;

    int r[201], g[201], b[201];

    for(int i = 0; i < R; i++) 
        cin >> r[i];

    for(int i = 0; i < G; i++) 
        cin >> g[i];

    for(int i = 0; i < B; i++) 
        cin >> b[i];

    sort(r, r + R, greater<int>());
    sort(g, g + G, greater<int>());
    sort(b, b + B, greater<int>());

    int ans = 0;
    for(int i = 0; i <= R; i++){
        for(int j = 0; j <= G; j++){
            for(int k = 0; k <= B; k++){
                if(i < R && j < G)
                    dp[i + 1][j + 1][k] = max(dp[i + 1][j + 1][k], dp[i][j][k] + r[i] * g[j]);

                if(i < R && k < B)
                    dp[i + 1][j][k + 1] = max(dp[i + 1][j][k + 1], dp[i][j][k] + r[i] * b[k]);

                if(j < G && k < B)
                    dp[i][j + 1][k + 1] = max(dp[i][j + 1][k + 1], dp[i][j][k] + g[j] * b[k]);

                ans = max(ans, dp[i][j][k]);
            }
        }
    }

    cout << ans;

    return 0;
}
