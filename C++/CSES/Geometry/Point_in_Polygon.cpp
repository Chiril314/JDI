#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct point{
    long long x, y;
};

long long cross(point a, point b, point p){
    return (long long)(b.x - a.x) * (p.y - a.y) - (long long)(b.y - a.y) * (p.x - a.x);
}

bool onSegment(point a, point b, point p){
    if(cross(a, b, p) != 0)
        return false;

    return min(a.x, b.x) <= p.x && p.x <= max(a.x, b.x) && min(a.y, b.y) <= p.y && p.y <= max(a.y, b.y);
}

string pointInPolygon(vector<point> &poly, point p){
    int n = poly.size();

    bool inside = false;
    for(int i = 0; i < n; i++){
        point a = poly[i], b = poly[(i + 1) % n];
        if(onSegment(a, b, p))
            return "BOUNDARY";

        if((a.y > p.y) != (b.y > p.y)){
            long long c = cross(a, b, p);
            if((b.y > a.y && c > 0) || (b.y < a.y && c < 0))
                inside = !inside;
        }
    }

    return inside ? "INSIDE" : "OUTSIDE";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<point> poly(n);
    for(int i = 0; i < n; i++)
        cin >> poly[i].x >> poly[i].y;

    while(q--){
        point p;
        cin >> p.x >> p.y;

        cout << pointInPolygon(poly, p) << "\n";
    }

    return 0;
}