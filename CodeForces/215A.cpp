#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int m;
    cin >> m;

    vector<int> b(m);
    for(int i = 0; i < m; i++)
        cin >> b[i];

    int mx = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(b[j] % a[i] == 0)
                mx = max(mx, b[j] / a[i]);

    int ans = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(b[j] % a[i] == 0 && b[j] / a[i] == mx)
                ans++;

    cout << ans;

    return 0;
}