#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans[n];

    for (int i = 0; i <= n; i++){
        ans[i] = -1;
    }
        ans[0] = 0;

    for (int i = 1; i <= n; i++){
        if (i >= a && ans[i - a] != -1){
            ans[i] = max(ans[i], ans[i - a] + 1);
        }
        if (i >= b && ans[i - b] != -1){
            ans[i] = max(ans[i], ans[i - b] + 1);
        }
        if (i >= c && ans[i - c] != -1){
            ans[i] = max(ans[i], ans[i - c] + 1);
        }
    }

    cout << ans[n];
    return 0;
}