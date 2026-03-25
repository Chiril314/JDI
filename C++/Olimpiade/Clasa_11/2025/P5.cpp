#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long l, r, ans = 0;
        cin >> l >> r;

        long long dif = r - l + 1, a = l % 9, b = r % 9;
        ans += (dif / 9) * 45;

        if(dif % 9 != 0)
            while(a != b){
                if(a == 0)
                    ans += 9;
                else
                    ans += a;
                a++;
                if(a == 9)
                    a = 0;
            }

        if(dif % 9 == 0)
            cout << ans << endl;
        else{
            if(b == 0)
                ans += 9;
            else
                ans += b;

            cout << ans << endl;
        }
    }

    return 0;
}