#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    long long ans = m / (k + 1) * (a[0] * k + a[1]) + m % (k + 1) * a[0];
    cout << ans;

    return 0;
}