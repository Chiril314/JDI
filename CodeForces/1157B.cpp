#include <iostream>
#include <string>

using namespace std;

int main(){
    long long n;
    cin >> n;
    
    string s;
    cin >> s;

    int f[9];
    for(int i = 0; i < 9; i++)
        cin >> f[i];

    bool flag = false;  
    for(int i = 0; i < s.size(); i++){
        int check = s[i] - '0', newS = f[check - 1];

        if(newS > check){
            s[i] = newS + '0';
            flag = true;
        } else if(newS < check && flag)
            break;
    }

    cout << s;

    return 0;
}