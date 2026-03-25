#include <iostream>
#include <vector>
#include <set>
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

        vector<bool> v(2 * n + 5, false);
        set<int> s;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        for(int i = n - 1; i >= 0; i--)
            if(!v[a[i] + 1]){
                v[a[i] + 1] = true;
                ans++;
            } else if(!v[a[i]]){
                v[a[i]] = true;
                ans++;
            }

        cout << ans << endl;
    }

    return 0;
}