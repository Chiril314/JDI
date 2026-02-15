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
        int x, y;
        cin >> x >> y;

        x = abs(x);
        y = abs(y);

        cout << x + y + max(0, abs(x - y) - 1) << endl;
    }

    return 0;
}