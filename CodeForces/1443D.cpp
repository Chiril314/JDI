#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

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

        vector<long long> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = true;
        
        long long mn = LLONG_MAX, total = 0, lst = LLONG_MAX;
        for(int i = 0; i < n; i++){
            a[i] -= total;
            if(a[i] < 0){
                cout << "NO" << endl;
                flag = false;
                break;
            }

            if(lst > a[i])
                mn = min(mn, a[i]);
            else if(lst < a[i]){
                total += (a[i] - lst);
                a[i] = lst;
            }

            lst = a[i];
        }

        if(flag)
            cout << "YES" << endl;
    }

    return 0;
}