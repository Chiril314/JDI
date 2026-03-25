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
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    int ans = 1;
    for(int i = 1; i < n; i++)
        if(a[i].second < a[i - 1].second)
            ans++;    

    cout << ans;

    return 0;
}