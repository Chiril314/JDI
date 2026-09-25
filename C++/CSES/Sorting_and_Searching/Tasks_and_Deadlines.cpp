#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    vector<pair<long long, long long>> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    long long time = 0, ans = 0;
    for(long long i = 0; i < n; i++){
        time += a[i].first;
        ans += (a[i].second - time);
    }

    cout << ans;

    return 0;
}