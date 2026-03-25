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

    vector<int> p(n - 1);
    for(int i = 0; i < n - 1; i++)
        cin >> p[i];

    int x = p[n - 2];
    vector<int> ans;
    while(x != 1){
        ans.push_back(x);
        x = p[x - 2];
    }

    reverse(ans.begin(), ans.end());
    cout << 1;
    for(int i = 0; i < ans.size(); i++)
        cout << ' ' << ans[i];
    cout << ' ' << n; 

    return 0;
}