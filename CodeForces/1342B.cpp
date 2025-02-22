#include <iostream>

using namespace std;

int main(){
    int T;
    cin >> T;

    while(T--){
        string t, ans = "";
        cin >> t;

        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < t.size(); i++)
            if(t[i] == '0')
                cnt0++;
            else    
                cnt1++;

        if(cnt1 == t.size() || cnt0 == t.size())
            cout << t << endl;
        else{
            char check;
            for(int i = 0; i < t.size(); i++){
                if(i == 0){
                    check = t[i];
                    ans += t[i];
                } else{
                    if(check == t[i] && t[i] == '1'){
                        ans += '0';
                        i--;
                        check = '0';
                    } else if(check == t[i] && t[i] == '0'){
                        ans += '1';
                        i--;
                        check = '1';
                    } else if(check != t[i]){
                        ans += t[i];
                        check = t[i];
                    }
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}