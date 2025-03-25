#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string palindromCheck = s;
    reverse(palindromCheck.begin(), palindromCheck.end());

    int check;
    if(palindromCheck == s)
        check = 0;

    string addS = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1')
            addS += '0';
        else
            addS += '1';
    }

    if(addS == palindromCheck)
        check = 1;

    int q;
    cin >> q;

    if(check == 2){
        for(int i = 0; i < q; i++)
            cout << "Nu" << endl;
    } else{
        while(q--){
            int p;
            cin >> p;

            if(p % 2 == check)
                cout << "Da" << endl;
            else
                cout << "Nu" << endl;
        }
    }

    return 0;
}