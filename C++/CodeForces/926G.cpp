#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n], cntOdd = 0, cntEven = 0;
    for(long long i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % 2 == 0)
            cntEven++;
        else
            cntOdd++;
    }

    long long ans = 0,  temp = min(cntEven, cntOdd);

    ans += temp;
    cntEven -= temp;
    cntOdd -= temp;

    ans += (cntOdd / 3);

    cout << ans;

    return 0;
}