#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, c1, c2;
    cin >> n >> c1 >> c2;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> ans(n, 0);
    ans[0] = a[0];

    for(long long i = 1; i < n; i++)
        ans[i] = ans[i - 1] + a[i] - c1;

    for(long long i = 0; i < n; i++){
        long long m = (n - i - 1) / (i + 1), b = i + 1;
        for(long long j = 0; j < m; j++){
            b += (i + 1);
            ans[b - 1] = max(ans[b - 1], ans[i] + a[b - 1] - (c2 * (j + 2)));
        }
    }

    cout << ans[n - 1];

    return 0;
}