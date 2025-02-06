#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int a1 = k * l / nl;
    int a2 = c * d;
    int a3 = p / np;

    int ans = min({a1, a2, a3});
    ans /= n;

    cout << ans;

    return 0;
}