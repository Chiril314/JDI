#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, t, a = "";
    cin >> s >> t;

    int cnt1 = 0, cnt2 = 0;
    bool flag = false;

    for(int i = 0; i < s.size(); i++)
        if(s[i] == t[i])
            a += s[i];
        else
            if(flag){
                flag = false;
                a += t[i];
                cnt2++;
            } else{
                flag = true;
                a += s[i];
                cnt1++;
            }

    if(cnt1 == cnt2)
        cout << a;
    else
        cout << "impossible";

    return 0;
}