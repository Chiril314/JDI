#include <iostream>
#include <algorithm>
using namespace std;

struct point {
    long long x, y;
};

long double cross(point a, point b, point c){
    return (long double)(b.x - a.x) * (c.y - a.y) - (long double)(b.y - a.y) * (c.x - a.x);
}

bool onSegment(point a, point b, point p){
    return cross(a, b, p) == 0 && min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x) && min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

bool intersect(point a, point b, point c, point d){
    long double c1 = cross(a, b, c);
    long double c2 = cross(a, b, d);
    long double c3 = cross(c, d, a);
    long double c4 = cross(c, d, b);

    if(onSegment(a, b, c)) 
        return true;
    if(onSegment(a, b, d)) 
        return true;
    if(onSegment(c, d, a)) 
        return true;
    if(onSegment(c, d, b)) 
        return true;

    bool opposite1 = (c1 > 0 && c2 < 0) || (c1 < 0 && c2 > 0);
    bool opposite2 = (c3 > 0 && c4 < 0) || (c3 < 0 && c4 > 0);

    return opposite1 && opposite2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        point p1, p2, p3, p4;

        cin >> p1.x >> p1.y >> p2.x >> p2.y >> p3.x >> p3.y >> p4.x >> p4.y;

        cout << (intersect(p1, p2, p3, p4) ? "YES\n" : "NO\n");
    }

    return 0;
}