#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            cnt++;
        }
    }

    if(s[0] >= 'A' && s[0] <= 'Z' && cnt == s.size() - 1){
        for(int i = 0; i < s.size(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = tolower(s[i]);
            }
        }
    } else if(cnt == s.size() - 1){
        for(int i = 0; i < s.size(); i++){
            if(s[0] >= 'a' && s[0] <= 'z'){
                s[0] = toupper(s[0]);
            } else if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = tolower(s[i]);
            }
        }
    }

    cout << s;

    return 0;
}