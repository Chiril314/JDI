#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        if(s[0] == ')' || s[s.size() - 1] == '(' || s.size() % 2 == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}