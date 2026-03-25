#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    long long a, b, c, index;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'x' && i == 0){
            b = stoi(s.substr(i + 1, s.size() - 1));
            a = 1;
        } else if(s[i] == 'x' && i != 0){            
            b = stoi(s.substr(i + 1, s.size() - 1));
            a = stoi(s.substr(0, i));
        }

        if(s[i] == '='){
            c = stoi(s.substr(i + 1, s.size() - 1));
            break;
        }
    }

    c -= b;
    c /= a;

    cout << c;

    return 0;
}