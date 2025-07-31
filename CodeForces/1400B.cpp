#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t;
    cin >> t;

    while(t--){
        long long p, f;
        cin >> p >> f;

        long long cnts, cntw;
        cin >> cnts >> cntw;

        long long s, w;
        cin >> s >> w;

        if(s > w){
            swap(s, w);
            swap(cnts, cntw);
        }

        long long ans = 0;
        for(long long i = 0; i <= cnts; i++){
            long long np = p, nf = f, nans = i, ncnts = cnts, ncntw = cntw;
            if(i * s <= np){
                np -= i * s;
                ncnts -= i;

                long long ccntw = min(np / w, ncntw);
                ncntw -= ccntw;
                np -= w * ccntw;
                nans += ccntw;

                long long ccnts = min(nf / s, ncnts);
                ncnts -= ccnts;
                nf -= s * ccnts;
                nans += ccnts;

                ccntw = min(nf / w, ncntw);
                ncntw -= ccntw;
                nf -= w * ccntw;
                nans += ccntw;

                ans = max(ans, nans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}