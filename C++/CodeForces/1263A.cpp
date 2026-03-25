#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long r, g, b;
        cin >> r >> g >> b;

        long long mx = max({r, g, b}), s = r + g + b;
        cout << min(s - mx, s / 2) << endl;
    }

    return 0;
}