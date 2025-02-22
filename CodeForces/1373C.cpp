#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        long long ans = 0, check = 0;
        for(long long i = 0; i < s.size(); i++){
            ans++;
            if(s[i] == '-')
                check--;
            else
                check++;

            if(check < 0){
                ans += (i + 1);
                check = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}