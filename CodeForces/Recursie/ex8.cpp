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

    if(s == reverseString(s, s.size() - 1))
        cout << "The string " << s << " is palindrome.";
    else    
        cout << "The string " << s << " is not palindrome.";

    return 0;
}