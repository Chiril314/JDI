#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    int cnt = 0;
    bool flag[26] = {false};

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            int index = int(s[i]) - int('a') + 1;
            if(!flag[index]){
                flag[index] = true;
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}