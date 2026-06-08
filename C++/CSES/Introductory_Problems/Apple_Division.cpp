#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> a(n);

    long long total = 0;
    for(int i = 0; i < n; i++){ 
        cin >> a[i];
        total += a[i];
    }

    long long ans = total;
    for(int mask = 0; mask < (1 << n); mask++){
        long long s = 0;
        for(int i = 0; i < n; i++)
            if(mask & (1 << i))
                s += a[i];

        ans = min(ans, llabs(total - 2 * s));
    }

    cout << ans << "\n";

    return 0;
}