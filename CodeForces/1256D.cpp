#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long n, k, cnt = 0;
        cin >> n >> k;
        
        string s, ans = "";
        cin >> s;

        bool flag = false;
        for(int i = 0; i < n; i++)
            if(s[i] == '0')
                if(cnt <= k){
                    k -= cnt;
                    ans += '0';
                } else{
                    ans += string(cnt - k, '1');
                    ans += '0';
                    ans += string(k, '1');
                    ans += s.substr(i + 1);
                    cout << ans << endl;
                    flag = true;
                    break;
                }
            else
                cnt++;

        if(flag)
            continue;

        ans += string(cnt, '1');
        cout << ans << endl;    
    }

    return 0;
}