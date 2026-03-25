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
        int r, x, d, n;
        cin >> r >> x >> d >> n;

        string s;
        cin >> s;

        int ans = 0;
        for(int i = 0; i < n; i++)
            if(s[i] == '2' && r >= x)
                continue;
            else if(s[i] == '2' || s[i] == '1'){
                ans++;
                r -= d;
                r = max(r, 0);
                continue;
            }

        cout << ans << endl;
    }

    return 0;
}