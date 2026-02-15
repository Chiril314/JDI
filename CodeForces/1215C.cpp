#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s, t;
    cin >> s >> t;

    vector<int> a, b;
    for(int i = 0; i < n; i++)
        if(s[i] == 'a' && t[i] == 'b')
            a.push_back(i);
        else if(s[i] == 'b' && t[i] == 'a')
            b.push_back(i);
    
    if(int(a.size()) % 2 != int(b.size()) % 2){
        cout << -1;
        return 0;
    }

    vector<pair<int, int>> ans;
    for(int i = 0; i < int(a.size()) - 1; i += 2)
        ans.push_back({a[i] + 1, a[i + 1] + 1});

    for(int i = 0; i < int(b.size()) - 1; i += 2)
        ans.push_back({b[i] + 1, b[i + 1] + 1});

    if(int(a.size()) % 2 == 1){
        ans.push_back({a.back() + 1, a.back() + 1});
        ans.push_back({a.back() + 1, b.back() + 1});
    }
    
    cout << int(ans.size());
    for(int i = 0; i < int(ans.size()); i++)
        cout << endl << ans[i].first << ' ' << ans[i].second;

    return 0;
}