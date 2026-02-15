#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, ans = 0, mn = LLONG_MAX;
        cin >> n;

        vector<pair<long long, long long>> a(n);
        for(long long i = 0; i < n; i++)
            cin >> a[i].first >> a[i].second;
        
        for(long long i = 0; i < n; i++){
            long long k = (i + 1) % n;
            long long nw = min(a[k].first, a[i].second);
            ans += a[k].first - nw;
            mn = min(mn, nw);
        }

        cout << ans + mn << endl;
    }

    return 0;
}