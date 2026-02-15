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
        long long n, k, ans = 0;
        cin >> n >> k;

        vector<int> a(n);
        bool flag = true;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > k)
                flag = false;
        }

        if(!flag){
            cout << 0;
            continue;
        }

        sort(a.begin(), a.end());
        for(int i = 1; i < n; i++)
            while(a[i] + a[0] <= k){
                ans++;
                a[i] += a[0];
            }

        cout << ans << endl;
    }

    return 0;
}