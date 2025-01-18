#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxHeight = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[maxHeight]) {
            maxHeight = i;
        }
    }

    int minHeight = n - 1;
    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[minHeight]) {
            minHeight = i;
        }
    }

    int ans = maxHeight + (n - 1 - minHeight);

    if (maxHeight > minHeight) {
        ans--;
    }

    cout << ans;

    return 0;
}
