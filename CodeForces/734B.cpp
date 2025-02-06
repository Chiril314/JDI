#include <iostream>

using namespace std;

int main(){
    int k2, k3, k5, k6, ans = 0;
    cin >> k2 >> k3 >> k5 >> k6;

    ans += min({k2, k5, k6}) * 256;

    k2 -= min({k2, k5, k6});
    k5 -= min({k2, k5, k6});
    k6 -= min({k2, k5, k6});

    ans += min(k2, k3) * 32;

    cout << ans;

    return 0;
}