#include <iostream>
#include <climits>
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
        int n, p = 0, s = 0, ans = INT_MAX;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        for(int i = 0; i < n; i++){
            p += a[i];
            s = 0;
            int m = i < n;
            for(int j = i + 1; j < n; j++){
                s += a[j];
                if(s == p){
                    s = 0;
                    m += j < n;
                }
            }

            if(!s)
                ans = min(ans, n - m);
        }

        cout << ans << endl;
    }

    return 0;
}