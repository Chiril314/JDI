#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    vector<int> cnt(26);
    int n = (int)s.size();
    for(int i = 0; i < n; i++)
        cnt[s[i] - 'A']++;

    int mx = *max_element(cnt.begin(), cnt.end());
    if(mx > (n + 1) / 2){
        cout << -1;
        return 0;
    }

    string ans;
    ans.reserve(n);

    int prev = -1, rem = n;
    for(int pos = 0; pos < n; pos++){
        bool flag = false;
        for(int c = 0; c < 26; c++){
            if(cnt[c] == 0 || c == prev)
                continue;

            cnt[c]--;
            rem--;

            int cur_mx = *max_element(cnt.begin(), cnt.end());
            if(cur_mx <= (rem + 1) / 2){
                ans += char('A' + c);
                prev = c;
                flag = true;
                break;
            }

            cnt[c]++;
            rem++;
        }

        if(!flag){
            cout << -1;
            return 0;
        }
    }

    cout << ans;

    return 0;
}