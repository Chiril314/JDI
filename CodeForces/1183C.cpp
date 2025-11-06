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
        long long k, n, a, b;
        cin >> k >> n >> a >> b;

        if(k <= n * b){
            cout << -1 << endl;
            continue;
        }

        long long ans = (k - n * b - 1) / (a - b);
        cout << min(ans, n) << endl;
    }

    return 0;
}