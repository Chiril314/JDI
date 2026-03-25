#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long ans = 0, x, k, a, b;
    cin >> x >> k >> a >> b;
    if(k == 1){
        cout << (x - 1) * a;
        return 0;
    }

    while(x > 0){
        ans += (x % k) * a;
        x -= x % k;
        if(x == 0){
            ans -= a;
            break;
        }

        long long d = x - (x / k);
        ans += min(d * a, b);
        x /= k;
    }

    cout << ans;

    return 0;
}