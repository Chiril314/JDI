#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;

    long long ans = 1 + min(r1, r2) - max(l1, l2);
    if(k >= max(l1, l2) && k <= min(r1, r2))
        ans--;
    
    if(ans < 0)
        cout << 0;
    else
        cout << ans;

    return 0;
}