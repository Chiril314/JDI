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

        int s1 = 0, s2 = 0, ans = 0;
        for(int i = 0; i < s.size(); i++)
            if(s[i] == '(')
                s1++;
            else if(s[i] == '[')
                s2++;
            else if(s[i] == ')' && s1){
                s1--;
                ans++;
            } else if(s[i] == ']' && s2){
                s2--;
                ans++;
            }

        cout << ans << endl;
    }

    return 0;
}