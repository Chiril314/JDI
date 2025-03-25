#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    string t;
    cin >> t;

    int check1 = 1, check2 = 0, check3 = 0, check4 = 0;
    for(int i = 0; i < n; i++){
        if(t[i] == '('){
            check2++;
            check3++;
        } else{
            check2--;
            check4++;
            if(check2 < 0){
                check1--;
                check2++;
            }

            if(check1 < 0){
                cout << "No";
                return 0;
            }
        }
    }

    if(check3 == check4)
        cout << "Yes";
    else    
        cout << "No";

    return 0;
}