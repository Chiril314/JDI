#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        for(int i = 0; i < n; i++)
            if(s[i] != '?' && s[i % k] == '?')
                s[i % k] = s[i];

        bool flag = true;
        for(int i = 0; i < n; i++)
            if(s[i] != '?' && s[i % k] != '?' && s[i] != s[i % k])
                flag = false;

        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < k; i++){
            cnt1 += (s[i] == '1');
            cnt0 += (s[i] == '0');
        }

        if(flag && cnt0 <= k / 2 && cnt1 <= k / 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}