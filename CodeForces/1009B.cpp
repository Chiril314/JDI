#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, r = "", ans = "";
    cin >> s;

    int n = s.size(), cnt = 0;
    for(int i = 0; i < n; i++)
        if(s[i] == '1')
            cnt++;
        else
            r += s[i];

    bool flag = false;
    for(int i = 0; i < r.size(); i++){
        if(r[i] == '2'){
            ans = r.substr(0, i);
            while(cnt--)
                ans += '1';
            
            flag = true;
            ans += r.substr(i, r.size() - i + 1);
            break;
        }
    }

    if(!flag){
        cout << r;
        for(int i = 0; i < cnt; i++)
            cout << '1';
        return 0;
    } 

    if(cnt){
        for(int i = 0; i < cnt; i++)
            ans += '1';
    }
    
    cout << ans;

    return 0;
}