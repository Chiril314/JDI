#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    long long n;
    cin >> n;

    long long a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n, greater<int>());

    long long team[n / 2][2], ans = 0;
    for(long long i = 0; i < n; i += 2)
        for(long long j = i; j < 2 + i; j++)
            team[i / 2][j - i] = a[i + j - i];

    for(long long i = 0; i < n / 2; i++)
        ans += team[i][0] - team[i][1];

    cout << ans;

    return 0;
}