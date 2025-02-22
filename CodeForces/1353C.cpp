#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long n, ans = 0;
        cin >> n;

        if(n == 1){
            cout << 0 << endl;
        } else{
            while(n >= 1){
                ans += (n - 1) * ((n * 2) + ((n - 2) * 2)) / 2;
                n -= 2;
            }

            cout << ans << endl;
        }
    }

    return 0;
}