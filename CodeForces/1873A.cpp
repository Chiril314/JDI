#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    string s;
 
    cin >> t;
    
    while(t--){
        cin >> s;
        int cnt = 0;
        if(s[0] != 'a') ++ cnt;
        if(s[1] != 'b') ++ cnt;
        if(s[2] != 'c') ++ cnt;
        
        if(cnt <= 2) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
 
    return 0;
}