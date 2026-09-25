#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> s(n), e(n), p(n);   
    for(int i = 0; i < n; i++)
        cin >> s[i] >> e[i] >> p[i];

    vector<int> order(n, 0);
    iota(order.begin(), order.end(), 0);
    sort(order.begin(), order.end(), [&](int i, int j){
        return e[i] < e[j];
    });

    vector<long long> S(n), E(n), P(n);
    for(int i = 0; i < n; i++){
        S[i] = s[order[i]];
        E[i] = e[order[i]];
        P[i] = p[order[i]];
    }

    vector<long long> dp(n + 1, 0);
    for(int i = 1; i <= n; i++){
        long long start = S[i - 1], profit = P[i - 1];

        int j = upper_bound(E.begin(), E.end(), start  - 1) - E.begin();
        dp[i] = max(dp[i - 1], dp[j] + profit);
    }

    cout << dp[n];

    return 0;
}