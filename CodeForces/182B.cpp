#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int d, n;
    cin >> d >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int ans = 0;
    for(int i = 0; i < n - 1; i++)
        ans += (d - a[i]);

    cout << ans;

    return 0;
}