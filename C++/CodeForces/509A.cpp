#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long ans1 = 1, ans2 = 1, ans;
    for(long long i = 1; i <= (n - 1) * 2; i++){
        ans1 *= i;
    }

    for(long i = 1; i <= n - 1; i++){
        ans2 *= i;
    }

    ans = ans1 / pow(ans2, 2);
    cout << ans;

    return 0;
}