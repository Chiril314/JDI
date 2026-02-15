#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, h, m;
    cin >> n >> h >> m;

    vector<int> map(n, h);
    for(int k = 0; k < m; k++){
        int l, r, x;
        cin >> l >> r >> x;

        l--;
        r--;

        for(int i = l; i <= r; i++)
            map[i] = min(map[i], x);
    }

    long long ans = 0;
    for(int i = 0; i < n; i++)
        ans += (map[i] * map[i]);
    
    cout << ans;

    return 0;
}