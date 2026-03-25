#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<string> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    string check1 = s[0], check2;
    int goals1 = 0, goals2 = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != check1){
            check2 = s[i];
            break;
        }
    }

    for(int i = 0; i < n; i++){
        if(s[i] == check1){
            goals1++;
        } else{
            goals2++;
        }
    }

    if(goals1 > goals2){
        cout << check1;
    } else{
        cout << check2;
    }

    return 0;
}   