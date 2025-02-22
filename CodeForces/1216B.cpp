#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        a[i].first = x;
        a[i].second = i + 1;
    }

    sort(a.rbegin(), a.rend());

    int ans = 1;
    for(int i = 1; i < n; i++)
        ans += (a[i].first * i) + 1;

    cout << ans << endl;
    for(int i = 0; i < n; i++)
        cout << a[i].second << ' ';
        

    return 0;
}