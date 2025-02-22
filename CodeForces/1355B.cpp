#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        sort(a, a + n); 

        long long ans = 0, cnt = 0;
        for (long long i = 0; i < n; i++) {
            cnt++; 
            if(cnt >= a[i]){
                ans++;
                cnt = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
