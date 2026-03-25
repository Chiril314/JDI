#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans = 0, power = 1, digits = 1;

    while(power * 10 <= n){
        ans += digits * (power * 9);
        power *= 10;
        digits++;
    }

    ans += digits * (n - power + 1);
    
    cout << ans;

    return 0;
}