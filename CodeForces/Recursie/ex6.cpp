#include <iostream>

using namespace std;

string reverseString(string s, int i){
    if(i == 0)
        return string(1, s[i]);

    return string(1, s[i]) + reverseString(s, i - 1);
}


int main(){
    string s;
    cin >> s;

    cout << reverseString(s, s.size() - 1);

    return 0;
}