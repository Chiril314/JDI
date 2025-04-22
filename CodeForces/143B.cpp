#include <iostream>

using namespace std;

int main(){
    string s;
    cin >> s;

    if(s[0] == '-'){
        string ans = "($";

        int cnt = 0, index = -1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == '.'){
                index = i;
                break;
            }
            cnt++;
        }

        int k = 1;
        while(cnt != 0){
            ans += s[k];
            cnt--;
            if(cnt % 3 == 0 && cnt != 0)
                ans += ',';
            k++;
        }

        if(index == -1)
            ans += ".00";
        else{
            if(s.size() - index == 2){
                ans += '.';
                ans += s[index + 1];
                ans += '0';
            } else{
                ans += '.';
                ans += s[index + 1];
                ans += s[index + 2];
            }
        }

        ans += ')';

        cout << ans;        
    } else{
        string ans = "$";

        int cnt = 0, index = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '.'){
                index = i;
                break;
            }
            cnt++;
        }

        int k = 0;
        while(cnt != 0){    
            ans += s[k];
            cnt--;
            if(cnt % 3 == 0 && cnt != 0)
                ans += ',';
            k++;
        }

        if(index == -1)
            ans += ".00";
        else{
            if(s.size() - index == 2){
                ans += '.';
                ans += s[index + 1];
                ans += '0';
            } else{
                ans += '.';
                ans += s[index + 1];
                ans += s[index + 2];
            }
        }

        cout << ans;
    }

    return 0;
}