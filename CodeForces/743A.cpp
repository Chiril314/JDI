#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, a, b;
    cin >> n >> a >> b;

    a--;
    b--;

    string s;
    cin >> s;

    if(s[a] == s[b]){
        cout << 0;
        return 0;
    }

    vector<int> va, vb;
    for(int i = 0; i < n; i++){
        if(s[i] == s[a])
            va.push_back(i);
        else
            vb.push_back(i);
    }

    int i = 0, j = 0, ans = INT_MAX;
    while(i < va.size() && j < vb.size()){
        ans = min(ans, abs(va[i] - vb[j]));
        if(va[i] < vb[j])
            i++;
        else
            j++;
    }

    cout << ans;

    return 0;
}