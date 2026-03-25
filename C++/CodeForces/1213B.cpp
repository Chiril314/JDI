#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        long long a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];

        long long minCheck = pow(10, 6), ans = 0;
        for(int i = n - 1; i >= 0; i--){
            if(a[i] > minCheck)
                ans++;

            minCheck = min(minCheck, a[i]);
        }

        cout << ans << endl;
    }

    return 0;
}