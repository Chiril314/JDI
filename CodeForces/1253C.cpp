#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, s = 0;
    cin >> n >> m;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vector<long long> ans(n);
    for(int i = 0; i < n; i++){
        s += a[i];

        ans[i] = s;
        if(i >= m)
            ans[i] += ans[i - m];

        cout << ans[i] << ' ';
    }

    return 0;
}