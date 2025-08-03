#include <iostream>
#include <string>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    string s;
    cin >> s;

    bool flag = true;
    for(int i = 0; i < n; i++){
        if(s[i] == '1' && s[i + 1] == '1')
            flag = false;
        if(s[i] == '0' && (s[i + 1] == '0' || i + 1 >= s.size()) && (s[i - 1] == '0' || i - 1 < 0))
            flag = false;
    }

    if(flag)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}