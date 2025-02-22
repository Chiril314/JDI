#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.')
            ans += '0';
        else if(s.substr(i, 2) == "-."){
            ans += '1';
            i++;
        } else if(s.substr(i, 2) == "--"){
            ans += '2';
            i++;
        }
    }

    cout << ans;

    return 0;
}