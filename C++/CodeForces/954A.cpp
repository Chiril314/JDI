#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, ans = 0;
    cin >> n;

    string s;
    cin >> s;

    s += 'c';
    for(int i = 0; i < n; i++)
        if(s[i] != s[i + 1]){
            ans++;
            i++;
        } else 
            ans++;
        
    cout << ans;

    return 0;
}