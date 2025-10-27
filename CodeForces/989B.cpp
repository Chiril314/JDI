#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, p, f = 0;
    cin >> n >> p;

    string s;
    cin >> s;

    for(int i = 0; i + p < n; i++){
        if(s[i] == '.' && s[i + p] == '.'){
            s[i] = '1';
            s[i + p] = '0';
            f = 1;
        } else if(s[i] == '.'){
            if(s[i + p] == '0')
                s[i] = '1';
            else
                s[i] = '0';
            f = 1;
        } else if(s[i + p] == '.'){
            if(s[i] == '0')
                s[i + p] = '1';
            else
                s[i + p] = '0';
            f = 1;
        } else if(s[i] != s[i + p])
            f = 1;
    }

    if(f == 0)
        cout << "No";
    else{
        for(int i = 0; i < n; i++)
            if(s[i] == '.')
                s[i] = '0';
        cout << s;
    }

    return 0;
}