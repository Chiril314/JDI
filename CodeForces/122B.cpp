#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt4 = 0, cnt7 = 0;
    for(int i = 0; i < s.size(); i++)
        if(s[i] == '4')
            cnt4++;
        else if(s[i] == '7')
            cnt7++;

    if(cnt4 > cnt7)
        cout << 4;
    else if(cnt4 < cnt7)
        cout << 7;
    else if(cnt4 == cnt7 && cnt4 != 0)
        cout << 4;
    else
        cout << -1;

    return 0;
}