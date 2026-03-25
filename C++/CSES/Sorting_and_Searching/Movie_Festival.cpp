#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].second >> a[i].first;
    
    sort(a.begin(), a.end());

    int ans = 1, last = a[0].first;
    for(int i = 1; i < n; i++)
        if(a[i].second >= last){
            ans++;
            last = a[i].first;
        }

    cout << ans;

    return 0;
}