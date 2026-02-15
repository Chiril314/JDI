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
        int n, x;
        cin >> n >> x;

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        for(int i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        bool flag = false;
        for(int i = 0; i < n; i++)
            if(a[i] + b[i] > x){
                flag = true;
                break;
            }

        if(flag){
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
    }

    return 0;
}