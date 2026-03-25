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

    vector<pair<int, int>> cnt(m, {0, 0});
    for(int i = 0; i < m; i++)
        cnt[i].second = i + 1;
    
    while(n--){
        int x;
        cin >> x;

        for(int i = 0; i < x; i++){
            int y;
            cin >> y;
            cnt[y - 1].first++;
        }
    }

    sort(cnt.rbegin(), cnt.rend());

    vector<int> ans;
    for(int i = 0; i < m; i++)
        if(cnt[i].first == cnt[0].first)
            ans.push_back(cnt[i].second);
    
    sort(ans.begin(), ans.end());
    for(int val : ans)
        cout << val << ' ';

    return 0;
}