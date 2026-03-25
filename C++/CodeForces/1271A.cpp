#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b, c, d, e, f, ans = 0;
    cin >> a >> b >> c >> d >> e >> f;

    if(e >= f){
        ans = min(a, d);
        a -= ans;
        d -= ans;
        ans *= e;
        ans += min({b, c, d}) * f;
    } else{
        ans = min({b, c, d});
        d -= ans;
        c -= ans;
        b -= ans;
        ans *= f;
        ans += min(a, d) * e;
    }

    cout << ans;

    return 0;
}