#include <iostream>

using namespace std;

int main(){
    char l;
    cin >> l;

    string check1 = "qwertyuiop";
    string check2 = "asdfghjkl;";
    string check3 = "zxcvbnm,./";

    string s;
    cin >> s;

    if(l == 'L'){
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < check1.size(); j++){
                if(s[i] == check1[j] && j + 1 < check1.size()){  
                    s[i] = check1[j + 1];
                    break;  
                }
            }
            for(int j = 0; j < check2.size(); j++){
                if(s[i] == check2[j] && j + 1 < check2.size()){
                    s[i] = check2[j + 1];
                    break;
                }
            }
            for(int j = 0; j < check3.size(); j++){
                if(s[i] == check3[j] && j + 1 < check3.size()){
                    s[i] = check3[j + 1];
                    break;
                }
            }
        }
    } else if(l == 'R'){
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < check1.size(); j++){
                if(s[i] == check1[j] && j > 0){ 
                    s[i] = check1[j - 1];
                    break;
                }
            }
            for(int j = 0; j < check2.size(); j++){
                if(s[i] == check2[j] && j > 0){
                    s[i] = check2[j - 1];
                    break;
                }
            }
            for(int j = 0; j < check3.size(); j++){
                if(s[i] == check3[j] && j > 0){
                    s[i] = check3[j - 1];
                    break;
                }
            }
        }
    }

    cout << s;

    return 0;
}