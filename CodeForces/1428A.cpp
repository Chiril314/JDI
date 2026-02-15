#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long x1, x2, y1, y2, ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;

        ans = abs(x1 - x2) + abs(y1 - y2);
        if(abs(x1 - x2) != 0 && abs(y1 - y2) != 0)
            ans += 2;
        
        cout << ans << endl;
    }

    return 0;
}