#include <iostream>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long x, y;
        cin >> x >> y;

        long long ans;
        if(x <= y){
            if(y % 2 == 1){
                ans = y * y;
                ans -= x;
                ans++;
            } else{
                ans = ((y - 1) * (y - 1)) + 1;
                ans += x;
                ans--;
            }
        } else{
            if(x % 2 == 1){
                ans = ((x - 1) * (x - 1)) + 1;
                ans += y;
                ans--;
            } else{
                ans = x * x;
                ans -= y;
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}