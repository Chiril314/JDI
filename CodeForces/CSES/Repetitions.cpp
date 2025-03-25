#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    int ans = 0;
    int cnt = 1;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1])
            cnt++;
        else{
            ans = max(ans, cnt);
            cnt = 1;
        }
    }

    cout << max(ans, cnt);

    return 0;
}