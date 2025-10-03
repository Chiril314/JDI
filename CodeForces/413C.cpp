#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, ans = 0;
    cin >> n >> m;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        ans += a[i];
    }

    vector<long long> b(m);
    for(long long i = 0; i < m; i++){
        cin >> b[i];
        ans -= a[b[i] - 1];
        b[i] = a[b[i] - 1];
    }

    sort(b.rbegin(), b.rend());
    for(int i = 0; i < m; i++){
        if(ans > b[i])
            ans *= 2;
        else
            ans += b[i];
    }
    
    cout << ans;

    return 0;
}