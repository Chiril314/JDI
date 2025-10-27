#include <iostream>
#include <cmath>
using namespace std;

int btod(string s){
    if(s == "0")
        return 0;

    int ans = 0;
    for(int i = s.size() - 1; i >= 0; i--)
        if(s[i] == '1')
            ans += pow(2, s.size() - 1 - i);

    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 1;
    cin >> n;

    string s = "110";
    while(true){
        int check = btod(s);
        if(check > n)
            break;

        s += "0";
        reverse(s.begin(), s.end());
        s += "1";
        reverse(s.begin(), s.end());

        if(n % check != 0)
            continue;
        else if(n % check == 0)
            ans = check;
    }

    cout << ans;

    return 0;
}