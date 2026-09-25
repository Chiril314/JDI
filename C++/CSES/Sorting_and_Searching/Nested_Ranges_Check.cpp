#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(3));
    for(int i = 0; i < n; i++){
        cin >> a[i][0] >> a[i][1];
        a[i][2] = i;
    }

    vector<bool> ans1(n), ans2(n);
    sort(a.begin(), a.end(), [](vector<int> &u, vector<int> &v){
        if(u[0] != v[0]) 
            return u[0] < v[0];
        return u[1] > v[1];
    });

    int mxr = 0;
    for(int i = 0; i < n; i++){
        int r = a[i][1], idx = a[i][2];
        if(r <= mxr)
            ans2[idx] = true;

        mxr = max(mxr, r);
    }

    int mnr = INT_MAX;
    for(int i = n - 1; i >= 0; i--){
        int r = a[i][1], idx = a[i][2];
        if(r >= mnr)
            ans1[idx] = true;

        mnr = min(mnr, r);
    }

    for(int i = 0; i < n; i++)
        cout << ans1[i] << ' ';

    cout << "\n";
    for(int i = 0; i < n; i++)  
        cout << ans2[i] << ' ';

    return 0;
}