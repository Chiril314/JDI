#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, o = 0, t = 1;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());
    for(int i = 2; i < n; i++)
        if(max(a[i].first, a[o].first) > min(a[i].second, a[o].second))
            o = i;
        else if(max(a[i].first, a[t].first) > min(a[i].second, a[t].second))
            t = i;
        else{
            cout << "NO";
            return 0;
        }

    cout << "YES";

    return 0;
}