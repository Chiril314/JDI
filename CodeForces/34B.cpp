#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a + n);

    long long ans = 0, check = 0;
    for(long long i = 0; i < m; i++){
        check += a[i];
        ans = min(ans, check);
    }

    cout << abs(ans);

    return 0;
}