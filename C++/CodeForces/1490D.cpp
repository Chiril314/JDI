#include <iostream>
#include <vector>

using namespace std;

void f(vector<int> &a, vector<int> &ans, int mn, int mx, int d){
    int nMx = mn;
    for(int i = mn + 1; i <= mx; i++)
        if(a[i] > a[nMx])
            nMx = i;

    ans[nMx] = d;
    if(nMx != mn)
        f(a, ans, mn, nMx - 1, d + 1);
    if(nMx != mx)
        f(a, ans, nMx + 1, mx, d + 1);
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n), ans(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int mx = 0;
        for(int i = 1; i < n; i++)
            if(a[i] > a[mx])
                mx = i;

        if(mx != 0)
            f(a, ans, 0, mx - 1, 1);
        if(mx != n - 1)
            f(a, ans, mx + 1, n - 1, 1);

        for(int i = 0; i < n; i++)
            cout << ans[i] << ' ';
        
        cout << endl;
    }

    return 0;
}