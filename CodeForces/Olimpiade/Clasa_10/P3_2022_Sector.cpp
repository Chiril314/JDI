#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        if(s.substr(i, 2) == "++"){
            cout << "eroare";

            return 0;
        }

        if(s[i] == '1'){
            ans += 1;
        } else if(s[i] == '2'){
            ans += 2;
        } else if(s[i] == '3'){
            ans += 3;
        } else if(s[i] == '4'){
            ans += 4;
        } else if(s[i] == '5'){
            ans += 5;
        } else if(s[i] == '6'){
            ans += 6;
        } else if(s[i] == '7'){
            ans += 7;
        } else if(s[i] == '8'){
            ans += 8;
        } else if(s[i] == '9'){
            ans += 9;
        }
    }

    cout << ans;

    return 0;
}