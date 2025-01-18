#include <iostream>
#include <string>

using namespace std;

int main(){
    int n, check;
    cin >> n;

    string s;
    cin >> s;

    bool flag[26] = {false};

    for(int i = 0; i < n; i++){
        char l = tolower(s[i]);
        check = l - 'a';
        flag[check] = true;
    }

    for(int i = 0; i < 26; i++){
        if(!flag[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}