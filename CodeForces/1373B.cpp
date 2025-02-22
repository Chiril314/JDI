#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int cnt0 = 0, cnt1 = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0')
                cnt0++;
            else
                cnt1++;
        }

        int check;
        if(cnt0 < cnt1)
            check = cnt0;
        else
            check = cnt1;

        if(check % 2 == 1) 
            cout << "DA" << endl;
        else 
            cout << "NET" << endl; 
    }

    return 0;
}