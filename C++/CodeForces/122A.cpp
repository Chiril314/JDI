#include <iostream>
#include <string>

using namespace std;

int  main(){
    string s;
    cin >> s;

    int luckyNumbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;
    n = stoi(s);

    bool flag1 = true;
    for(int i = 0; i < 14; i++){
        if(n % luckyNumbers[i] == 0){
            cout << "YES";
            flag1 = false;
            break;
        }
    }

    if(flag1 == true){
        bool flag2 = true;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != '4' && s[i] != '7'){
                flag2 = false;
                break;
            }
        }

        if(flag2 == true){
            cout << "YES";
        } else{
            cout << "NO";
        }
    }

    return 0;
}