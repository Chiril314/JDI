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
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        vector<int> b(n);
        for(int i = 0; i < n; i++)
            cin >> b[i];

        vector<long long> d(n);
        for(int i = 0; i < n; i++)
            d[i] = b[i] - a[i];

        int l = 0;
        while(l < n && d[l] == 0)
            l++;

        if(l == n){
            cout << "YES" << endl;
            continue;
        }

        long long k = d[l];
        if(k <= 0){
            cout << "NO" << endl;
            continue;
        }

        int r = l;
        while(r < n && d[r] == k)
            r++;

        bool flag = true;
        for(int i = r; i < n; i++)
            if(d[i] != 0){
                flag = false;
                break;
            }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}