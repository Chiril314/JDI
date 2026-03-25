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
        long long n, ans = 0;
        cin >> n;

        vector<pair<long long, long long>> v(n);
        for(long long i = 0; i < n; i++)
            cin >> v[i].first;

        for(long long i = 0; i < n; i++)
            cin >> v[i].second;

        sort(v.rbegin(), v.rend());
        
        long long k = 0;
        for(int i = 0; i < n; i++){
            bool flag = true;
            if(v[i].first > k + v[i].second){
                k += v[i].second;
                flag = false;
            }

            ans = max(ans, k);
            if(flag)
                ans = max(ans, v[i].first);
        }

        cout << ans << endl;
    }

    return 0;
}