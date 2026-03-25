#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, c = 0;
        cin >> n;

        string s;
        cin >> s;

        for(int i = n - 1; i >= 0; i--){
            if(s[i] != ')')
                break;
            
            c++;
        }

        if(c > n - c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}