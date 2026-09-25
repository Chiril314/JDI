#include <iostream>
#include <map>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, x;
    cin >> n >> x;
        
    map<long long, long long> f;
    f[0] = 1;

    long long sum = 0, ans = 0;
    for(long long i = 0; i < n; i++){
        long long value;
        cin >> value;

        sum += value;

        ans += f[sum - x];
        f[sum]++;
    }

    cout << ans;

    return 0;
}