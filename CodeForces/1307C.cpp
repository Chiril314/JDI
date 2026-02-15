#include <iostream>
#include <vector>

using namespace std;

long long cnt1[26], cnt2[26][26];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int n = s.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 26; j++)
            cnt2[j][s[i] - 'a'] += cnt1[j];

        cnt1[s[i] - 'a']++;
    }

    long long ans = 0;
    for(int i = 0; i < 26; i++)
        ans = max(ans, cnt1[i]);

    for(int i = 0; i < 26; i++)
        for(int j = 0; j < 26; j++)
            ans = max(ans, cnt2[i][j]);

    cout << ans;

    return 0;
}