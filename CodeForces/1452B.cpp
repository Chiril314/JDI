#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, p = 0, mx = 0;
        cin >> n;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            p += a[i];
            mx = max(mx, a[i]);
        }

        long long r = max(mx, (p + n - 2) / (n - 1));
        cout << r * (n - 1) - p << endl;
    }

    return 0;
}