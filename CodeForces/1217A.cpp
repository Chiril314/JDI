#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a, b, n;
        cin >> a >> b >> n;

        long long l = 0, r = n, ans = -1;
        while(l <= r){
            long long m = l + (r - l) / 2;
            if(b + m < a + (n - m)){
                ans = m;
                l = m + 1;
            } else
                r = m - 1;
        }

        cout << ans + 1 << endl;
    }

    return 0;
}