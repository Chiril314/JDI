#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, mx = -1;
    cin >> n;

    string ans = "-1";
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        int m = s.size();
        bool flag1 = false, flag2 = false;
        for(int j = 0; j < m; j++){
            if(!flag1 && s[j] >= 'a' && s[j] <= 'z')
                flag1 = true;

            if(!flag2 && s[j] >= 'A' && s[j] <= 'Z')
                flag2 = true;
        }

        if(flag1 && flag2 && m > mx){
            mx = m;
            ans = s;
        }
    }

    cout << ans;

    return 0;
}