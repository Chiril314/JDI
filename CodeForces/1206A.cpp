#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x;

    cin >> n;
    bool A[10001] = {0}; 
    for (int i = 0; i < n; i++) {
        cin >> x;
        A[x] = true;
    }
  
    cin >> m;
    bool B[10001] = {0}; 
    for (int i = 0; i < m; i++) {
        cin >> x;
        B[x] = true;
    }

    for (int i = 1; i <= 10000; i++) {
        if (A[i]) {
            for (int j = 1; j <= 10000; j++) {
                if (B[j] && !A[i + j] && !B[i + j]) {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}