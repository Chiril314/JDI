#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, k, order = 1;
    cin >> n >> k;

    vector<pair<long long, long long>> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i].second >> a[i].first;

    sort(a.begin(), a.end());

    multiset<long long> s;
    for(int i = 0; i < k; i++)
        s.insert(0);

    long long ans = 0;
    for(int i = 0; i < n; i++){
        auto it = s.upper_bound(a[i].second);
        if(it == s.begin())
            continue;

        it--;

        s.erase(it);
        s.insert(a[i].first);

        ans++;
    }

    cout << ans;

    return 0;
}