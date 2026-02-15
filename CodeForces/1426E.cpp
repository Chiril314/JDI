#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    int r1, s1, p1, r2, s2, p2;
    cin >> r1 >> s1 >> p1 >> r2 >> s2 >> p2;

    long long mx = min(r1, s2) + min(p1, r2) + min(s1, p2);
    long long mn = max(r1 + s2 - n, 0) + max(s1 + p2 - n, 0) + max(p1 + r2 - n, 0);
    cout << mn << ' ' << mx;

    return 0;
}