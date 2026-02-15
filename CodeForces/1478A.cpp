#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, ans = 0;
        cin >> n;
        
        vector<int> a(n);
        map<int, int> m;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            m[a[i]]++;
            ans = max(ans, m[a[i]]);
        }

        cout << ans << endl;
    }

    return 0;
}