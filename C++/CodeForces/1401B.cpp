#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;

        long long ans = min(z1, y2) * 2;
        z1 -= min(z1, y2);
        y2 -= min(z1, y2);

        long long x = min(z1, z2);
        z1 -= x;
        z2 -= x;

        x = min(z2, x1);
        z2 -= x;
        x1 -= x;

        ans -= (min(z2, y1) * 2);
        cout << ans << endl;
    }

    return 0;
}