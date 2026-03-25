#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> c1(n + 1, 0), c2(n + 1, 0);
    for(int i = 0; i < n; i++){
        c1[i + 1] = c1[i];
        c2[i + 1] = c2[i];
        if(i % 2 == 0)
            c1[i + 1] += a[i];
        else
            c2[i + 1] += a[i];
    }

    int ans = 0;
    for(int i = 0; i < n; i++){
        long long lc1 = c1[i], lc2 = c2[i], rc1 = c2[n] - c2[i + 1], rc2 = c1[n] - c1[i + 1];
        if(lc1 + rc1 == lc2 + rc2)
            ans++;
    }

    cout << ans;

    return 0;
}