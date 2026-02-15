#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, m, k, r, c;
    cin >> n >> m >> k;
    
    vector<long long> a(m, -1);

    for(long long i = 0; i < n; i++){
        cin >> r >> c;
        if(r - 1 < m && r >= 0 && a[r - 1] == -1)
            a[r - 1] = c;
        else if(r - 1 < m && r >= 0 && a[r - 1] != -1)
            a[r - 1] = min(a[r - 1], c);
    }

    long long ans = 0;
    for(long long i = 0; i < m; i++)
        if(a[i] == -1)
            continue;
        else
            ans += a[i];

    cout << min(ans, k);
    
    return 0;
}