#include <iostream>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long a[m];
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long ans = 0;
    long long current = 1;

    for (int i = 0; i < m; i++) {
        if (a[i] >= current) {
            ans += a[i] - current;
        } else {
            ans += n - (current - a[i]);
        }
        current = a[i];
    }

    cout << ans;

    return 0;
}
