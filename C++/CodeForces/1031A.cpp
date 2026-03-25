#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, h, k, ans = 0;
    cin >> w >> h >> k;

    for(int i = 1; i <= k; i++){
        ans += (w - i * 4 + 2) * 2;
        ans += (h - i * 4 + 4) * 2;
    }

    cout << ans;

    return 0;
}