#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<string> s(n);
    set<string> c;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        vector<bool> v(26, 0);
        string k = "";
        for(char f : s[i])
            if(!v[f - 'a']){
                v[f - 'a'] = true;
                k += f;
            }

        sort(k.begin(), k.end());
        c.insert(k);
    }

    cout << c.size();

    return 0;
}