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
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.rbegin(), a.rend());

        long long ans = 0;
        for(int i = 0; i <= k; i++)
            ans += a[i];
        
        cout << ans << endl;
    }

    return 0;
}