#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());

    int cnt = 0;
    for(int i = 0; i < n; i++)
        if(s[i] == '1')
            cnt++;

    if(cnt > 0){
        cout << '1';
        for(int i = 0; i < n - cnt; i++)    
            cout << '0';
    } else
        cout << '0';

    return 0;
}