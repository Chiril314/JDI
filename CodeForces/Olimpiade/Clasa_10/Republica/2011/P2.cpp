#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    int n;
    cin >> s >> n;

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[0] + s[1] + s[2] == s[3] + s[4] + s[5])
            ans++;

        s = to_string(stoi(s) + 1);
    }

    cout << ans;

    return 0;
}