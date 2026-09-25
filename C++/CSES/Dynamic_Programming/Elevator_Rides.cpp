#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<long long> w(n);
    for(int i = 0; i < n; i++)
        cin >> w[i];

    int N = 1 << n;
    vector<pair<int, long long>> dp(N, {n + 1, 0LL});
    
    dp[0] = {1, 0LL};
    for(int mask = 1; mask < N; mask++)
        for(int i = 0; i < n; i++)
            if(mask & (1 << i)){
                int pmask = mask ^ (1 << i);
                pair<int, long long> prev = dp[pmask];
            
                pair<int, long long> cand;
                if(prev.second + w[i] <= x)
                    cand = {prev.first, prev.second + w[i]};
                else
                    cand = {prev.first + 1, w[i]};
                
                if(cand.first < dp[mask].first || (cand.first == dp[mask].first && cand.second < dp[mask].second))
                    dp[mask] = cand;
            }

    cout << dp[N - 1].first;

    return 0;
}