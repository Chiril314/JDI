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
        vector<string> s(3);
        for(int i = 0; i < 3; i++)
            cin >> s[i];

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;
        for(int i = 0; i < 3; i++)  
            for(int j = 0; j < 3; j++)
                if(s[i][j] == 'X')
                    cnt1++;
                else if(s[i][j] == 'O')
                    cnt2++;
                else
                    cnt3++;

        if(cnt1 == cnt2 + 1 || cnt1 == cnt2){
            int id = 0;
            bool flag = false;
            if(s[0][0] == s[0][1] && s[0][1] == s[0][2] && s[0][0] != 'S'){
                flag = true;
                id = 1;
            }

            if(s[1][0] == s[1][1] && s[1][1] == s[1][2] && s[1][0] != 'S'){
                flag = true;
                id = 2;
            }

            if(s[2][0] == s[2][1] && s[2][1] == s[2][2] && s[2][0] != 'S'){
                flag = true;
                id = 3;
            }
            
            if(s[0][0] == s[1][0] && s[1][0] == s[2][0] && s[0][0] != 'S'){
                flag = true;
                id = 1;
            }
            
            if(s[0][1] == s[1][1] && s[1][1] == s[2][1] && s[0][1] != 'S'){
                flag = true;
                id = 2;
            }
            
            if(s[0][2] == s[1][2] && s[1][2] == s[2][2] && s[0][2] != 'S'){
                flag = true;
                id = 3;
            }
            
            if(s[0][0] == s[1][1] && s[1][1] == s[2][2] && s[0][0] != 'S'){
                flag = true;
                id = 1;
            }

            if(s[0][2] == s[1][1] && s[1][1] == s[2][0] && s[0][2] != 'S'){
                flag = true;
                id = 2;
            }

            if(flag){
                if(id == 1 && s[0][0] == 'X'){
                    cout << "Ana" << endl;
                    continue;
                } else if(id == 1 && s[0][0] == 'O'){
                    cout << "Bogdan" << endl;
                    continue;
                }

                if(id == 2 && s[1][1] == 'X'){
                    cout << "Ana" << endl;
                    continue;
                } else if(id == 2 && s[1][1] == 'O'){
                    cout << "Bogdan" << endl;
                    continue;
                }

                if(id == 3 && s[2][2] == 'X'){
                    cout << "Ana" << endl;
                    continue;
                } else if(id == 3 && s[2][2] == 'O'){
                    cout << "Bogdan" << endl;
                    continue;
                }
            } else if(cnt3){
                cout << "Eroare" << endl;
                continue;
            } else{
                cout << "Remiza" << endl;
                continue;
            }
        } else  
            cout << "Eroare" << endl;
    } 

    return 0;
}