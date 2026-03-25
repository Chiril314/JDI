#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, minx, maxx, miny, maxy, x, y;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> x >> y;
        if(i == 0){
            minx = x;
            maxx = x;
            miny = y;
            maxy = y;
        } else{
            minx = min(minx, x);
            maxx = max(maxx, x);
            miny = min(miny, y);
            maxy = max(maxy, y);
        }
    }

    long long ans = max(maxx - minx, maxy - miny);
    cout << ans * ans;

    return 0;
}