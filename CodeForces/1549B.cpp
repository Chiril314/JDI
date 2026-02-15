#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s, t;
        cin >> s >> t;
        
        int ans = 0;
        for(int i = 0; i < n; i++)
            if(t[i] == '1'){
                if(s[i] == '0'){
                    ans++;
                    s[i] = '2';
                } else if(i - 1 >= 0 && s[i - 1] == '1'){
                    ans++;
                    s[i - 1] = '0';
                } else if(i + 1 < n && s[i + 1] == '1'){
                    ans++;
                    s[i + 1] = '0';
                }
            }

        cout << ans << endl;
    }

    return 0;
}