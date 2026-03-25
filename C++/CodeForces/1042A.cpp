#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int mx = a[n - 1] + m, mn = 0;
    while(m--){
        sort(a.begin(), a.end());
        a[0]++;
    }

    for(int i = 0; i < n; i++)
        mn = max(mn, a[i]);
    
    cout << mn << ' ' << mx;

    return 0;
}