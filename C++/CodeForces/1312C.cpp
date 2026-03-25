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
        long long n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(long long i = 0; i < n; i++)    
            cin >> a[i];

        long long mxPow = 1;
        for(mxPow = 1; mxPow * k <= 1e16; mxPow *= k);

        bool ans = true;
        while(mxPow > 0){
            long long cnt = 0;
            for(int i = 0; i < n; i++)
                if(a[i] >= mxPow){
                    cnt++;
                    a[i] -= mxPow;
                }

            if(cnt >= 2){
                ans = false;
                break;
            }

            mxPow /= k;
        }

        sort(a.begin(), a.end());
        reverse(a.begin(), a.end());

        if(ans && a[0] <= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}