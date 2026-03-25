#include <iostream>
#include <algorithm>

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

        int a = 0, b = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == s[i + 1] && s[i] == '1')
                a++;
            
            if(s[i] == s[i + 1] && s[i] == '0') 
                b++;
        }

        cout << max(a, b) << endl;
    }

    return 0;
}