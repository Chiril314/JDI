#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<pair<long long, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end());

    int l = 0, r = n - 1;
    while(l < r){
        long long s = a[l].first + a[r].first;
        if(s == x){
            cout << a[l].second << ' ' << a[r].second;
            return 0;
        } else if(s < x)
            l++;
        else
            r--;
    }

    cout << "IMPOSSIBLE";

    return 0;
}