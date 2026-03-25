#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, num = 1, ans = 0;
        cin >> n;

        while(num <= 3 * n){
            ans += num;
            num *= 3;
        }

        while(num > 0){
            if(ans - num >= n)
                ans -= num;
            num /= 3;
        }

        cout << ans << endl;
    }

    return 0;
}