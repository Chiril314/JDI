#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<int> cnt(26, 0);
    vector<bool> check(n, false);

    for(int i = 0; i < s.size(); i++)
        cnt[s[i] - 'a']++;

    for(int i = 0; i < 26 && k > 0; i++)
        for(int j = 0; j < n && k > 0; j++)
            if(s[j] - 'a' == i && cnt[i] > 0){
                check[j] = true;
                cnt[i]--;
                k--;
            }

    string ans;
    for(int i = 0; i < n; i++)
        if(!check[i])
            ans += s[i];

    cout << ans;

    return 0;
}