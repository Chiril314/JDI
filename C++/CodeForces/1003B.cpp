#include <iostream>
#include <string>

using namespace std;

string cBS(int a, int b, int x){
    string s;
    char c;

    if(a >= b){
        c = '0';
        a--;
    } else{
        c = '1';
        b--;
    }

    s += c;
    for(int i = 0; i < x; i++){
        if(c == '0'){
            c = '1';
            b--;
        } else{
            c = '0';
            a--;
        }

        s += c;
    }

    string ans;
    for(int i = 0; i < s.size(); i++){
        char c = s[i];
        ans += c;

        if(c == '0' && a > 0){
            for(int j = 0; j < a; j++)
                ans += '0';
            a = 0;
        }

        if(c == '1' && b > 0){
            for(int j = 0; j < b; j++)
                ans += '1';
            b = 0;
        }
    }

    return ans;
}

int main(){
    int a, b, x;
    cin >> a >> b >> x;

    string ans = cBS(a, b, x);
    cout << ans;

    return 0;
}