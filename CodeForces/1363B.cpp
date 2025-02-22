#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;

        int ans = min(cnt0, cnt1);
        int check0 = 0, check1 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                check0++;
                cnt0--;
            } else{
                check1++;
                cnt1--;
            }

            ans = min(ans, check1 + cnt0);
            ans = min(ans, check0 + cnt1);
        }

        cout << ans << endl;
    }

    return 0;
}