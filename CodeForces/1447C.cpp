#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, w, s = 0;
        cin >> n >> w;

        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i].first;
            v[i].second = i;
        }

        sort(v.begin(), v.end());

        vector<int> ans;
        for(int i = n - 1; i >= 0; i--)
            if(s + v[i].first <= w){
                s += v[i].first;
                ans.push_back(v[i].second);
            }
        
        if(s >= (w + 1) / 2){
            cout << ans.size() << endl;
            for(int i = 0; i < ans.size(); i++)
                cout << ans[i] + 1 << ' ';

            cout << endl;
        } else
            cout << -1 << endl;
    }

    return 0;
}