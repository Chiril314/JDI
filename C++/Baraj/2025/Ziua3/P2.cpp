#include <iostream>
using namespace std;

bool ok(long long t, long long k, long long s){
    __int128_t c = (__int128_t)t * k + (__int128_t)t * (t + 1) / 2;
    return c <= s;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long k, s;
    cin >> k >> s;

    long long l = 1, r = 2000000, best = 1;

    while(l <= r){
        long long m = (l + r) / 2;
        if(ok(m, k, s)){
            best = m;
            l = m + 1;
        } else{
            r = m - 1;
        }
    }

    long long t = best;

    __int128_t n = (__int128_t)s - (__int128_t)t * (t + 1) / 2;
    long long ans = (long long)((n + t - 1) / t);

    cout << ans;

    return 0;
}