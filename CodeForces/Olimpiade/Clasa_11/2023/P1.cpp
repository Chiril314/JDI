#include <iostream>

using namespace std;

int main(){
    long long k, a1, a2, a3, b1, b2, b3, ans = -1;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> k;

    for(long long x = 0; x <= b1; x++)
        for(long long y = 0; y <= b2; y++){
            long long s = x * a1 + y * a2, r = k - s, z = r / a3;

            for(long long d = -2; d <= 2; d++){
                long long zz = z + d;
                if(zz < 0 || zz > b3) 
                    continue;

                long long total = s + zz * a3, diff = total - k;
                if(diff < 0) 
                    diff = -diff;

                if(ans == -1 || diff < ans)
                    ans = diff;
            }
        }

    cout << ans;

    return 0;
}