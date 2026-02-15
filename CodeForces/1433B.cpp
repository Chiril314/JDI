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
        int n, cnt = 0;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        int l = n, r = 0;
        for(int i = 0; i < n; i++)
            if(a[i] == 1){
                if(l == n)
                    l = i;
                r = i;
            }

        int ans = 0;
        for(int i = l; i <= r; i++)
            if(a[i] == 0)
                ans++;

        cout << ans << endl;
    }

    return 0;
}