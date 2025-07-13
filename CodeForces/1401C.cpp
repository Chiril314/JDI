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
        int n, mn = 1e9;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        vector<int> b;
        b = a;
        sort(b.begin(), b.end());

        bool flag = true;
        for(int i = 0; i < n; i++)
            if(a[i] != b[i]){
                if(a[i] % mn != 0)
                    flag = false;
            }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}