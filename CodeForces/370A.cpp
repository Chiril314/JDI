#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    int ans1 = 0, ans2 = 0, ans3 = 0;
    if(r1 == r2 || c1 == c2)
        ans1 = 1;
    else
        ans1 = 2;
    
    if (abs(r1 - r2) == abs(c1 - c2))
        ans2 = 1;
    else if ((r1 + c1) % 2 == (r2 + c2) % 2)
        ans2 = 2;
    else
        ans2 = 0;

    ans3 = max(abs(r1 - r2), abs(c1 - c2));
    cout << ans1 << ' ' << ans2 << ' ' << ans3;

    return 0;
}