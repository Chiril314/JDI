#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    int cntLower = 0, cntUpper = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cntLower++;
        } else{
            cntUpper++;
        }
    }

    if(cntLower >= cntUpper){
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s;
    } else{
        for(int i = 0; i < s.size(); i++){
            s[i] = toupper(s[i]); 
        }
        cout << s;
    }

    return 0;
}