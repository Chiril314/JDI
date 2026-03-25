#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long x, ans = 1;
    cin >> x;

    long long r = sqrt((long double)x);
    for(long long i = r; i >= 1; i--)
        if(x % i == 0){
            long long a = x / i;
            if(gcd(i, a) == 1){
                ans = i;
                break;
            }
        }

    cout << ans << ' ' << x / ans;

    return 0;
}