#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0;
    cin >> n;

    vector<long long> a(n);
    multiset<long long> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        auto it = m.upper_bound(a[i]);
        if(it == m.end())
            ans++;
        else
            m.erase(it);
        
        m.insert(a[i]);
    }

    cout << ans << endl;

    return 0;
}