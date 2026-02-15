#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0;
    cin >> n;

    n = abs(n);
    while((ans * (ans + 1) / 2) < n)
        ans++;

    while(((ans * (ans + 1) / 2) - n) % 2 == 1)
        ans++;

    cout << ans;

    return 0;
}