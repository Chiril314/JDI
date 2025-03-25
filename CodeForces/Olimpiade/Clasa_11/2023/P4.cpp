#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long c0 = 1, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0, c7 = 0;

    int m = 1e9 + 7;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'O') 
            c1 = (c1 + c0) % m;
        if(s[i] == 'R') 
            c2 = (c2 + c1) % m;
        if(s[i] == 'I') 
            c3 = (c3 + c2) % m;
        if(s[i] == '2')
            c4 = (c4 + c3) % m;
        if(s[i] == '0') 
            c5 = (c5 + c4) % m;
        if(s[i] == '2') 
            c6 = (c6 + c5) % m;
        if(s[i] == '3') 
            c7 = (c7 + c6) % m;
    }

    cout << c7;

    return 0;
}
