#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int x;
        cin >> x;

        string ans = "";
        for(int i = 0; i < s.size(); i++)
            ans += '1';

        bool flag = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                if(i - x >= 0)
                    ans[i - x] = '0';
                if(i + x < s.size())
                    ans[i + x] = '0';
            }
        }

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                if(i - x >= 0)
                    if(ans[i - x] == '1')
                        continue;

                if(i + x < s.size())
                    if(ans[i + x] == '1')
                        continue;

                flag = false;
            }
        }

        if(flag)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}