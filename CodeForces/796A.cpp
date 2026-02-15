#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    m--;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        if(!a[i])
            continue;

        if(a[i] <= k)
            ans = min(ans, abs(i - m) * 10);
    }

    cout << ans;

    return 0;
}