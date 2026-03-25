#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string s;
    cin >> s;

    string a[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(s.size() == 1){
        cout << a[s[0] - '0'];
    } else if(s == "10"){
        cout << "ten";
    } else if(s == "11"){
        cout << "eleven";
    } else if(s == "12"){
        cout << "twelve";
    } else if(s == "13"){
        cout << "thirteen";
    } else if(s == "14"){
        cout << "fourteen";
    } else if(s == "15"){
        cout << "fifteen";
    } else if(s == "16"){
        cout << "sixteen";
    } else if(s == "17"){
        cout << "seventeen";
    } else if(s == "18"){
        cout << "eighteen";
    } else if(s == "19"){
        cout << "nineteen";
    } else{
        string b[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
        cout << b[s[0] - '2'];
        if(s[1] != '0')
            cout << '-' << a[s[1] - '0'];
    }

    return 0;
}