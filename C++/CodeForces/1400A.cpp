#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        if(n == 1){
            cout << s << endl;
            continue;
        }

        cout << string(n, s[n - 1]) << endl;
    }

    return 0;
}