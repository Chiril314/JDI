#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 1e6;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(N);
    long long cnt = pow(2, n + 1) - 1;
    for(long long i = 2; i <= cnt; i++){
        cin >> a[i];
    }

    long long ans = 0;
    for(long long i = pow(2, n) - 1; i >= 1; i--){
        long long x = a[2 * i], y = a[2 * i + 1];
        a[i] += max(x, y);
        ans += 2 * max(x, y) - x - y;
    }

    cout << ans;

    return 0;
}