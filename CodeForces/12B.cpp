#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s, b;
    cin >> s >> b;

    sort(s.begin(), s.end());

    char c = '9';
    if(s[s.size() - 1] == '0'){
        if(b == "0"){
            cout << "OK";
            return 0;
        }

        cout << "WRONG_ANSWER";
        return 0;
    }

    for(int i = 0; i < s.size(); i++)
        if(s[i] != '0'){
            c = s[i];
            s[i] = '%';
            break;
        }

    string k = "";
    k += c;

    for(int i = 0; i < s.size(); i++)
        if(s[i] != '%')
            k += s[i];

    cout << (k == b ? "OK" : "WRONG_ANSWER");

    return 0;
}