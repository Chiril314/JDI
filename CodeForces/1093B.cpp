#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        vector<int> cnt(26, 0);
        for(int i = 0; i < s.size(); i++)
            cnt[s[i] - 'a']++;

        int check = 0;
        for(int i = 0; i < 26; i++)
            if(cnt[i] != 0)
                check++;

        if(check == 1)
            cout << -1 << endl;
        else{
            string temp = s;
            reverse(temp.begin(), temp.end());

            for(int i = 0; i < s.size() - 1; i++){
                if(temp != s){
                    cout << temp << endl;
                    break;
                }

                char T = temp[i];
                temp[i] = temp[i + 1];
                temp[i + 1] = T;

                if(temp == s){
                    T = temp[i];
                    temp[i] = temp[i + 1];
                    temp[i + 1] = T;
                }
            }
        }
    }

    return 0;
}