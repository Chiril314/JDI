#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, k, ans = 1;
    cin >> n >> k;

    while(n >= k){
        if(n % k == 0){
            cout << ans;
            return 0;
        }

        n = n - (n / k);

        ans++;
    }

    return 0;
}