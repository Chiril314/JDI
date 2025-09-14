#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m, r;
    cin >> n >> m >> r;

    vector<int> a(n), b(m);
    int mn = 1e9, mx = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
        mx = max(mx, b[i]);
    }

    cout << max(r, r % mn + (r / mn) * mx);

    return 0;
}