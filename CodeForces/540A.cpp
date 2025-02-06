#include <iostream>

using namespace std;

int value(char s){
    int ans;
    if(s == '0'){
        return 0;
    } else if(s == '1'){
        return 1;
    } else if(s == '2'){
        return 2;
    } else if(s == '3'){
        return 3;
    } else if(s == '4'){
        return 4;
    } else if(s == '5'){
        return 5;
    } else if(s == '6'){
        return 6;
    } else if(s == '7'){
        return 7;
    } else if(s == '8'){
        return 8;
    } else if(s == '9'){
        return 9;
    }

    return 0;
}

int main(){
    int n, check1, check2;
    string s, t;
    cin >> n >> s >> t;

    int ans = 0;
    for(int i = 0; i < n; i++){
        check1 = value(s[i]);
        check2 = value(t[i]);

        int x = abs(check1 - check2), y = abs(10 + check1 - check2), z = abs(10 + check2 - check1);
        int diff = min(x, min(y, z));
        ans += diff;
    }

    cout << ans;

    return 0;
}