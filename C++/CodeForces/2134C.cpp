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
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];


        long long ans = 0;
        for(int i = 1; i < n; i += 2){
            if(a[i - 1] > a[i]){
                ans += (a[i - 1] - a[i]);
                a[i - 1] = a[i];
            }

            if(i + 1 < n && a[i + 1] > a[i]){
                ans += (a[i + 1] - a[i]);
                a[i + 1] = a[i];
            }
        }

        for(int i = 1; i < n; i += 2){
            int c = a[i - 1];
            if(i + 1 < n)
                c += a[i + 1];

            int d = max(0, c - a[i]);
            if(i + 1 != n && i != n)
                a[i + 1] -= max(0, d);

            ans += d;
        }

        cout << ans << endl;
    }

    return 0;
}