#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[3] = {0, 0, 0};

    for(int i = 0; i < s.size(); i += 2){
        if(s[i] == '1') cnt[0]++;
        else if(s[i] == '2') cnt[1]++;
        else if(s[i] == '3') cnt[2]++;
    }

    string ans;
    for(int i = 0; i < 3; i++){
        while(cnt[i] > 0){
            ans += to_string(i + 1);
            cnt[i]--;
            if(cnt[0] > 0 || cnt[1] > 0 || cnt[2] > 0){
                ans += "+";
            }
        }
    } 

    cout << ans;

    return 0;
}