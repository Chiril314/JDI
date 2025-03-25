#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;

        int check = 0;
        for(int i = 0; i < s.size(); i++)
            check += (s[i] - '0');

        while(check >= 10){
            s = to_string(check);   
            check = 0;
            for(int i = 0; i < s.size(); i++)
                check += (s[i] - '0');
        }

        if(check == 9)
            cout << "inteligent" << endl;
        else if(check == 8)
            cout << "vorbaret" << endl;
        else if(check == 7)
            cout << "norocos" << endl;
        else
            cout << "obisnuit" << endl; 
    }

    return 0;
}