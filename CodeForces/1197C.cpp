#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v, a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 1; i < n; i++)
        v.push_back(a[i - 1] - a[i]);

    sort(v.begin(), v.end());

    long long ans = a[n - 1] - a[0];
    for(int i = 0; i < k - 1; i++)
        ans += v[i];
    
    cout << ans;

    return 0;
}