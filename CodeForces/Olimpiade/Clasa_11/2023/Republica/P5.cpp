#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<long long, long long>> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end()); 

    vector<long long> b(n + 1, 0);
    for(int i = 1; i <= n; i++)
        b[i] = b[i - 1] + a[i - 1].second;

    long long ans = LLONG_MIN, mn = b[0] - a[0].first;
    for(int i = 1; i <= n; i++){
        long long c = b[i] - a[i - 1].first;       

        ans = max(ans, c - mn);
        if(i < n) 
            mn = min(mn, b[i] - a[i].first);
    }

    cout << ans;

    return 0;
}