#include <iostream>

using namespace std;

int main(){
    int n;
    string s, a = "", b = "";

    cin >> n >> s;
    if(n % 2 == 1){
        for(int i = 0; i < n - 1; i += 2){
            b += s[i];
            a += s[i+1];
        }
        b += s[n-1];
    } else{
        for(int i = 0; i < n - 1; i += 2){
            a += s[i];
            b += s[i+1];
        }
    }

    reverse(a.begin(), a.end());
    string ans = "";
    ans = a + b;

    cout << ans;

    return 0;
}