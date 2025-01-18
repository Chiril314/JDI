#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;

    int a[n]; 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n);

    double gap = 0;
    for (int i = 1; i < n; i++) {
        gap = max(gap, double(a[i] - a[i - 1]) / 2.0);
    }

    double start = a[0];      
    double end = l - a[n - 1]; 

    double result = max(gap, max(start, end));

    cout.precision(9);
    cout << fixed << result;

    return 0;
}