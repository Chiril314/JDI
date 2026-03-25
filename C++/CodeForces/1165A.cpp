#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x, y, ans = 0;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    for(int i = n - x; i < n; i++)
        if(i == n - 1 - y && s[i] != '1')
            ans++;
        else if(i != n - 1 - y && s[i] != '0')
            ans++;

    cout << ans;

    return 0;
}