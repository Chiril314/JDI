#include <iostream>

using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    int cnt0 = 0, cnt1 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            cnt1++;
        } else{
            cnt0++;
        }
    }

    n -= min(cnt0, cnt1) * 2;

    cout << n;

    return 0;
}