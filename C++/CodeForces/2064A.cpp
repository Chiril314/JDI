#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        char check = '1';
        int ans = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == check){
                ans++;
                if(check == '1')
                    check = '0';
                else 
                    check = '1';
            }
        }

        cout << ans << endl;
    }

    return 0;
}