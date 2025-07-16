#include <iostream>

using namespace std;

bool check(long long m, long long k, long long x){
    long long s = m * (2 * k - m - 1) / 2;
    if(s >= x)
        return true;
    else
        return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, k;
    cin >> n >> k;

    if(n == 1){
        cout << 0;
        return 0;
    }

    long long c = (k - 1) * k / 2;
    if(n - 1 > c){
        cout << -1;
        return 0;
    }

    long long ans = k - 1, x = n - 1, l = 1, r = k - 1;
    while(l <= r){
        long long m = (l + r) / 2;
        if(check(m, k, x)){
            ans = m;
            r = m - 1;
        } else
            l = m + 1;
    }

    cout << ans;

    return 0;
}