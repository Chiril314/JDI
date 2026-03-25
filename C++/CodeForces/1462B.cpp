#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, p = 0;
        cin >> n;

        string s, t = "2020";
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] != t[p])
                break;
            
            p++;
        }

        for(int i = n - 4 + p; i < n; i++){
            if(s[i] != t[p])
                break;
            
            p++;
        }

        if(p >= 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}