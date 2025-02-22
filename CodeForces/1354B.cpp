#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1')
                cnt1++;
            else if(s[i] == '2')
                cnt2++;
            else
                cnt3++;
        }

        if(min({cnt1, cnt2, cnt3}) == 0)
            cout << 0 << endl;
        else{
            int a, b, c;
            int check1 = 10e5, ans = 10e5, cnt = 0, n = s.size();
            bool check[3] = {false};
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    check[0] = true;
                    a = i;
                } else if(s[i] == '2'){
                    check[1] = true;
                    b = i;
                } else{
                    check[2] = true;
                    c = i;
                }

                if(check[0] && check[1] && check[2]){
                    check1 = max({a, b, c}) - min({a, b, c}) + 1;
                    ans = min(ans, check1);
                }
            }

            cout << ans << endl;
        }
    }

    return 0;
}