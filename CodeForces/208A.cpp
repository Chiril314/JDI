#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    string ans = "", check = "WUB";

    bool flag = false;
    
    for (int i = 0; i < s.size(); i++){
        if (i + 2 < s.size() && s.substr(i, 3) == check){
            i += 2;
            if (flag){
                ans += " "; 
            }

            flag = false;
        } else{
            if (!flag){
                flag = true;
            }
            
            ans += s[i];
        }
    }

    cout << ans;

    return 0;
}
