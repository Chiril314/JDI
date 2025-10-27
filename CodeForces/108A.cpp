#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    int h = (s[0] - '0') * 10 + s[1] - '0', m = (s[3] - '0') * 10 + s[4] - '0';
    while(true){
        m++;
        if(m == 60){
            m = 0;
            h++;
        } 

        if(h == 24)
            h = 0;

        string a = to_string(h), b = to_string(m);
        if(a.size() == 1)
            a.insert(a.begin(), '0');

        if(b.size() == 1)
            b.insert(b.begin(), '0');

        if(a[0] == b[1] && a[1] == b[0]){
            cout << a << ':' << b;
            return 0;
        }
    }

    return 0;
}