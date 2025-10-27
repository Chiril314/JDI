#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, minr = 1e9, maxl = -1e9;
    cin >> n;

    vector<int> l(n), r(n);
    for(int i = 0; i < n; i++){
        cin >> l[i] >> r[i];
        minr = min(minr, r[i]);
        maxl = max(maxl, l[i]);
    }

    int m;
    cin >> m;

    int ans = 0;
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        if(a > minr)
            ans = max(ans, a - minr);
        if(b < maxl)
            ans = max(ans, maxl - b);
    }

    cout << ans;    

    return 0;
}