#include <iostream>

using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    const int max = 100000;
    bool a[max + 1] = {false};

    for (int i = k; i <= d; i += k) a[i] = true;
    for (int i = l; i <= d; i += l) a[i] = true;
    for (int i = m; i <= d; i += m) a[i] = true;
    for (int i = n; i <= d; i += n) a[i] = true;

    int result = 0;
    for (int i = 1; i <= d; i++) {
        if (a[i]) result++;
    }

    cout << result;

    return 0;
}