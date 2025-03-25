#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, int>> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    sort(a.begin(), a.end());

    vector<int> ans;
    for(int i = 0; i < n; i++){
        int d = a[i].first, l = a[i].second;

        bool placed = false;
        for(int j = 0; j < ans.size(); j++){
            if(ans[j] < l){
                ans[j] = l; 
                placed = true;
                break;
            }
        }

        if(!placed)
            ans.push_back(l);
    }

    cout << ans.size();

    return 0;
}