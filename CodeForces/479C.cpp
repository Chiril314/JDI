#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++)
        cin >> a[i] >> b[i];

    vector<vector<int>> pair(n);
    for(int i = 0; i < n; i++){
        pair[i].push_back(a[i]);
        pair[i].push_back(b[i]);
    }

    sort(pair.begin(), pair.end());

    int ans = -1;
    for(int i = 0; i < n; i++){
        if(ans <= pair[i][1])
            ans = pair[i][1];
        else
            ans = pair[i][0];
    }

    cout << ans;

    return 0;
}