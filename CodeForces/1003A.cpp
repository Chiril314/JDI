#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    map<int, int> m;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        ans = max(ans, ++m[x]);
    }

    cout << ans;

    return 0;
}