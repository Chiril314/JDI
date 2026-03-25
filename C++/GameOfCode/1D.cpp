#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, e, ans = 0, a = 0;
    cin >> n >> e;

    int r = n - 1;
    for(int i = 0; i < n; i++){
        if(a < r){
            int x = min(e - a, r);
            ans += x * (i + 1);
            a += x;         
        }

        a--;
        r--;
    }

    cout << ans;

    return 0;
}