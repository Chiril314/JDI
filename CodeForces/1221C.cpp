#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int c, m, x;
        cin >> c >> m >> x;

        int ans = min({(c + m + x) / 3, c, m});
        cout << ans << endl;
    }

    return 0;
}