#include <iostream>
#include <string>

using namespace std;

int main() {
    string s, distinctChar = "1";
    cin >> s;
    bool check;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < distinctChar.size(); j++){
            if(s[i] != distinctChar[j]){
                check = true;
            } else{
                check = false;
                break;
            }
        }

        if(check == true){
            distinctChar += s[i];
        }
    }
    int cnt = distinctChar.size() - 1;

    if (cnt % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}