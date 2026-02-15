#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        while(k--){
            int l, r;
            cin >> l >> r;

            l--;
            r--;

            bool flag = false;
            for(int i = 0; i < l; i++)
                if(s[i] == s[l])
                    flag = true;
            
            for(int i = r + 1; i < n; i++)
                if(s[i] == s[r])
                    flag = true;

            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}