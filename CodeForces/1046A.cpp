#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x[100000], r[100000], q[100000];

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> r[i] >> q[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (q[j] > q[j + 1] || (q[j] == q[j + 1] && x[j] > x[j + 1])) {
                int temp = q[j];
                q[j] = q[j + 1];
                q[j + 1] = temp;

                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;

                temp = r[j];
                r[j] = r[j + 1];
                r[j + 1] = temp;
            }
        }
    }

    int cnt = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (q[j] - q[i] > k) {
                break;
            }

            int left1 = x[i] - r[i];
            int right1 = x[i] + r[i];
            int left2 = x[j] - r[j];
            int right2 = x[j] + r[j];

            if (max(left1, left2) <= min(right1, right2)) {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}