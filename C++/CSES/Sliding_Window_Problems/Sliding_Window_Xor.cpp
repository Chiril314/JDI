#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    long long x, a, b, c;
    cin >> x >> a >> b >> c;

    long long last = x, curr = x, ans = 0, xr = 0;
    for(int i = 0; i < n; i++){
        xr ^= curr;
        if(i >= k - 1){
            ans ^= xr;
            xr ^= last;
            last = (a * last + b) % c;
        }

        curr = (a * curr + b) % c;
    }

    cout << ans;

    return 0;
}