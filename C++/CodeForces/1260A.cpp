#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long c, s;
        cin >> c >> s;

        long long a = s / c, r = s % c, ans = 0;
        for(int i = 1; i <= c; i++){
            if(r){
                r--;
                ans += (1 + a) * (1 + a);
            } else
                ans += a * a;
        }

        cout << ans << endl;
    }

    return 0;
}