#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, k, ans = 0;
    cin >> n >> k;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        ans = max(ans, a[i]);
    }

    for(int i = 0; i < n - k; i++)
        ans = max(ans, a[i] + a[2 * (n - k) - i - 1]);
        
    cout << ans;

    return 0;
}