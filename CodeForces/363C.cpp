#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<char> s;

    char x;
    while(cin >> x)
        s.push_back(x);

    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1] && s[i + 1] == s[i + 2] && i < s.size() - 2){
            s.erase(s.begin() + i);
            i--;
        } else if(s[i - 2] == s[i - 1] && s[i] == s[i + 1] && i > 1){
            s.erase(s.begin() + i);
            i--;
        }
    }

    for(int i = 0; i < s.size(); i++)
        cout << s[i];

    return 0;
}