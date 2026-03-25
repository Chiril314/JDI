#include <iostream>

using namespace std;

int main(){
    int a1, a2, a3, a4;
    string s;
    cin >> a1 >> a2 >> a3 >> a4 >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            ans += a1;
        } else if(s[i] == '2'){
            ans += a2;
        } else if(s[i] == '3'){
            ans += a3;
        } else if(s[i] == '4'){
            ans += a4;
        }
    }

    cout << ans;

    return 0;
}