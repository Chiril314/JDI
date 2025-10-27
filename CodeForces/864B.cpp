#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    string s;
    cin >> s;

    set<char> a;
    for(int i = 0; i < n; i++)
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ans = max(ans, int(a.size()));
            a.clear();
        } else
            a.insert(s[i]);

    cout << max(ans, int(a.size()));

    return 0;
}