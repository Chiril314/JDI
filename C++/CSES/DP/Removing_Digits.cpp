#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 1, num, mx, d;
    cin >> n;

    while(n > 9){
        num = n;
        mx = 0;
        while(num){
            d = num % 10;
            if(d > mx)
                mx = d;
            num /= 10;
        }

        n -= mx;
        ans++;
    }

    cout << ans;

    return 0;
}