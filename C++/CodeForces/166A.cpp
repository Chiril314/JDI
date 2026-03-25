#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k, ans = 0;
    cin >> n >> k;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;
    
    sort(a.begin(), a.end(), [](const pair<int, int> &x, const pair<int, int> &y){
        if(x.first != y.first)
            return x.first > y.first;  

        return x.second < y.second; 
    });

    pair<int, int> c = a[k - 1];
    for(int i = 0; i < n; i++)
        if(a[i] == c)
            ans++;
        
    cout << ans;

    return 0;
}