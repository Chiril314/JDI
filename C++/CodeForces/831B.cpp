#include <iostream>
#include <vector>

using namespace std;

int main() {
    string a, b, s;
    cin >> a >> b >> s;

    vector<char> check(26);
    for(int i = 0; i < 26; i++)
        check[a[i] - 'a'] = b[i];

    for(int i = 0; i < s.size(); i++){
        int flag = 0;

        if(s[i] >= 'A' && s[i] <= 'Z')
            flag = 1;
        else if(s[i] >= '0' && s[i] <= '9')
            flag = 2;

        if(flag == 2)
            continue;
        else if(flag == 1)
            s[i] = s[i] + 32;  

        s[i] = check[s[i] - 'a'];

        if(flag == 1)
            s[i] = s[i] - 32; 
    }

    cout << s;
    
    return 0;
}