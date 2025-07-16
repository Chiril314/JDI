#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> both, a, b;
    for(int i = 0; i < n; i++){
        int t, x, y;
        cin >> t >> x >> y;
        if(x == 1 && y == 1)
            both.push_back(t);
        else if(x == 1)
            a.push_back(t);
        else if(y == 1)
            b.push_back(t);
    }

    sort(both.begin(), both.end());
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<long long> both_p(1, 0);
    for(int i = 0; i < both.size(); i++)
        both_p.push_back(both_p.back() + both[i]);

    vector<long long> a_p(1, 0);
    for(int i = 0; i < a.size(); i++)
        a_p.push_back(a_p.back() + a[i]);

    vector<long long> b_p(1, 0);
    for(int i = 0; i < b.size(); i++)
        b_p.push_back(b_p.back() + b[i]);

    int x;
    if(both.size() < k)
        x = both.size();
    else
        x = k;

    long long ans = 1e18;
    for(int i = 0; i <= x; i++){
        int y = k - i;
        if(y <= a.size() && y <= b.size()){
            long long z = both_p[i] + a_p[y] + b_p[y];
            if(z < ans)
                ans = z;
        }
    }

    if(ans == 1e18)
        cout << -1;
    else
        cout << ans;

    return 0;
}