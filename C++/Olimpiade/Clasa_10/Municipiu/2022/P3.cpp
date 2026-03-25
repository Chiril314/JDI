#include <iostream>
#include <string>

using namespace std;

int romanValue(char s){
    if(s == 'I'){
        return 1;
    } else if(s == 'V'){
        return 5;
    } else if(s == 'X'){
        return 10;
    } else if(s == 'L'){
        return 50;
    } else if(s == 'C'){
        return 100;
    } else if(s == 'D'){
        return 500;
    } else if(s == 'M'){
        return 1000;
    }

    return 0;
}


int main(){
    int t;
    cin >> t;

    cout << t << endl;
    while(t--){
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        int check = romanValue(s[0]), ans = 0;
        ans += romanValue(s[0]);

        for(int i = 1; i < s.size(); i++){
            if(check <= romanValue(s[i])){
                ans += romanValue(s[i]);
                check = romanValue(s[i]);
            } else if(check > romanValue(s[i])){
                ans -= romanValue(s[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}