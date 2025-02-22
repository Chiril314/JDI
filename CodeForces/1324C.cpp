#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = 0, cnt = 0, n = s.size();
        for(int i = 0; i < n; i++){
            if(s[i] == 'L'){
                cnt++;
                ans = max(ans, cnt);
            } else
                cnt = 0;
        }
        
        cout << ans + 1 << endl;
    }

    return 0;
}