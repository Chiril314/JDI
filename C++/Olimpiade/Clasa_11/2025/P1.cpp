#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int j = min(n, m), ans = 0;
    for(int i = 0; i < j; i++)
        ans += a[i] * b[i];

    cout << ans;

    return 0;
}