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
        int n, mx = 0;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mx = max(mx, a[i]);
        }

        int ans = -1;
        for(int i = 0; i < n; i++)
            if(a[i] == mx){
                bool flag = false;
                if(i - 1 >= 0 && a[i] > a[i - 1])
                    flag = true;
                
                if(i + 1 < n && a[i] > a[i + 1])
                    flag = true;

                if(flag)
                    ans = i + 1;
            }

        cout << ans << endl;
    }

    return 0;
}