#include <iostream>

using namespace std;

int main(){
    string s;
    while(cin >> s){
        int n = s.size(), check = 0;
        if(n == 0){
            cout << "NU" << endl;
            continue;
        }

        bool flag1 = true, flag2 = false, flag3 = true;
        for(int i = 0; i < n; i++){
            char c = s[i];
            if(s[i] >= '0' && s[i] <= '9'){
                while(i + 1 < n && s[i + 1] >= '0' && s[i + 1] <= '9') 
                    i++;
                flag1 = false;
                flag2 = true;
            } else if(s[i] == '('){
                if(!flag1){ 
                    flag3 = false; 
                    break; 
                }

                check++;
                flag1 = true;
                flag2 = false;
            } else if(s[i] == ')'){
                if(!flag2){ 
                    flag3 = false; 
                    break; 
                } 

                check--;
                if(check < 0){ 
                    flag3 = false; 
                    break; 
                }
            } else if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
                if(!flag2){ 
                    flag3 = false; 
                    break; 
                }

                flag1 = true;
                flag2 = false;
            } else{
                flag3 = false; 
                break; 
            }
        }

        if(flag3 && check == 0 && flag2)
            cout << "DA" << endl;
        else
            cout << "NU" << endl;
    }

    return 0;
}