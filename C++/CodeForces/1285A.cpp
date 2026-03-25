#include <iostream>

using namespace std;

int main(){
    int n, cntL = 0, cntR = 0;
    cin >> n;

    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'L'){
            cntL++;
        } else if(s[i] == 'R'){
            cntR++;
        }
    }

    cout << cntL + cntR + 1;

    return 0;
}