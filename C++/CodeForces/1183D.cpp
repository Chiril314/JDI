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
        long long n;
        cin >> n;

        vector<long long> a(n), v(n, 0);
        vector<bool> used(n, false);
        for(long long i = 0; i < n; i++){
            cin >> a[i];
            a[i]--;
            v[a[i]]++;
        }

        sort(v.rbegin(), v.rend());
        long long ans = 0, mn = v[0]; 
        ans += v[0];

        for(long long i = 1; i < n; i++){
            if(v[i] <= 0)
                break;
        
            v[i] = min(v[i], mn - 1);
            mn = min(mn, v[i]);
            if(v[i] <= 0)
                break;
            
            ans += v[i];
        }

        cout << ans << endl;
    }

    return 0;
}