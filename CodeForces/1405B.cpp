#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++)
            cin >> a[i];

        long long ans = 0, add = 0, dec = 0;
        for(long long i = 0; i < n; i++){
            if(a[i] > 0){
                long long r = a[i];
                add += a[i];
                a[i] = max(0LL, a[i] - dec);
                dec -= r - a[i];
            } else if(a[i] < 0){
                long long r = a[i];
                a[i] = min(0LL, a[i] + add);
                add -= abs(r - a[i]);
                dec += abs(a[i]);
                ans += abs(a[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}