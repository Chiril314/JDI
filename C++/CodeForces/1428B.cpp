#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, ans = 0;
        cin >> n;

        string s;
        cin >> s;

        bool flag1 = true, flag2 = true;
        for(int i = 0; i < n; i++){
            if(s[(i + 1) % n] == '-' || s[i] == '-')
                ans++;

            if(s[i] == '<')
                flag1 = false;

            if(s[i] == '>')
                flag2 = false;
        }

        if(flag1 || flag2){
            cout << n << endl;
            continue;
        }

        cout << ans << endl;
    }

    return 0;
}