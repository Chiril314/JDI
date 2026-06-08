#include <iostream>
#include <vector>
#include <algorithm>
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

    vector<point> p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i].x >> p[i].y;

    long long area = 0;
    for(int i = 0; i < n; i++){
        int j = (i + 1) % n;
        area += (long long)p[i].x * p[j].y - (long long)p[i].y * p[j].x;
    }

    if(area < 0)
        area = -area;
    cout << area;

    return 0;
}