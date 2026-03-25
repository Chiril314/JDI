#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;f
    cin >> t;

    while(t--){
        long long n, k, l = 0, r = 1e9, idx = 0;
        cin >> n >> k;

        while(l <= r){
            long long m = l + (r - l) / 2;
            if(k * m >= n){
                idx = m;
                r = m - 1;
            } else
                l = m + 1;
        }

        cout << (idx * k + n - 1) / n << endl;
    }

    return 0;
}