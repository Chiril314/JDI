#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int check1;
        bool flag1 = false;
        for(int i = 0; i < n; i++){
            if(s[i] == '>'){
                check1 = i;
                flag1 = true;
                break;
            }
        }

        int check2;
        bool flag2 = false;
        for(int i = n - 1; i >= 0; i--){
            if(s[i] == '<'){
                check2 = i;
                flag2 = true;
                break;
            }
        }

        if(flag1 && flag2)
            cout << min(check1, n - check2 - 1) << endl;
        else if(flag1 && !flag2)
            cout << check1 << endl;
        else if(!flag1 && flag2)
            cout << n - check2 - 1 << endl;
    }

    return 0;
}