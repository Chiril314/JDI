#include <iostream>
#include <vector>

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

        long long m = n * k, ans = 0;
        vector<long long> a(m);
        for(int i = 0; i < m; i++)
            cin >> a[i];
        
        int cnt = 0, b = 0;
        for(int i = m - 1; i >= 0; i--)
            if(cnt == n / 2 && b < k){
                b++;
                ans += a[i];
                cnt = 0;
            } else
                cnt++;

        cout << ans << endl;
    }

    return 0;
}