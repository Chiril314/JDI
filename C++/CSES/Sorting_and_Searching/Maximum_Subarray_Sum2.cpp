#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, a, b;
    cin >> n >> a >> b;

    vector<long long> values(n), pref(n + 1);
    for(long long i = 0; i < n; i++){
        cin >> values[i];
        pref[i + 1] = pref[i] + values[i];
    }

    multiset<long long> s;
    long long ans = -1e18;

    for(long long r = a; r <= n; r++){
        s.insert(pref[r - a]);
        if(r - b - 1 >= 0){
            auto it = s.find(pref[r - b - 1]);
            s.erase(it);
        }

        ans = max(ans, pref[r] - *s.begin());
    }

    cout << ans;

    return 0;
}