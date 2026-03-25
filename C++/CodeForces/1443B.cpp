#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        long long a, b, cnt = 0, ans = 0;
        cin >> a >> b;

        string s;
        cin >> s;

        bool flag = false;
        for(long long i = 0; i < s.size(); i++)
            if(s[i] == '0' && flag)
                cnt++;
            else if(s[i] == '1'){
                if(!flag){
                    flag = true;
                    ans += a;
                    continue;
                }

                if(cnt * b <= a)
                    ans += cnt * b;
                else
                    ans += a;
                
                cnt = 0;
            }

        cout << ans << endl;
    }

    return 0;
}