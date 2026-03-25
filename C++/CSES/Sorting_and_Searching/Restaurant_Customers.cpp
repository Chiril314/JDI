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

    vector<pair<int, bool>> a(2 * n);
    for(int i = 0; i < 2 * n; i += 2){
        cin >> a[i].first >> a[i + 1].first;
        a[i].second = 0;
        a[i + 1].second = 1;
    }

    sort(a.begin(), a.end());

    int ans = 0, curr = 0;
    for(int i = 0; i < 2 * n; i++)
        if(!a[i].second)
            curr++;
        else{
            ans = max(ans, curr);
            curr--;
        }

    cout << ans;

    return 0;
}