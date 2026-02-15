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

    vector<vector<int>> ans(12);
    for(int i = 0; i < n; i++){
        int a, b;
        double c;
        cin >> a >> b >> c;

        if(c >= 9.00)
            ans[a - 1].push_back(b);
    }

    for(int i = 4; i < 12; i++){
        if(ans[i].size() > 0){
            cout << i + 1 << endl;
            sort(ans[i].begin(), ans[i].end());
        }

        for(int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << ' ';
        
        if(ans[i].size() > 0)
            cout << endl;
    }

    return 0;
}