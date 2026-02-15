#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long ans = 0;
    for(int i = 0; i < n / 2; i++)
        ans += (a[i] + a[n - i - 1]) * (a[i] + a[n - i - 1]);
    
    cout << ans;

    return 0;
}