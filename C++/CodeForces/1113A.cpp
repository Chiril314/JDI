#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, v;
    cin >> n >> v;

    int a = v, ans = 0;
    v = 0;
    for(int i = 1; i <= n; i++){
        if(n - i > v){
            int b = n - i;
            ans += min(b * i, (a - v) * i);
            v = min(a, b * i + v);
        }
        v--;
    }

    cout << ans;

    return 0;
}