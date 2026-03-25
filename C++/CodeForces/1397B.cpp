#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a(n);
    for(long long i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 1e18;
    sort(a.begin(), a.end());

    for(long long c = 1; c < 100000; c++){
        long long cnt = 0;
        bool flag = false;
        for(long long i = 0; i < n; i++){
            long long x = pow(c, i);
            if(x < 0){
                flag = true;
                break;
            }

            cnt += abs(a[i] - x);
        }

        if(flag)
            break;
        ans = min(ans, cnt);
    }

    cout << ans;

    return 0;
}