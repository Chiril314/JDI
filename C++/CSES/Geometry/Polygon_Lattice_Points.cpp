#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

struct point{
    long long x, y;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<point> poly(n);
    for(int i = 0; i < n; i++)
        cin >> poly[i].x >> poly[i].y;

    long long area = 0, ans = 0;
    for(int i = 0; i < n; i++){
        int j = (i + 1) % n;
        area += poly[i].x * poly[j].y - poly[i].y * poly[j].x;
        ans += gcd(abs(poly[i].x - poly[j].x), abs(poly[i].y - poly[j].y));
    }

    if(area < 0)
        area = -area;

    cout << (area - ans + 2) / 2 << ' ' << ans;

    return 0;
}