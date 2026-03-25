#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    vector<string> a;
    for(int i = 1; i <= 9; i++){
        string s = to_string(1 * i);
        a.push_back(s);

        s = to_string(11 * i);
        a.push_back(s);

        s = to_string(111 * i);
        a.push_back(s);

        s = to_string(1111 * i);
        a.push_back(s);
    }

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = 0;
        for(int i = 0; a[i - 1] != s; i++)
            ans += a[i].size();

        cout << ans << endl;
    }

    return 0;
}