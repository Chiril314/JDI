#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m;
    cin >> n >> m;

    vector<long long> c(n), t(n), p(n);
    for(long long i = 0; i < n; i++)
        cin >> c[i] >> t[i];
    
    p[0] = c[0] * t[0];
    for(long long i = 1; i < n; i++)
        p[i] = p[i - 1] + c[i] * t[i];

    while(m--){
        long long x, l = 0, r = n - 1, ans = -1;
        cin >> x;

        while(l <= r){
            long long m = l + (r - l) / 2;
            if(p[m] >= x){
                r = m - 1;
                ans = m;
            } else
                l = m + 1;
        }

        cout << ans + 1 << endl;
    }

    return 0;
}