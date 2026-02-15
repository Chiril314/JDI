#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0, l1 = 0, l2 = 0, r1 = 0, r2 = 0;
    cin >> n;

    vector<long long> a(n), b(n);
    for(long long i = 0; i < n; i++){
        cin >> a[i] >> b[i];

        r1 = a[i];
        r2 = b[i];

        long long c = max(0LL, min(r1, r2) - max(l1, l2) + 1);
        if(i && a[i - 1] == b[i - 1])
            c--;
        
        ans += max(c, 0LL);
        l1 = a[i];
        l2 = b[i];
    }

    cout << ans;

    return 0;
}