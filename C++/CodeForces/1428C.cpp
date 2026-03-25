#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int ans = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'A' || ans == 0){
                ans++;
                continue;
            }

            ans--;
        }

        cout << ans << endl;
    }

    return 0;
}