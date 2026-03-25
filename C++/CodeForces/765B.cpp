#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;

    bool seen[26] = {false};

    char check = 'a';
    for(int i = 0; i < s.size(); i++){
        int index = s[i] - 'a';
        if(!seen[index]){
            if(s[i] != check){
                cout << "NO";
                return 0;
            }

            seen[index] = true;
            check++;
        }
    }

    cout << "YES";

    return 0;
}