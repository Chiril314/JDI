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
        
        sort(a.begin(), a.end());

        bool flag1 = true, flag2 = true;
        int p1 = a[0], p2 = a[n - 1];
        if(p1 == 0)
            flag1 = false;
        
        if(p2 == 0)
            flag2 = false;

        for(int i = 1; i < n; i++){
            p1 += a[i];
            if(p1 == 0)
                flag1 = false;
        }

        for(int i = n - 2; i >= 0; i--){
            p2 += a[i];
            if(p2 == 0)
                flag2 = false;
        }

        if(flag1){
            cout << "YES" << endl;
            for(int i = 0; i < n; i++)
                cout << a[i] << ' ';
            cout << endl;
        } else if(flag2){
            cout << "YES" << endl;
            for(int i = n - 1; i >= 0; i--)
                cout << a[i] << ' ';
            cout << endl;
        } else
            cout << "NO" << endl;
    }
    
    return 0;
}