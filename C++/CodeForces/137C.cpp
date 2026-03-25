#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int n, ans = 0, c = 0;
    cin >> n;
 
    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
 
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++){
        if(a[i].second < c)
            ans++;

        if(a[i].second > c)
            c = a[i].second;
    }
    
    cout << ans;
 
    return 0;
}