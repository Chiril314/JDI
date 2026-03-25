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

        int n = s.size(), cnt = 0, ans = 0, flag = 0;
        for(int i = 0; i < n; i++)
            if(i == 0){
                if(s[i] == '<')
                    flag = 1;
                else if(s[i] == '*')
                    flag = 0;
                else
                    flag = 2;

                cnt = 1;
            } else{
                if(s[i] == '<'){
                    if(flag == 1)
                        cnt++;
                    else{
                        flag = -1;
                        break;
                    }
                } else if(s[i] == '*'){
                    if(flag == 1){
                        cnt++;
                        flag = 0;
                    } else{
                        flag = -1;
                        break;
                    }
                } else{
                    if(flag == 0){
                        flag = 2;
                        ans = max(ans, cnt);
                        cnt = 2;
                    } else if(flag == 1){
                        flag = 2;
                        ans = max(ans, cnt);
                        cnt = 1;
                    } else
                        cnt++;
                }
            }

        if(flag == -1)
            cout << -1 << endl;
        else{
            ans = max(ans, cnt);
            cout << ans << endl;
        }
    }

    return 0;
}