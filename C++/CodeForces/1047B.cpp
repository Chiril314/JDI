#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long x[n], y[n], ans[n];
    for(long long i = 0; i < n; i++){
        cin >> x[i] >> y[i];

        ans[i] = x[i] + y[i];
    }

    sort(ans, ans + n, greater<int>());
    cout << ans[0];

    return 0;
}