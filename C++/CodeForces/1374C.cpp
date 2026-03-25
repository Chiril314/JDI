#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;

        cin >> n >> s;

        int opened = 0, ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '(')
                opened++;
            else
                if(opened > 0)
                    opened--;
                else   
                    ans++;
        }

        cout << ans << endl;
    }

    return 0;
}