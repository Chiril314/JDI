#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        cout << s.substr(1, s.size() - 1) + s[0] << ' ' << s[s.size() - 1] + s.substr(0, s.size() - 1) << endl;
    }

    return 0;
}