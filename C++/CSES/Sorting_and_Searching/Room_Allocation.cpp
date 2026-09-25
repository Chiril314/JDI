#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, lastId = 1;
    cin >> n; 

    vector<pair<pair<int, int>, int>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first.first >> a[i].first.second;
        a[i].second = i;
    }   
    
    sort(a.begin(), a.end());
    vector<pair<int, int>> ans(n);
    
    ans[0].second = 1;
    for(int i = 0; i < n; i++)
        ans[i].first = a[i].second;

    multiset<pair<int, int>> values;
    values.insert({a[0].first.second, 1});

    for(int i = 1; i < n; i++){
        if(a[i].first.first > values.begin()->first){
            auto firstValue = values.begin();
            values.insert({a[i].first.second, firstValue->second});
            ans[i].second = firstValue->second;
            values.erase(firstValue);
        } else{
            lastId++;
            ans[i].second = lastId;
            values.insert({a[i].first.second, lastId});
        }
    }

    sort(ans.begin(), ans.end());
    
    cout << lastId << "\n";
    for(int i = 0; i < n; i++)
        cout << ans[i].second << ' ';

    return 0;
}