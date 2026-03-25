#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, b;
    cin >> n >> b;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int r = b, ans = b;
    for(int i = 0; i < n - 1; i++){
        b = r;
        int s = b / a[i];
        b %= a[i];
        
        int mx = 0;
        for(int j = i + 1; j < n; j++)
            mx = max(mx, a[j] * s + b);
        ans = max(ans, mx);
    }

    cout << ans;

    return 0;
}