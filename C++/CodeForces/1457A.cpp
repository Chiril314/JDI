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
        long long n, m, r, c;
        cin >> n >> m >> r >> c;

        cout << max({n - r + m - c, r + c - 2, n - r - 1 + c, r - 1 + m - c}) << endl;
    }

    return 0;
}