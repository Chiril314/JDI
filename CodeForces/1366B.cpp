#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, x, m;
        cin >> n >> x >> m;

        x--;
        int l = n, r = 0, mnx = x, mxx = x;
        while(m--){
            int c, d;
            cin >> c >> d;

            c--;
            d--;

            if(mxx >= c && mnx <= d){
                l = min(l, c);
                mnx = l;
                r = max(r, d);
                mxx = r;
            }
        }

        cout << max(r - l, 0) + 1 << endl;
    }

    return 0;
}