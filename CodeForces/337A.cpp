#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int f[m];
    for(int i = 0; i < m; i++) {
        cin >> f[i];
    }

    sort(f, f + m);

    int check = 1000000;

    for(int i = 0; i <= m - n; i++) {
        int diff = f[i + n - 1] - f[i];
        check = min(check, diff);
    }

    cout << check;

    return 0;
}
