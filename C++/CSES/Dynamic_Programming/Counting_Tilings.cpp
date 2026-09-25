#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int n, m;

void generateTransitions(int col, int curMask, int nextMask, vector<int>& result){
    if(col == m){
        result.push_back(nextMask);
        return;
    }

    if(curMask & (1 << col)){
        generateTransitions(col + 1, curMask, nextMask, result);
        return;
    }

    generateTransitions(col + 1, curMask, nextMask | (1 << col), result);
    if(col + 1 < m && !(curMask & (1 << (col + 1))))
        generateTransitions(col + 2, curMask, nextMask, result);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    if(n % 2 == 1 && m % 2 == 1){
        cout << 0;
        return 0;
    }

    if(m > n)
        swap(n, m);

    int totalMasks = 1 << m;

    vector<vector<int>> transitions(totalMasks);
    for(int mask = 0; mask < totalMasks; mask++)
        generateTransitions(0, mask, 0, transitions[mask]);

    vector<int> dp(totalMasks, 0);
    dp[0] = 1;

    for(int row = 0; row < n; row++){
        vector<int> newDp(totalMasks, 0);
        for(int mask = 0; mask < totalMasks; mask++){
            if(dp[mask] == 0)
                continue;

            for(int nextMask : transitions[mask]){
                newDp[nextMask] += dp[mask];
                newDp[nextMask] %= MOD;
            }
        }

        dp = newDp;
    }

    cout << dp[0];

    return 0;
}