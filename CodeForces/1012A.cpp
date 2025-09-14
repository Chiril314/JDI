#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n;
    cin >> n;

    vector<long long> a(2 * n);
    for(long long i = 0; i < 2 * n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    
    if(n == 1){
        cout << 0;
        return 0;
    }

    long long check = 1e10;
    for(long long i = 0; i < n; i++)
        check = min(check, a[i + n - 1] - a[i]);

    long long ans = min((a[n - 1] - a[0]) * (a[2 * n - 1] - a[n]), check * (a[2 * n - 1] - a[0]));
    cout << ans;

    return 0;
}