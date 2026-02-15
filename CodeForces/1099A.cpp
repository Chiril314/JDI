#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int w, h, a, b, c, d;
    cin >> w >> h >> a >> b >> c >> d;

    for(int i = h; i >= 0; i--){
        w += i;
        if(b == i)
            w = max(0, w - a);
        
        if(d == i)
            w = max(0, w - c);
    }

    cout << w;

    return 0;
}