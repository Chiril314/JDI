#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, d, e;
    cin >> n >> d >> e;

    vector<long long> euro = {5 * e, 10 * e, 20 * e, 50 * e, 100 * e, 200 * e};

    long long ans = n % d;
    for(int i = 0; i < 6; i++){
        long long r = n, t = euro[i];
        while(r >= t){
            r -= t;
            ans = min(ans, r % d);
        }
    }

    cout << ans;

    return 0;
}