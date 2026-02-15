#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 1;
    cin >> n;

    unordered_map<string, int> s;
    s["polycarp"] = 1;

    for(int i = 0; i < n; i++){
        string a, b, c;
        cin >> a >> b >> c;

        for(int j = 0; j < a.size(); j++)
            if(a[j] >= 'A' && a[j] <= 'Z')
                a[j] = a[j] - 'A' + 'a';

        for(int j = 0; j < c.size(); j++)
            if(c[j] >= 'A' && c[j] <= 'Z')
                c[j] = c[j] - 'A' + 'a';
            
        s[a] = s[c] + 1;
        ans = max(ans, s[a]);
    }

    cout << ans;

    return 0;
}