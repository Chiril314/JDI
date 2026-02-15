#include <iostream>
#include <vector>

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

        vector<bool> flag(26, false);
        for(int i = 0; i < s.size(); i++){
            if(i + 1 < s.size() && s[i] == s[i + 1]){
                i++;
                continue;
            }

            flag[s[i] - 'a'] = true;
        }

        for(int i = 0; i < 26; i++)
            if(flag[i]) 
                cout << char('a' + i);
            
        cout << endl;
    }

    return 0;
}