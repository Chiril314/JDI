#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int a[5];
        cin >> a[0] >> a[1] >> a[3] >> a[4];

        int ans = 0;

        a[2] = a[0] + a[1];
        int cnt1 = 0;
        if (a[2] == a[0] + a[1]) cnt1++;
        if (a[3] == a[1] + a[2]) cnt1++;
        if (a[4] == a[2] + a[3]) cnt1++;
        ans = max(ans, cnt1);

        a[2] = a[3] - a[1];
        int cnt2 = 0;
        if (a[2] == a[0] + a[1]) cnt2++;
        if (a[3] == a[1] + a[2]) cnt2++;
        if (a[4] == a[2] + a[3]) cnt2++;
        ans = max(ans, cnt2);

        cout << ans << endl;
    }

    return 0;
}