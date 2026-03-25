#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        ans = max(ans, min((x - 1), (1000000 - x)));
    }

    cout << ans;

    return 0;
}